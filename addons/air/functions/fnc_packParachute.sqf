/*
    Author:
        Tim Beswick

    Description:
        Packs parachute into backpack

    Parameter(s):
        0: Parachute <OBJECT>
        1: Unit <OBJECT>

    Return Value:
        None
*/
#include "script_component.hpp"

params ["_chute", "_unit"];

deleteVehicle _chute;
"CUP_T10_Parachute_backpack" createVehicle (getPosATLVisual _unit);
