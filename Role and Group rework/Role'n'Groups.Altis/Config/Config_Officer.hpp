/*
	Faction: Medic
	Author: Dom
*/
class officer {
	name = $STR_B_OFFICER_F0;
	rank = "Captain";
	description = $STR_DT_Officer_Description;
	maxCount = 1;
	traits[] = { //format {"trait",value,isCustom}}

	};
	icon = "a3\ui_f\data\map\vehicleicons\iconManCommander_ca.paa";

	defaultLoadout[] = {
		{"arifle_MXC_ACO_F","","","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},
		{},
		{"hgun_Pistol_heavy_01_MRD_F","","","optic_MRD",{"11Rnd_45ACP_Mag",11},{},""},
		{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30},{"Chemlight_green",1,1}}},
		{"V_BandollierB_rgr",{{"30Rnd_65x39_caseless_mag",1,30},{"11Rnd_45ACP_Mag",2,11},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",1,1}}},
		{},
		"H_MilCap_mcamo","",{},
		{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}
	};

	arsenalWeapons[] = {

	};
	arsenalMagazines[] = {

	};
	arsenalItems[] = {
		"H_Beret_Colonel", "U_I_E_Uniform_01_officer_F"
	};
	arsenalBackpacks[] = {

	};
};