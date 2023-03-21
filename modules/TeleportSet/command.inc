#define MDIALOG_ZLANG_MODE				
#include "mdialog"
#include "../modules/DefineList"
#include "../modules/TeleportSet/stocks.inc"

CMD:gotols(playerid, params[]){
    new vehicleid = GetPlayerVehicleID(playerid);
    if(IsPlayerInAnyVehicle(playerid)){
        SetVehiclePos(vehicleid, 1535.7297,-1672.5308,13.3828);
        SetVehicleZAngle(vehicleid, 90.5606);
    }
    else{
        SetPlayerInterior(playerid, 0);
        SetPlayerPos(playerid, 1535.7297,-1672.5308,13.3828);
        SetPlayerFacingAngle(playerid, 90.5606);
    }
    SendClientMessage(playerid, COLOR_WHITE, "TELEPORT: Teleported to {00ff00}Los Santos");
    return 1;
}
CMD:gotolv(playerid, params[]){
    new vehicleid = GetPlayerVehicleID(playerid);
    if(IsPlayerInAnyVehicle(playerid)){
        SetVehiclePos(vehicleid, 1709.5610,1453.9941,10.8167);
        SetVehicleZAngle(vehicleid, 272.0721);
    }
    else{
        SetPlayerInterior(playerid, 0);
        SetPlayerPos(playerid, 1709.5610,1453.9941,10.8167);
        SetPlayerFacingAngle(playerid, 272.0721);
    }
    SendClientMessage(playerid, COLOR_WHITE, "TELEPORT: Teleported to {00ff00}Las Venturas");

    return 1;
}
CMD:gotosf(playerid, params[]){
    new vehicleid = GetPlayerVehicleID(playerid);
    if(IsPlayerInAnyVehicle(playerid)){
        SetVehiclePos(vehicleid, -2013.9506,161.9366,27.6875);
        SetVehicleZAngle(vehicleid, 270.3984);
    }
    else{
        SetPlayerInterior(playerid, 0);
        SetPlayerPos(playerid, -2013.9506,161.9366,27.6875);
        SetPlayerFacingAngle(playerid, 270.3984);
    }
    SendClientMessage(playerid, COLOR_WHITE, "TELEPORT: Teleported to {00ff00}San Fierro");

    return 1;
}
CMD:gotorc(playerid, params[]){
    new vehicleid = GetPlayerVehicleID(playerid);
    if(IsPlayerInAnyVehicle(playerid)){
        SetVehiclePos(vehicleid, 2270.1772,-86.9346,26.4953);
        SetVehicleZAngle(vehicleid, 182.9518);
    }
    else{
        SetPlayerInterior(playerid, 0);
        SetPlayerPos(playerid, 2270.1772,-86.9346,26.4953);
        SetPlayerFacingAngle(playerid, 182.9518);
    }
    SendClientMessage(playerid, COLOR_WHITE, "TELEPORT: Teleported to {00ff00}Palomino, Red County");

    return 1;
}
CMD:ft(playerid, params[]){
    new Float: teleDistance = 3.0;
    if(!(IsNull(params))) teleDistance = floatstr(params);
    new Float: posX, Float: posY, Float: posZ, Float: angle;
    GetPlayerPos(playerid, posX, posY, posZ);
    GetPlayerFacingAngle(playerid, angle);
    GetXYInFrontOfPoint(posX, posY, posX, posY, angle, teleDistance);
    SetPlayerPos(playerid, posX, posY, posZ);
    return 1;
}
CMD:bt(playerid, params[]){
    new Float: teleDistance = 3.0;
    if(!IsNull(params)) teleDistance = floatstr(params);
    new Float: posX, Float: posY, Float: posZ, Float: angle;
    GetPlayerPos(playerid, posX, posY, posZ);
    GetPlayerFacingAngle(playerid, angle);
    GetXYBehindPoint(posX, posY, posX, posY, angle, teleDistance);
    SetPlayerPos(playerid, posX, posY, posZ);
    return 1;
}
CMD:lt(playerid, params[]){
    new Float: teleDistance = 3.0;
    if(!IsNull(params)) teleDistance = floatstr(params);
    new Float: posX, Float: posY, Float: posZ, Float: angle;
    GetPlayerPos(playerid, posX, posY, posZ);
    GetPlayerFacingAngle(playerid, angle);
    GetXYLeftOfPoint(posX, posY, posX, posY, angle, teleDistance);
    SetPlayerPos(playerid, posX, posY, posZ);
    return 1;
}
CMD:rt(playerid, params[]){
    new Float: teleDistance = 3.0, Float: posX, Float: posY, Float: posZ, Float: angle;
    if(!IsNull(params)) teleDistance = floatstr(params);
    GetPlayerPos(playerid, posX, posY, posZ);
    GetPlayerFacingAngle(playerid, angle);
    GetXYRightOfPoint(posX, posY, posX, posY, angle, teleDistance);
    SetPlayerPos(playerid, posX, posY, posZ);
    return 1;
}
CMD:dn(playerid, params[]){
    new Float: teleDistance = 3.0;
    if(!IsNull(params)) teleDistance = floatstr(params);
    new Float: currentPos[3];
    GetPlayerPos(playerid, currentPos[0], currentPos[1], currentPos[2]);
    SetPlayerPos(playerid, currentPos[0], currentPos[1], (currentPos[2] - teleDistance));
    return 1;
}
CMD:up(playerid, params[]){
    new Float: teleDistance = 3.0;
    if(!IsNull(params)) teleDistance = floatstr(params);
    new Float: currentPos[3];
    GetPlayerPos(playerid, currentPos[0], currentPos[1], currentPos[2]);
    SetPlayerPos(playerid, currentPos[0], currentPos[1], (currentPos[2] + teleDistance));
    return 1;
}
CMD:tune(playerid, params[]){
    new vehicleid = GetPlayerVehicleID(playerid);
    if(IsNull(params)) return SendClientMessage(playerid, COLOR_WHITE, "Kegunaan: /tune [1: Transfender][2: WAA][3: Loco-low]");
    new tuneChoice = strval(params);
    switch(tuneChoice){
        case 1: {
            if(IsPlayerInAnyVehicle(playerid)){
                SetVehiclePos(vehicleid, 1039.9644,-1039.4305,31.7493);
                SetVehicleZAngle(vehicleid, 358.2478);
            }
            else{
                SetPlayerInterior(playerid, 0);
                SetPlayerPos(playerid, 1039.9644,-1039.4305,31.7493);
                SetPlayerFacingAngle(playerid, 358.2478);
            }
            SendClientMessage(playerid, COLOR_WHITE, "TELEPORT: Teleported to {00ff00}Transfender {ffffff}tuning shop.");       
        }
        case 2: {
            if(IsPlayerInAnyVehicle(playerid)){
                SetVehiclePos(vehicleid, -2704.4673,216.9896,4.1797);
                SetVehicleZAngle(vehicleid, 87.9929);
            }
            else{
                SetPlayerInterior(playerid, 0);
                SetPlayerPos(playerid, -2704.4673,216.9896,4.1797);
                SetPlayerFacingAngle(playerid, 87.9929);
            }
            SendClientMessage(playerid, COLOR_WHITE, "TELEPORT: Teleported to {00ff00}WAA {ffffff}tuning shop.");
        }
        case 3: {
            if(IsPlayerInAnyVehicle(playerid)){
                SetVehiclePos(vehicleid, 2645.1160,-2025.7000,13.5469);
                SetVehicleZAngle(vehicleid, 178.9316);
            }
            else{
                SetPlayerInterior(playerid, 0);
                SetPlayerPos(playerid, 2645.1160,-2025.7000,13.5469);
                SetPlayerFacingAngle(playerid, 178.9316);
            }
            SendClientMessage(playerid, COLOR_WHITE, "TELEPORT: Teleported to {00ff00}Loco-low {ffffff}tuning shop.");
        }
        default: {
            return SEM(playerid, "ERROR: Invalid input number!");
        }
    }
    return 1;
}