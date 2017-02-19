#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "GENFOR_R",
            "GENFOR_S",
            "GENFOR_SL",
            "GENFOR_O",
            "GENFOR_MED",
            "GENFOR_AR",
            "GENFOR_MG",
            "GENFOR_Mark",
            "GENFOR_AA",
            "GENFOR_AT_18",
            "GENFOR_AT_7",
            "GENFOR_AT",
            "GENFOR_Sniper",
            "GENFOR_Sniper_AM",
            "GENFOR_Spotter",
            "GENFOR_RTO",
            "GENFOR_P_R",
            "GENFOR_P_SL",
            "GENFOR_P_O",
            "GENFOR_P_B",
            "GENFOR_P_MG",
            "GENFOR_P_Mark",
            "GENFOR_P_AT",
            "GENFOR_P_ATR",
            "GENFOR_P_AA",
            "GENFOR_SF_R",
            "GENFOR_SF_A",
            "GENFOR_SF_Patrol",
            "GENFOR_SF_SL",
            "GENFOR_SF_MED",
            "GENFOR_SF_MG",
            "GENFOR_SF_Mark",
            "GENFOR_SF_AT",
            "GENFOR_Res",
            "GENFOR_Res_R",
            "GENFOR_Res_L",
            "GENFOR_P",
            "GENFOR_FP",
            "GENFOR_C",
            "GENFOR_TC",

            "Genfor_Apc_BMP1",
            "Genfor_Apc_BMP1P",
            "Genfor_Apc_BMP2",
            "Genfor_Apc_BMP2HQ",
            "Genfor_Apc_BMP2Ambul",
            "Genfor_Brdm_BRDM2",
            "Genfor_Brdm_BTR60",
            "Genfor_Hilux_Unarmed",
            "Genfor_Hilux_Unarmed_Populated",
            "Genfor_Hilux_Unarmed_Reserves",
            "Genfor_Hilux_Unarmed_Reserves_Populated",
            "Genfor_Hilux_MG",
            "Genfor_Hilux_MG_Reserves",
            "Genfor_Hilux_50",
            "Genfor_Hilux_50_Reserves",
            "Genfor_Hilux_Grenade",
            "Genfor_Hilux_Grenade_Reserves",
            "Genfor_Hilux_Med",
            "Genfor_Hilux_SPG9",
            "Genfor_Hilux_Rockets",
            "Genfor_Hmmwv_MG_SF",
            "Genfor_Hmmwv_M134_SF",
            "Genfor_Hmmwv_SOVGL_SF",
            "Genfor_Hmmwv_SOVM134_SF",
            "Genfor_Hmmwv_TOW_SF",
            "Genfor_Hmmwv_Stinger_SF",
            "Genfor_Hmmwv_GL_SF",
            "Genfor_Hmmwv_Unarmed_SF",
            "Genfor_Hmmwv_Unarmed_SF_Populated",
            "Genfor_Hmmwv_Medical_SF",
            "Genfor_Hmmwv_MG_Desert_SF",
            "Genfor_Hmmwv_M134_Desert_SF",
            "Genfor_Hmmwv_SOVGL_Desert_SF",
            "Genfor_Hmmwv_SOVM134_Desert_SF",
            "Genfor_Hmmwv_TOW_Desert_SF",
            "Genfor_Hmmwv_Stinger_Desert_SF",
            "Genfor_Hmmwv_GL_Desert_SF",
            "Genfor_Hmmwv_Unarmed_Desert_SF",
            "Genfor_Hmmwv_Unarmed_Desert_SF_Populated",
            "Genfor_Hmmwv_Medical_Desert_SF",
            "Genfor_LandRover_Unarmed",
            "Genfor_LandRover_Unarmed_Populated",
            "Genfor_LandRover_Unarmed_Para",
            "Genfor_LandRover_Unarmed_Para_Populated",
            "Genfor_LandRover_Medical",
            "Genfor_LandRover_Medical_Para",
            "Genfor_LandRover_MG",
            "Genfor_LandRover_MG_Para",
            "Genfor_LandRover_GL",
            "Genfor_LandRover_GL_Para",
            "Genfor_LandRover_TOW",
            "Genfor_LandRover_TOW_Para",
            "Genfor_LandRover_Stinger",
            "Genfor_LandRover_Stinger_Para",
            "Genfor_LandRover_SPG9",
            "Genfor_LandRover_SPG9_Para",
            "Genfor_Uaz_DSHKM",
            "Genfor_Uaz_50cal",
            "Genfor_Uaz_GL",
            "Genfor_Uaz_Unarmed",
            "Genfor_Uaz_Unarmed_Populated",
            "Genfor_Uaz_Medical",
            "Genfor_Uaz_SPG9",
            "Genfor_Ural_Transport",
            "Genfor_Ural_Transport_Populated",
            "Genfor_Ural_TransportOpen",
            "Genfor_Ural_TransportOpen_Populated",
            "Genfor_Ural_Ammo",
            "Genfor_Ural_Repair",
            "Genfor_Ural_Fuel",
            "Genfor_Ural_BM21",
            "Genfor_Ural_ZSU",
            "Genfor_Tank_T72A",
            "Genfor_Tank_T7BEarly",
            "Genfor_Tank_T72B",
            "Genfor_Tank_T72BM",
            "Genfor_Tank_T55A",
            "Genfor_Tank_T34",
            "Genfor_Tank_ZSU",
            "Genfor_Air_MI8",
            "Genfor_Air_MI8_Populated",
            "Genfor_Air_MI8MTV",
            "Genfor_Air_MI8MTV_Populated",
            "Genfor_Air_MI24",
            "Genfor_Air_SU25K",
            "Genfor_Air_SU25T",
            "Genfor_Air_SU34",
            "Genfor_Static_ZU23",
            "Genfor_Static_DSHKM",
            "Genfor_Static_DSHKMMiniTripod",
            "Genfor_Static_KORD",
            "Genfor_Static_KORDHigh",
            "Genfor_Static_M2",
            "Genfor_Static_M2MiniTripod",
            "Genfor_Static_AGS",
            "Genfor_Static_GMG",
            "Genfor_Static_MK19",
            "Genfor_Static_Metis",
            "Genfor_Static_TOW",
            "Genfor_Static_SPG9",
            "Genfor_Static_Igla",
            "Genfor_Static_Stinger",
            "Genfor_Static_2B14",
            "Genfor_Static_M252",
            "Genfor_Static_D30",
            "Genfor_Static_D30AT",
            "Genfor_Static_M119",
            "Genfor_Static_M119AT",
            
            "GENFOR_B_R",
            "GENFOR_B_RNOMAG",
            "GENFOR_B_Mark",
            "GENFOR_B_Med",
            "GENFOR_B_MG",
            "GENFOR_B_AA",
            "GENFOR_B_AT7",
            "GENFOR_B_AT",
            "GENFOR_B_Sl",
            "GENFOR_B_Radio",
            "GENFOR_B_P_R",
            "GENFOR_B_P_RNOMAG",
            "GENFOR_B_P_B",
            "GENFOR_B_P_MG",
            "GENFOR_B_P_AT",
            "GENFOR_B_P_AA",
            "GENFOR_B_SF_R",
            "GENFOR_B_SF_RNOMAG",
            "GENFOR_B_SF_MG",
            "GENFOR_B_SF_AT",
            "GENFOR_B_SF_P"
        };
        weapons[] = {
            "rhs_weap_ak74m_camo_npz_acog",
            "rhs_weap_ak74m_gp25_npz_acog",
            "arifle_mas_m4_acog",
            "arifle_mas_m4c_holo",
            "rhs_weap_ak105_npz_acog",
            "rhs_weap_ak103_pso",
            "arifle_mas_m4_gl_acog",
            "arifle_mas_fal",
            "arifle_mas_lee",
            "srifle_DMR_06_camo_F_dms",
            "rhs_weap_ak74m_Base_F",
            "rhs_pkp_base",
            "rhs_weap_rpg7"            
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "uksf_main", 
            "uksf_common",
            "mas_vehicleweapons_Core",
            "mas_apc",
            "mas_brdm",
            "mas_CH47",
            "mas_cars_Hilux",
            "mas_HMMWV",
            "mas_cars_LR",
            "mas_cars",
            "mas_MI8",
            "mas_MI24",
            "mas_tanks",
            "mas_UH1Y",
            "mas_UH60M",
            "mas_ural",
            "bwi_a3_su25",
            "sab_SU34"
        };
        author = QUOTE(UKSF);
        authors[] = { "Beswick.T" };
        url = QUOTE(www.uk-sf.com);
        VERSION_CONFIG;
    };
};

class cba_Extended_EventHandlers;
#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"