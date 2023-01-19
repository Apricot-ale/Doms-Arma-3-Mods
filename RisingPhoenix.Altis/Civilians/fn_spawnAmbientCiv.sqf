/*
	File: fn_spawnAmbientCiv.sqf
	Author: Dom
	Description: Spawns ambient civs and starts the handler if required
*/
params [
	["_count",1,[0]]
];

private _locations = DT_civLocations select {!(_x in DT_activeCivLocations)};
private _civilianTypes = getArray(missionConfigFile >> "Civilian_Setup" >> "civilianTypes");
private _civilianVehicleTypes = getArray(missionConfigFile >> "Civilian_Setup" >> "civilianVehicleTypes");

for "_i" from 1 to _count do {
	private _nearRoads = (selectRandom _locations) nearRoads 750;
	private _spawnPos = getPosATL (selectRandom _nearRoads);

	private _vehicle = createVehicle [selectRandom _civilianVehicleTypes,_spawnPos,[],0,"NONE"];
	private _group = createGroup [civilian,true];
	private _driver = _group createUnit [selectRandom _civilianTypes,_spawnPos,[],0,"NONE"];
	[_group] call CBA_fnc_clearWaypoints;
	_driver moveInDriver _vehicle;
	_driver disableAI "FSM";

	private _karma = [_spawnPos] call DT_fnc_getKarma;
	if (_karma < -25) then {
		_vehicle addMagazineCargoGlobal ["DemoCharge_Remote_Mag",1];
		_vehicle setVariable ["carBomb",true,true];
	} else {
		_driver addEventHandler ["Hit",DT_fnc_civilianHit];
		_driver addEventHandler ["Killed",DT_fnc_civilianKilled];
	};

	DT_ambientCivs pushBack [_driver,_group,_vehicle,[0,0,0]];
};

if (DT_ambientCivHandle isEqualTo -1) then {
	DT_ambientCivHandle = [
		{
			if (DT_ambientCivs isEqualTo []) exitWith {
				[_this select 1] call CBA_fnc_removePerFrameHandler;
				DT_ambientCivHandle = -1;
			};

			private _toDelete = [];
			{
				_x params ["_unit","_group","_vehicle","_lastPos"];
				if !(alive _unit) then {
					_toDelete pushBack _forEachIndex;
					if (alive _vehicle && {[_unit] call DT_fnc_areaIsClear}) then {
						deleteVehicle _vehicle;
					};
				} else {
					if (playableUnits isEqualTo []) exitWith {};
					private _currentPos = getPosATL _unit;
					if (_lastPos distance _currentPos < 1 && {[_vehicle] call DT_fnc_areaIsClear}) then { //we are stuck & no players nearby?
						private _locations = DT_civLocations select {!(_x in DT_activeCivLocations)};
						private _nearRoads = (selectRandom _locations) nearRoads 500;
						private _spawnPos = getPosATL (selectRandom _nearRoads);

						_vehicle setPosATL _spawnPos;
						_vehicle setDamage 0;
						
						if (isNull objectParent _unit) then {
							_unit moveInDriver _vehicle;
						};
					} else {
						if (waypoints _group isEqualTo []) then {
							private _position = [];
							while {_position isEqualTo []} do {
								private _nearRoads = (selectRandom DT_civLocations) nearRoads 500;
								if (_nearRoads isNotEqualTo []) then {
									_position = getPosATL (selectRandom _nearRoads);
								};
							};
							
							private _waypoint = _group addWaypoint [_position,10];
							_waypoint setWaypointType "MOVE";
							_waypoint setWaypointBehaviour "SAFE";
							_waypoint setWaypointSpeed "LIMITED";
							_waypoint setWaypointCompletionRadius 30;
							_waypoint setWayPointStatements ["true","deleteWaypoint [group this,currentWaypoint (group this)]"]; //clear waypoints
						} else {
							if (!isNull _vehicle && {fuel _vehicle < 0.1}) then {
								[_vehicle,1] remoteExecCall ["setFuel",_vehicle];
							};
							_x set [3,_currentPos];
						};
					};
				};
			} forEach DT_ambientCivs;

			reverse _toDelete;
			{
				DT_ambientCivs deleteAt _x;
			} forEach _toDelete;

			if (_toDelete isNotEqualTo []) then {
				[count _toDelete] call DT_fnc_spawnAmbientCiv;
			};
		},
		15
	] call CBA_fnc_addPerFrameHandler;
};