#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(container),
            QGVAR(re),
            QGVAR(arsenal),
            QGVAR(r1),
            QGVAR(r2),
            QGVAR(r3),
            QGVAR(r4),
            QGVAR(r5),
            QGVAR(r6),
            QGVAR(r7),
            QGVAR(rt),
            QGVAR(ge),
            QGVAR(gsa),
            QGVAR(ggpmg),
            QGVAR(gat),
            QGVAR(ghat),
            QGVAR(ghmg),
            QGVAR(ggmg),
            QGVAR(gmil),
            QGVAR(glmhe),
            QGVAR(glmsmk),
            QGVAR(gmmhe),
            QGVAR(gmmsmk),
            QGVAR(gsn),
            QGVAR(gsnh),
            QGVAR(gmed)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "uksf_common",
            "UK3CB_BAF_Equipment",
            "UK3CB_BAF_Weapons",
            "UK3CB_BAF_Weapons_Ammo",
            "UK3CB_BAF_Weapons_L110",
            "UK3CB_BAF_Weapons_L115",
            "UK3CB_BAF_Weapons_L119",
            "UK3CB_BAF_Weapons_L1A1",
            "UK3CB_BAF_Weapons_Launchers",
            "UK3CB_BAF_Weapons_SmallArms",
            "UK3CB_BAF_Weapons_Static",
            "UK3CB_BAF_Weapons_Accessories",
            "UK3CB_BAF_Weapons_ACE"
        };
        author = QUOTE(UKSF);
        authors[] = { "Beswick.T" };
        url = URL;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
