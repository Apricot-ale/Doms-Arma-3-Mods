class Dynamic_Roles {
	#include "Config_Officer.hpp"

	#include "Config_Rifleman.hpp"
	#include "Config_Medic.hpp"
	#include "Config_Engineer.hpp"
	#include "Config_TeamLeader.hpp"
	#include "Config_SquadLeader.hpp"

	#include "Config_Pilot.hpp"
	#include "Config_UAVOp.hpp"

	#include "Config_Crewman.hpp"
	#include "Config_Commander.hpp"
};

class Common_Arsenal {
	items[] = {
		"ACE_adenosine", "ACE_epinephrine", "ACE_morphine",
		"ACE_fieldDressing", "ACE_elasticBandage", "ACE_packingBandage", "ACE_quikclot",
		"ACE_bloodIV", "ACE_bloodIV_250", "ACE_bloodIV_500",
		"ACE_plasmaIV", "ACE_plasmaIV_250", "ACE_plasmaIV_500",
		"ACE_salineIV", "ACE_salineIV_250", "ACE_salineIV_500",
		"ACE_tourniquet", "ACE_splint",
		"ACE_surgicalKit",

		"ACE_Chemlight_HiBlue", "ACE_Chemlight_HiGreen", "ACE_Chemlight_HiRed", "ACE_Chemlight_HiWhite", "ACE_Chemlight_HiYellow", "ACE_Chemlight_UltraHiOrange",
		"Chemlight_blue", "Chemlight_green", "Chemlight_red", "Chemlight_yellow", "acc_flashlight_pistol", "ACE_Flashlight_XL50", "ACE_Flashlight_MX991", "ACE_Flashlight_KSF1",
		"ACE_Chemlight_IR", "ACE_Chemlight_Orange", "ACE_Chemlight_White", "ACE_Chemlight_Shield", "ACE_Chemlight_Shield_Blue", "ACE_Chemlight_Shield_Green", "ACE_Chemlight_Shield_Orange", "ACE_Chemlight_Shield_Red", "ACE_Chemlight_Shield_White", "ACE_Chemlight_Shield_Yellow",
		"ACE_HandFlare_Green", "ACE_HandFlare_Red", "ACE_HandFlare_White", "ACE_HandFlare_Yellow", "ACE_IR_Strobe_Item",
		"SmokeShell", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellOrange", "SmokeShellPurple", "SmokeShellRed", "SmokeShellYellow",
		"HandGrenade", "MiniGrenade",

		"ACE_RangeTable_82mm", "ACE_artilleryTable", "ACE_RangeCard", "ACE_Tripod", "ACE_ATragMX", "ACE_SpareBarrel", "ACE_SpottingScope", "ACE_Kestrel4500",

		"ItemMap","ItemCompass", "ItemWatch", "ItemGPS", "ACE_Altimeter", "ACE_MapTools", "ACE_CableTie", "ACE_EarPlugs", "ACE_microDAGR", "ACE_DAGR", "acc_flashlight_pistol",

		"ToolKit", "ACE_DefusalKit","ACE_wirecutter", "ACE_EntrenchingTool", "ACE_Clacker", "ACE_M26_Clacker", "MineDetector", "ACE_SpraypaintRed", "ACE_SpraypaintGreen", "ACE_SpraypaintBlue", "ACE_SpraypaintBlack",
		"ACE_rope12", "ACE_rope15", "ACE_rope18", "ACE_rope27", "ACE_rope36",

		"B_UavTerminal", "ACE_UAVBattery", "ACE_VectorDay", "ACE_Vector", "Laserdesignator", "Laserbatteries",

		"U_B_Wetsuit", "U_B_survival_uniform","V_RebreatherB", "G_B_Diving", "G_Diving",
		"U_B_PilotCoveralls",
		
		"V_Rangemaster_belt",

		"B_Carryall_cbr", "B_Kitbag_cbr", "B_AssaultPack_cbr", "B_LegStrapBag_coyote_F", "B_Parachute", "ACE_NonSteerableParachute",
		
		"launch_B_Titan_short_F",
		"launch_B_Titan_F",
		"launch_MRAWS_green_rail_F",
		"launch_MRAWS_olive_rail_F",
		"launch_MRAWS_sand_rail_F",
		"srifle_EBR_F",
		"srifle_LRR_F",
		"hgun_ACPC2_F",
		"hgun_Pistol_heavy_01_F",
		"hgun_P07_F",
		"arifle_MXC_F",
		"arifle_MX_F",
		"arifle_MX_GL_F",
		"arifle_MX_SW_F",
		"arifle_MXM_F",
		"arifle_MXC_Black_F",
		"arifle_MX_Black_F",
		"arifle_MX_GL_Black_F",
		"arifle_MX_SW_Black_F",
		"arifle_MXM_Black_F",
		"hgun_PDW2000_F",
		"SMG_01_F",
		"SMG_02_F",
		"LMG_Mk200_F",
		"LMG_Mk200_black_F",
		"arifle_SPAR_01_blk_F",
		"arifle_SPAR_01_snd_F",
		"arifle_SPAR_01_GL_blk_F",
		"arifle_SPAR_01_GL_snd_F",
		"arifle_SPAR_02_blk_F",
		"arifle_SPAR_02_snd_F",
		"arifle_SPAR_03_blk_F",
		"arifle_SPAR_03_snd_F",
		"arifle_SDAR_F",

		"SatchelCharge_Remote_Mag",
		"DemoCharge_Remote_Mag",
		"B_IR_Grenade",

		"20Rnd_556x45_UW_mag",
		"200Rnd_65x39_cased_Box",
		"200Rnd_65x39_cased_Box_Tracer",
		"30Rnd_65x39_caseless_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_mag_Tracer",
		"30Rnd_65x39_caseless_black_mag_Tracer",
		"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim",
		"100Rnd_65x39_caseless_mag",
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_mag_Tracer",
		"100Rnd_65x39_caseless_black_mag_tracer",
		"ACE_100Rnd_65x39_caseless_mag_Tracer_Dim",
		"1Rnd_HE_Grenade_shell",
		"3Rnd_HE_Grenade_shell",
		"UGL_FlareWhite_F",
		"UGL_FlareGreen_F",
		"UGL_FlareRed_F",
		"UGL_FlareYellow_F",
		"UGL_FlareCIR_F",
		"3Rnd_UGL_FlareWhite_F",
		"3Rnd_UGL_FlareGreen_F",
		"3Rnd_UGL_FlareRed_F",
		"3Rnd_UGL_FlareYellow_F",
		"3Rnd_UGL_FlareCIR_F",
		"1Rnd_Smoke_Grenade_shell",
		"1Rnd_SmokeRed_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeYellow_Grenade_shell",
		"1Rnd_SmokePurple_Grenade_shell",
		"1Rnd_SmokeBlue_Grenade_shell",
		"1Rnd_SmokeOrange_Grenade_shell",
		"3Rnd_Smoke_Grenade_shell",
		"3Rnd_SmokeRed_Grenade_shell",
		"3Rnd_SmokeGreen_Grenade_shell",
		"3Rnd_SmokeYellow_Grenade_shell",
		"3Rnd_SmokePurple_Grenade_shell",
		"3Rnd_SmokeBlue_Grenade_shell",
		"3Rnd_SmokeOrange_Grenade_shell",
		"ACE_HuntIR_M203",
		"ACE_40mm_Flare_white",
		"ACE_40mm_Flare_red",
		"ACE_40mm_Flare_green",
		"ACE_40mm_Flare_ir",
		"30Rnd_556x45_Stanag",
		"30Rnd_556x45_Stanag_green",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_Tracer_Red",
		"30Rnd_556x45_Stanag_Tracer_Green",
		"30Rnd_556x45_Stanag_Tracer_Yellow",
		"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
		"ACE_30Rnd_556x45_Stanag_Tracer_Dim",
		"30Rnd_556x45_Stanag_Sand",
		"30Rnd_556x45_Stanag_Sand_green",
		"30Rnd_556x45_Stanag_Sand_red",
		"30Rnd_556x45_Stanag_Sand_Tracer_Red",
		"30Rnd_556x45_Stanag_Sand_Tracer_Green",
		"30Rnd_556x45_Stanag_Sand_Tracer_Yellow",
		"150Rnd_556x45_Drum_Mag_F",
		"150Rnd_556x45_Drum_Mag_Tracer_F",
		"150Rnd_556x45_Drum_Sand_Mag_F",
		"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",
		"Titan_AA",
		"Titan_AT",
		"Titan_AP",
		"MRAWS_HE_F",
		"MRAWS_HEAT55_F",
		"MRAWS_HEAT_F",
		"9Rnd_45ACP_Mag",
		"11Rnd_45ACP_Mag",
		"16Rnd_9x21_Mag",
		"20Rnd_762x51_Mag",
		"30Rnd_45ACP_Mag_SMG_01",
		"7Rnd_408_Mag",

		"optic_DMS",
		"optic_ACO_grn",
		"optic_Aco",
		"optic_Arco_blk_F",
		"ACE_optic_Arco_2D",
		"optic_Arco",
		"optic_Holosight_blk_F",
		"optic_Holosight",
		"optic_MRCO",
		"ACE_optic_MRCO_2D",
		"optic_Hamr",
		"ACE_optic_Hamr_2D",
		"optic_SOS",
		"optic_LRPS",
		"optic_Nightstalker",
		"optic_ERCO_snd_F",
		"optic_ERCO_blk_F",
		"optic_AMS",
		"optic_AMS_snd",
		"optic_MRD",

		"acc_flashlight",
		"acc_flashlight_smg_01",
		"acc_esd_01_flashlight",
		"acc_flashlight_pistol",
		"acc_pointer_IR",
		"ACE_acc_pointer_green",
		"ACE_muzzle_mzls_H",
		"ACE_muzzle_mzls_L",
		"ACE_muzzle_mzls_smg_01",
		"ACE_muzzle_mzls_smg_02",
		"ACE_muzzle_mzls_B",
		"ACE_muzzle_mzls_338",
		"ACE_muzzle_mzls_93mmg",
		"muzzle_snds_acp",
		"muzzle_snds_M",
		"muzzle_snds_m_snd_F",
		"muzzle_snds_H",
		"muzzle_snds_H_snd_F",
		"muzzle_snds_B",
		"muzzle_snds_B_snd_F",
		"muzzle_snds_L",
		"muzzle_snds_H_MG_blk_F",
		"muzzle_snds_H_MG",
		"muzzle_snds_65_TI_blk_F",
		"bipod_01_F_blk",
		"bipod_01_F_snd",

		"H_PilotHelmetHeli_B",
		"H_CrewHelmetHeli_B",
		"H_PilotHelmetFighter_B",
		"H_HelmetB_light",
		"H_HelmetB_light_black",
		"H_HelmetB_light_desert",
		"H_HelmetB_light_grass",
		"H_HelmetB_light_sand",
		"H_HelmetB_light_snakeskin",
		"H_HelmetB_Light_tna_F",
		"H_HelmetSpecB",
		"H_HelmetSpecB_blk",
		"H_HelmetSpecB_paint2",
		"H_HelmetSpecB_paint1",
		"H_HelmetSpecB_sand",
		"H_HelmetSpecB_snakeskin",
		"H_HelmetB_Enh_tna_F",
		"H_HelmetCrew_B",
		"H_HelmetB",
		"H_HelmetB_black",
		"H_HelmetB_camo",
		"H_HelmetB_desert",
		"H_HelmetB_grass",
		"H_HelmetB_sand",
		"H_HelmetB_snakeskin",
		"H_HelmetB_tna_F",
		"H_Cap_khaki_specops_UK",
		"H_Booniehat_khk_hs",
		"H_Booniehat_khk",
		"H_Booniehat_mcamo",
		"H_Booniehat_oli",
		"H_Booniehat_tan",
		"H_Booniehat_tna_F",
		"H_Booniehat_dgtl",
		"H_Watchcap_blk",
		"H_Watchcap_cbr",
		"H_Watchcap_camo",
		"H_Watchcap_khk",
		"H_HelmetB_TI_arid_F",
		"H_HelmetB_TI_tna_F",

		"U_B_CTRG_1",
		"U_B_CTRG_3",
		"U_B_CTRG_2",
		"U_B_CTRG_Soldier_F",
		"U_B_CTRG_Soldier_Arid_F",
		"U_B_CTRG_Soldier_3_F",
		"U_B_CTRG_Soldier_3_Arid_F",
		"U_B_CTRG_Soldier_2_F",
		"U_B_CTRG_Soldier_2_Arid_F",
		"U_B_CTRG_Soldier_urb_1_F",
		"U_B_CTRG_Soldier_urb_3_F",
		"U_B_CTRG_Soldier_urb_2_F",
		"U_B_HeliPilotCoveralls",
		"U_B_Wetsuit",
		"U_B_PilotCoveralls",
		"U_B_FullGhillie_ard",
		"U_B_T_FullGhillie_tna_F",
		"U_B_FullGhillie_lsh",
		"U_B_FullGhillie_sard",
		"U_B_T_Sniper_F",
		"U_B_GhillieSuit",

		"V_PlateCarrierL_CTRG",
		"V_PlateCarrierH_CTRG",
		"V_PlateCarrier1_rgr_noflag_F",
		"V_PlateCarrier1_blk",
		"V_PlateCarrier2_blk",
		"V_PlateCarrier2_rgr_noflag_F",
		"V_RebreatherB",

		"G_Bandanna_beast",
		"G_Bandanna_blk",
		"G_Bandanna_khk",
		"G_Bandanna_oli",
		"G_Bandanna_shades",
		"G_Bandanna_sport",
		"G_Bandanna_tan",
		"G_Combat",
		"G_Combat_Goggles_tna_F",
		"G_B_Diving",
		"G_EyeProtectors_F",
		"G_EyeProtectors_Earpiece_F",
		"G_Respirator_white_F",
		"G_Tactical_Black",
		"G_Tactical_Clear",
		"G_AirPurifyingRespirator_01_F",
		"G_Balaclava_TI_blk_F",
		"G_Balaclava_TI_G_blk_F",
		"G_Balaclava_TI_tna_F",
		"G_Balaclava_TI_G_tna_F",

		"NVGogglesB_blk_F",
		"NVGogglesB_grn_F",
		"NVGogglesB_gry_F",
		"ACE_NVG_Wide_Black",
		"ACE_NVG_Wide",
		"ACE_NVG_Wide_Green",
		"ACE_NVG_Gen4_Green",
		"ACE_NVG_Gen4",
		"ACE_NVG_Gen4_Black",

		"Binocular",
		"Laserdesignator",
		"Laserdesignator_03",
		"ACE_Vector",
		"ItemMap",
		"ItemCompass",
		"TFAR_anprc152",
		"ACE_Altimeter",
		"ItemWatch",
		"ItemGPS",
		"B_UavTerminal",

		"B_TacticalPack_blk",
		"B_TacticalPack_rgr",
		"B_TacticalPack_mcamo",
		"B_TacticalPack_oli",
		"B_Parachute",
		"TFAR_rt1523g_green",
		"TFAR_rt1523g_bwmod",
		"TFAR_rt1523g_black",
		"TFAR_rt1523g_big_bwmod",
		"TFAR_rt1523g","B_RadioBag_01_wdl_F",
		"B_LegStrapBag_black_F",
		"B_LegStrapBag_coyote_F",
		"B_LegStrapBag_olive_F",
		"B_Kitbag_cbr",
		"B_Kitbag_rgr",
		"B_Kitbag_mcamo",
		"B_Kitbag_tan",
		"B_Kitbag_sgg",
		"B_Carryall_oli",
		"B_Carryall_mcamo",
		"B_Carryall_green_F",
		"B_Carryall_wdl_F",
		"B_AssaultPack_mcamo",
		"B_AssaultPack_tna_F",
		"B_AssaultPack_wdl_F",
		"B_AssaultPack_rgr",
		"B_AssaultPack_cbr",
		"B_AssaultPack_blk"
	};
};