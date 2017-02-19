#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "UKSF_Apache_AH1"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "uksf_gear",
            "CUP_AirVehicles_AH64"
        };
        author = QUOTE(UKSF);
        authors[] = { "Beswick.T" };
        url = QUOTE(www.uk-sf.com);
        VERSION_CONFIG;
    };
};

class cba_Extended_EventHandlers;
#include "CfgEventHandlers.hpp"
#include "CfgMoves.hpp"
#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
