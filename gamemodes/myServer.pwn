#include <a_samp>
#include <core>
#include <float>
#include <string>
#include <file>
#include <time>
#include <datagram>
#include <a_players>
#include <a_vehicles>
#include <a_objects>
#include <a_sampdb>
#include <zcmd>
#include "mdialog"

#include "../modules/util"
#include "../modules/DefineList"
#include "../modules/Weapon"
#include "../modules/TeleportSet"
#include "../modules/Vehicle"
// #define MAX_PLAYER_NAME = 20;
enum{
    DIALOG_RULES,
    DIALOG_HELP,
    DIALOG_WEAPON,
}

main()
{
	print("\n----------------------------------");
	print("  Syahreza's Gamemode\n");
	print("----------------------------------\n");
}

public OnGameModeInit(){
    print("Syahreza Gamemode");
    SetGameModeText("Syahreza's Gamemode [ISENG ONLY]");
    ShowPlayerMarkers(PLAYER_MARKERS_MODE_STREAMED);
    ShowNameTags(true);
    AllowAdminTeleport(true);

    // AddPlayerClass(modelid, Float:spawn_x, Float:spawn_y, Float:spawn_z, Float:z_angle, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo)
    AddPlayerClass(0, 1958.33, 1343.12, 15.36, 269.15, 0, 0, 0, 0, 0, 100); // CJ
    AddPlayerClass(1, 1958.33, 1343.12, 15.36, 269.15, 0, 0, 0, 0, 0, 100); // The Truth
    return 1;
}

public OnPlayerConnect(playerid){
    new string[64], ip[100], version[100];
    new playerName[MAX_PLAYER_NAME];
    GODMODE[playerid] = false;
    CARGOD[playerid] = false;
    GetPlayerName(playerid, playerName, sizeof(playerName));
    format(string, sizeof string, "[JOIN] {00FF00}%s {FFFFFF}telah terkoneksi ke server", playerName);
    SendClientMessageToAll(-1, string);
    //IP Info
    GetPlayerIp(playerid, ip, sizeof(ip));
    format(ip, sizeof(ip), "{00ff00}IP address {ffffff}yang anda gunakan sekarang {ffff00}%s", ip);
    SendClientMessage(playerid, COLOR_WHITE, ip);
    //Client Version info
    GetPlayerVersion(playerid, version, sizeof(version));
    format(version, sizeof(version), "Versi SAMP yang anda gunakan: {00ff00}%s", version);
    SendClientMessage(playerid, COLOR_WHITE, version);

    SendClientMessage(playerid, COLOR_WHITE, "SERVER: Ketik command {ffff00}/help {ffffff}untuk melihat semua command yang ada di server.");
    GameTextForPlayer(playerid, "~w~SA-MP: ~r~Syahreza's Gamemode ~w~FREEROAM", 5000, 5);
    return 1;
}

public OnPlayerSpawn(playerid){
    SetPlayerInterior(playerid, 0);
    TogglePlayerClock(playerid, false);
    GivePlayerMoney(playerid, 9999999);
    return 1;
}

public OnPlayerRequestClass(playerid, classid){
    SetupPlayerClassSelection(playerid);
    return 1;
}

public OnPlayerClickMap(playerid, Float: fX, Float:fY, Float:fZ){
    if(IsPlayerInAnyVehicle(playerid)){
        new vehicleid = GetPlayerVehicleID(playerid);
        SetVehiclePos(vehicleid, fX, fY, fZ);
        PutPlayerInVehicle(playerid, vehicleid, 0);
    }
    else SetPlayerPosFindZ(playerid, fX, fY, fZ);
    return 1;
}

public OnPlayerDeath(playerid, killerid, reason){
    new string[20];
    format(string, sizeof string, "You has been killed");
    SendClientMessage(playerid, -1, string);
    SendDeathMessage(killerid, playerid, reason);
    GameTextForPlayer(playerid, "~r~wasted", 5000, 5);
    return 1;
}

public OnPlayerUpdate(playerid){
    if(CARGOD[playerid]){
        RepairVehicle(GetPlayerVehicleID(playerid));
        SetVehicleHealth(GetPlayerVehicleID(playerid), 1000.0);
    }
    if(GODMODE[playerid]) SetPlayerHealth(playerid, 500.0);
    return 1;
}

stock SetupPlayerClassSelection(playerid){
    SetPlayerInterior(playerid, 14);
    SetPlayerPos(playerid, 258.4893, -41.4008, 1002.0234);
    SetPlayerFacingAngle(playerid, 270);
    SetPlayerCameraPos(playerid, 256.0815, -43.0475, 1004.0234);
    SetPlayerCameraLookAt(playerid, 258.4893,-41.4008,1002.0234);
}
