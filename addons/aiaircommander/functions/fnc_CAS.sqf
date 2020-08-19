#include "script_component.hpp"
/*
    Author:
        Bridg

    Description:
        Runs CAS, gets the players itself and doesn't rely on commander > getPlayers

    Parameters:
        0: _group <GROUP>
        
    Return value:
        Nothing
*/
params ["_group"];

private _players = [];

{
	if (((typeOf _x) == "UKSF_B_Officer") || ((typeOf _x) == "UKSF_B_SectionLeader") || ((typeOf _x) == "UKSF_B_Rifleman")) then {
		_players pushBack _x;
	};
} forEach ([] call CBA_fnc_players);
private _player = selectRandom _players;


if (vehicle (leader _group) isKindOf "helicopter") then {
    vehicle (leader _group) flyInHeight 300;
    _group reveal [_player,4];
    [_group,_player,100,"SAD","AWARE","RED","NORMAL"] call cba_fnc_addWaypoint;
} else {
    _group setVariable ["lambs_danger_disableGroupAI",true];
    vehicle (leader _group) flyInHeight 500;
    [_group,_player,random[2000,2250,2500],"MOVE","AWARE","YELLOW","NORMAL"] call cba_fnc_addWaypoint;
    [_group,_player,random[2000,2250,2500],"MOVE","AWARE","YELLOW","NORMAL"] call cba_fnc_addWaypoint;
    [_group,_player,20,"MOVE","AWARE","YELLOW","NORMAL","","[vehicle this] call uksf_airCommander_fnc_doCAS;"] call cba_fnc_addWaypoint;
};

private _airSpawn = getPos (selectRandom GVAR(airSpawns));
[_group,_airSpawn,50,"MOVE","AWARE","YELLOW","NORMAL","","[this] call uksf_airCommander_fnc_handleDelete;"] call cba_fnc_addWaypoint;