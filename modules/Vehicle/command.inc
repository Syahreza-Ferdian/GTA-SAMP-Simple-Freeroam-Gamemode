#include "../modules/Vehicle.inc"
#include "../modules/DefineList.inc"

CMD:veh(playerid, params[]){
    Dialog_Show(playerid, Dialog: dialog_Veh);
    return 1;
}
CMD:destroyveh(playerid, params[]){
    new vehicleid = GetPlayerVehicleID(playerid);
    new playerState = GetPlayerState(playerid);
    if(playerState == PLAYER_STATE_DRIVER){
        DestroyVehicle(vehicleid);
        SendClientMessage(playerid, COLOR_WHITE, "VEHICLE: Kendaraan telah berhasil dihancurkan");
        return 1;
    }
    else return SEM(playerid, "ERROR: Harus menjadi Driver untuk menggunakan command ini!");
}
CMD:vehcolor(playerid, params[]){
    new vehicleid = GetPlayerVehicleID(playerid);
    new playerState = GetPlayerState(playerid);
    new primary = strval(params[0]);
    new secondary = strval(params[1]);
    if(playerState == PLAYER_STATE_DRIVER){
        if(IsNull(params)) return SendClientMessage(playerid, COLOR_WHITE, "Kegunaan: /vehcolor [color1] [color2:optional]");
        else {
            ChangeVehicleColor(vehicleid, primary, secondary);
            return 1;
        }
    }
    else return SEM(playerid, "ERROR: Harus menjadi Driver untuk menggunakan command ini!");
}
CMD:fixveh(playerid, params[]){
    new vehicleID = GetPlayerVehicleID(playerid);
    if(GetPlayerState(playerid) == PLAYER_STATE_DRIVER){
        SetVehicleHealth(vehicleID, 1000.0);
        RepairVehicle(vehicleID);
        return 1;
    }
    else return SEM(playerid, "ERROR: Harus menjadi Driver untuk menggunakan command ini!");
}
CMD:flip(playerid, params[]){
    new vehicleid = GetPlayerVehicleID(playerid);
    new Float: vehAngle;
    if(GetPlayerState(playerid) == PLAYER_STATE_DRIVER){
        GetVehicleZAngle(vehicleid, vehAngle);
        SetVehicleZAngle(vehicleid, vehAngle);
        return 1;
    }
    else return SEM(playerid, "ERROR: Harus menjadi Driver untuk menggunakan command ini!");
}
CMD:gotoveh(playerid, params[]){
    if(IsNull(params)) return SendClientMessage(playerid, COLOR_WHITE, "Kegunaan: /gotoveh [Veh ID]");
    new vehicleid = strval(params);
    new Float: vehX, Float: vehY, Float: vehZ, Float: angle, worldid;
    if(GetPlayerVehicleID(playerid) == vehicleid) return SEM(playerid, "ERROR: Anda sudah berada di kendaraan tersebut!");
    if(IsPlayerInAnyVehicle(playerid)) return SEM(playerid, "ERROR: Anda harus turun dari kendaraan untuk menggunakan command ini");
    if(bool:IsValidVehicle(vehicleid)){
        GetVehiclePos(vehicleid, vehX, vehY, vehZ);
        GetVehicleZAngle(vehicleid, angle);
        worldid = GetVehicleVirtualWorld(vehicleid);
        SetPlayerPosFindZ(playerid, vehX, vehY, vehZ);
        SetPlayerFacingAngle(playerid, angle);
        SetPlayerVirtualWorld(playerid, worldid);
        return 1;
    }
    else return SEM(playerid, "ERROR: Vehicle ID tidak valid!");
}
CMD:getveh(playerid, params[]){
    if(IsNull(params)) return SendClientMessage(playerid, COLOR_WHITE, "Kegunaan: /getveh [Veh ID]");
    if(IsPlayerInAnyVehicle(playerid)) return SEM(playerid, "ERROR: Anda harus turun dari kendaraan untuk menggunakan command ini!");
    if(!(GetPlayerInterior(playerid) == 0)) return SEM(playerid, "ERROR: Anda harus berada di luar interior!");
    new vehicleid = strval(params);
    new Float: posX, Float: posY, Float: posZ, Float: angle, worldid;
    if(bool:IsValidVehicle(vehicleid)){
        GetPlayerPos(playerid, posX, posY, posZ);
        GetPlayerFacingAngle(playerid, angle);
        worldid = GetPlayerVirtualWorld(playerid);
        SetVehiclePos(vehicleid, posX, posY, posZ);
        SetVehicleZAngle(vehicleid, angle);
        SetVehicleVirtualWorld(vehicleid, worldid);
        PutPlayerInVehicle(playerid, vehicleid, 0);
        return 1;
    }
    else return SEM(playerid, "ERROR: Vehicle ID tidak valid!");
}
CMD:cargod(playerid, params[]){
    if(GetPlayerState(playerid) == PLAYER_STATE_DRIVER){
        CARGOD[playerid] = !(CARGOD[playerid]);
        if(CARGOD[playerid]){
            SendClientMessage(playerid, COLOR_WHITE, "CAR GODMODE: {00ff00}ON");
        }
        else SendClientMessage(playerid, COLOR_WHITE, "CAR GODMODE: {ff0000}OFF");
        RepairVehicle(GetPlayerVehicleID(playerid));
        SetVehicleHealth(GetPlayerVehicleID(playerid), 1000.0);
    }
    else return SEM(playerid, "ERROR: Anda harus menjadi driver untuk menggunakan command ini!");
    return 1;
}