#define MDIALOG_ZLANG_MODE				
#include "mdialog"
#include "../modules/Utilities/dialog.inc"
#include "../modules/Utilities/header.inc"
#include "../modules/DefineList.inc"

CMD:help(playerid, params[]){
    Dialog_Show(playerid, Dialog: dialog_Help);
    return 1;
}

CMD:credits(playerid, params[]){
    SendClientMessage(playerid, -1, "{00FF00}Syahreza's Gamemode. {FFFFFF}Developed by {9ACD32}Syahreza Ferdian.");
    return 1;
}
CMD:setweather(playerid, params[]){
    if(IsNull(params)) return SendClientMessage(playerid, COLOR_WHITE, "KEGUNAAN: /setweather [ID]"); 
    new weather = strval(params);
    if(22 >= weather >= 0){
        SetWeather(weather);
    }
    else SEM(playerid, "ERROR: Invalid weather ID!");
    return 1;
}
CMD:killme(playerid, params[]){
    SetPlayerHealth(playerid, 0.0);
    return 1;
}
CMD:setskin(playerid, params[]){
    if(IsNull(params)) return SendClientMessage(playerid, COLOR_WHITE, "KEGUNAAN: /setskin [skinID]");
    new newSkin = strval(params);
    if(311 >= newSkin >= 0){
        SetPlayerSkin(playerid, newSkin);
    }
    else SEM(playerid, "ERROR: Invalid skin ID");
    return 1;
}
CMD:jetpack(playerid, params[]){
    SetPlayerSpecialAction(playerid, SPECIAL_ACTION_USEJETPACK);
    return 1;
}
CMD:godmode(playerid, params[]){
    GODMODE[playerid] = !(GODMODE[playerid]);
    if(GODMODE[playerid]){
        SendClientMessage(playerid, COLOR_WHITE, "GODMODE: {00ff00}ON");
    }
    else SendClientMessage(playerid, COLOR_WHITE, "GODMODE: {ff0000}OFF");
    SetPlayerHealth(playerid, 100.0);
    return 1;
}
CMD:setworld(playerid, params[]){
    if(IsNull(params)) return SendClientMessage(playerid, COLOR_WHITE, "Kegunaan: /setworld [world ID]");
    new worldid = strval(params);
    if(0 <= worldid <= MAX_WORLD_ID){
        new str[35];
        format(str, sizeof(str), "SERVER: World ID {ffff00}%d", worldid);
        SetPlayerVirtualWorld(playerid, worldid);
        SendClientMessage(playerid, COLOR_WHITE, str);
    }
    else SEM(playerid, "ERROR: Invalid World ID");
    return 1;
}
CMD:worldid(playerid, params[]){
    new worldid = GetPlayerVirtualWorld(playerid);
    new str[50];
    format(str, sizeof(str), "SERVER: World ID sekarang: %d", worldid);
    SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
    return 1;
}