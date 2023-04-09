#include "mdialog"
#define MDIALOG_ZLANG_MODE

DialogCreate:dialog_drift(playerid){
    new menu[100];
    strcat(menu, "Panopticon\n", sizeof(menu));
    strcat(menu, "Big Ear\n", sizeof(menu));
    strcat(menu, "Missionary Hill\n", sizeof(menu));

    Dialog_Open(playerid, Dialog: dialog_drift, DIALOG_STYLE_LIST, "Pilih Lokasi Drift", menu, "Pilih", "Batal");
}
DialogResponse:dialog_drift(playerid, response, listitem, inputtext[]){
    if(response){
        new vehicleid = GetPlayerVehicleID(playerid);
        if(listitem == 0){
            if(IsPlayerInAnyVehicle(playerid)){
                SetVehiclePos(vehicleid, -805.6849,-111.3355,63.5303);
                SetVehicleZAngle(vehicleid, 290.1201);
            }
            else{
                SetPlayerInterior(playerid, 0);
                SetPlayerPos(vehicleid, -805.6849,-111.3355,63.5303);
                SetPlayerFacingAngle(playerid, 290.1201);
            }
            SendClientMessage(playerid, COLOR_WHITE, "TELEPORT: Teleported to {00ff00}Panopticon {ffffff}drift track.");
        }
        else if(listitem == 1){
            if(IsPlayerInAnyVehicle(playerid)){
                SetVehiclePos(vehicleid, -302.5906,1511.9957,75.3594);
                SetVehicleZAngle(vehicleid, 181.3925);
            }
            else{
                SetPlayerInterior(playerid, 0);
                SetPlayerPos(vehicleid, -302.5906,1511.9957,75.3594);
                SetPlayerFacingAngle(playerid, 181.3925);
            }
            SendClientMessage(playerid, COLOR_WHITE, "TELEPORT: Teleported to {00ff00}Big Ear {ffffff}drift track.");
        }
        else if(listitem == 2){
            if(IsPlayerInAnyVehicle(playerid)){
                SetVehiclePos(vehicleid, -2421.3223,-608.6539,132.5625);
                SetVehicleZAngle(vehicleid, 32.8711);
            }
            else{
                SetPlayerInterior(playerid, 0);
                SetPlayerPos(vehicleid, -2421.3223,-608.6539,132.5625);
                SetPlayerFacingAngle(playerid, 32.8711);
            }
            SendClientMessage(playerid, COLOR_WHITE, "TELEPORT: Teleported to {00ff00}Big Ear {ffffff}drift track.");
        }
    }
    return 1;
}
