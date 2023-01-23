/*
	File: fn_initSupportMenu.sqf
	Author: Dom
	Description: Opens and populates the support menu
*/

private _display = createDialog ["DT_supportMenu",true];
private _tree = _display displayCtrl 1500;
private _supportActions = getArray(missionConfigFile >> DT_bluforFaction >> "supports");
private _supportCooldowns = missionNamespace getVariable ["DT_supportCooldowns",[]];

{
	_x params ["_title","_action","_cooldown"];
	private _actionIndex = _forEachIndex;
	private _readyTime = _supportCooldowns select _actionIndex;

	if (CBA_missionTime < _readyTime) then {_title = format ["%1 - %2 minutes till available",_title,ceil((_readyTime - CBA_missionTime) / 60)]};
	_tree tvAdd [[],_title];
	_tree tvSetData [[_actionIndex],str([_action,_cooldown])];

	if (_action isEqualTo "mortar") then {
		{
			_tree tvAdd [[_actionIndex],_x];
		} forEach ["HE x1","Smoke x1","Illumination x1","HE x3","Smoke x3","Illumination x3","HE x5","Smoke x5","Illumination x5"];
	} else {
		if (_action isEqualTo "supplyDrop") then {
			private _allSupplyBoxes = getArray(missionConfigFile >> DT_bluforFaction >> "Logi_Setup" >> "supplyCrates") select {_x select 0 in ["medicalCrateCategory","lightWeaponCrateCategory"]};
			{
				_x params ["_category","_title","_crateSize","_contents"];
				_tree tvAdd [[_actionIndex],_title];
				_tree tvSetData [[_actionIndex,_forEachIndex],str([_crateSize,_contents])];
			} forEach _allSupplyBoxes;
		};
	};
} forEach _supportActions;

_tree tvSetCurSel [0];