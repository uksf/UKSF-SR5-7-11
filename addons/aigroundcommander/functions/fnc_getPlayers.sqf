#include "script_component.hpp"
/*
    Author:
        Bridg

    Description:
        adds waypoints to AI groups to move to staging areas then to nearest type

    Parameters:
        0: _stagingArea (staging area position) <POSITION>
        
    Return value:
        Nothing
*/

params ["_stagingArea"];

private _players = [];

{
	if (((typeOf _x) == "UKSF_B_Officer") || ((typeOf _x) == "UKSF_B_SectionLeader") || ((typeOf _x) == "UKSF_B_Rifleman")) then {
		_players pushBack _x;
	};
} forEach ([] call CBA_fnc_players);

_players = _players select {(_stagingArea distance2D _x) < 2000};
if (_players isEqualTo []) exitWith {objNull};
_players = _players apply {[_stagingArea distance2D _x, _x]};
// [[400, player1], [200, player2], [300, player3]]
_players sort true;
private _player = (_players#0)#1;

_player