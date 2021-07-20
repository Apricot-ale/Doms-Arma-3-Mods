#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
	"DT_viewDistanceEnabled",
	"CHECKBOX",
	["STR_DTVD_enableOption","STR_DTVD_enableOptionDescription"],
	["STR_DTVD_modCategory","STR_DTVD_modSubCategory"],
	true,nil,
	{
		params ["_value"];
		[_value] call DT_fnc_initViewDistance;
	}
] call CBA_fnc_addSetting;
[["STR_DTVD_modCategory","STR_DTVD_modSubCategory"],"openViewDistanceMenu","STR_DTVD_openMenu",{[] call DT_fnc_openViewDistanceMenu},"",[DIK_BACKSLASH,[false,false,false]]] call CBA_fnc_addKeybind;

[
	"DT_viewDistanceMax",
	"SLIDER",
	["STR_DTVD_maxDistance","STR_DTVD_maxDistanceDescription"],
	["STR_DTVD_modCategory","STR_DTVD_modSubCategory"],
	[100,40000,12000,0],
	1
] call CBA_fnc_addSetting;