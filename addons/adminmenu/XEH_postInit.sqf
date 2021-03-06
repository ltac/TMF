#include "\x\tmf\addons\adminmenu\script_component.hpp"

#include "initKeybinds.sqf"

GVAR(tabPFHHandles) = [];
GVAR(playerManagement_listControls) = [];
GVAR(playerManagement_players) = [];
GVAR(playerManagement_selected) = [];

if (isMultiplayer) then {
    if (isServer) then {
        GVAR(activeClients) = [];

        private _id = addMissionEventHandler ["HandleDisconnect", {
            private _clientOwnerId = _this select 4;
            GVAR(activeClients) = GVAR(activeClients) - [_clientOwnerId];

            if (count GVAR(activeClients) == 0 && {!isNil QGVAR(fps_pfh)}) then {
                [GVAR(fps_pfh)] call CBA_fnc_removePerFrameHandler;
                GVAR(fps_pfh) = nil;
            };
        }];
    };

    if (hasInterface) then {
        QGVAR(fps) addPublicVariableEventHandler {
            disableSerialization;

            private _ctrl = (uiNamespace getVariable [QGVAR(display), displayNull]) displayCtrl IDC_TMF_ADMINMENU_FPS;
            if (isNull _ctrl) exitWith {};

            _ctrl ctrlSetText format ["%1 SFPS", _this select 1];
        };

        QGVAR(currentAdmin) addPublicVariableEventHandler {
            disableSerialization;

            private _ctrl = ((uiNamespace getVariable [QGVAR(display), displayNull]) displayCtrl IDC_TMF_ADMINMENU_G_DASH) controlsGroupCtrl IDC_TMF_ADMINMENU_DASH_CURRADMIN;
            if (isNull _ctrl) exitWith {};

            _ctrl ctrlSetText (_this select 1);
        };
    };
};
