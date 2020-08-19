#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

#include "initSettings.sqf"

#include "script_component.hpp"
/*
    Author:
        Bridg

    Description:
        PreInit for:
            - Init AI Aggression Level <NUMBER>
            - Add MP Killed EH to units for aggression calc <EH>

    Parameters:
        None

    Return value:
        Nothing
*/

if (!isServer) exitWith {};

["O_Soldier_base_F","init", {
    _this#0 addMPEventHandler ["MPKilled", {
        if (!(_this#1 isKindOf "Air")) then {
            GVAR(enemyAggressionLevel) = GVAR(enemyAggressionLevel) + 1;
        };
}]}] call cba_fnc_addClassEventHandler;

GVAR(stagingAreas) = [];

// spawn locations
GVAR(infLocations) = [];
GVAR(carLocations) = [];
GVAR(apcLocations) = [];
GVAR(tankLocations) = [];
GVAR(heliLocations) = [];

// unit cap
GVAR(maxUnitCount) = 150;
GVAR(currentUnitCount) = 0;

// response groups
GVAR(responseGroups) = [];
GVAR(numberOfStayBehindGroups) = 1;
GVAR(tier1ResponseDeployed) = 0;
GVAR(tier2ResponseDeployed) = 0;
GVAR(readyAtStagingArea) = 0;

GVAR(enemyAggressionLevel) = 0;

ADDON = true;