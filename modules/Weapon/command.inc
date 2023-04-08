#define MDIALOG_ZLANG_MODE				
#include "mdialog"
#include "../modules/DefineList"
#include "../modules/Weapon"

CMD:weapon(playerid, params[]){
    if(IsNull(params)){
        SendClientMessage(playerid, COLOR_WHITE, "Kegunaan: /weapon [weaponID]");
        SendClientMessage(playerid, COLOR_WHITE, "HINT: Gunakan {FFFF00}/weap{ffffff} untuk melihat daftar ID weapon.");
    }
    new weaponID = strval(params);
    if(46 >= weaponID >= 0 && !(21 >= weaponID >= 19)){
        GivePlayerWeapon(playerid, weaponID, 200);
    }
    else SEM(playerid, "ERROR: Invalid weapon ID!");
    return 1;
}
CMD:setammo(playerid, params[]){
    if(IsNull(params)) return SendClientMessage(playerid, COLOR_WHITE, "Kegunaan: /setammo [amount]");
    new jmlAmmo = strval(params);
    new playerWeaponID = GetPlayerWeapon(playerid);
    if(38 >= playerWeaponID >= 16){
        if(jmlAmmo < 0) return SEM(playerid, "ERROR: Value tidak boleh di bawah 0!");
        SetPlayerAmmo(playerid, playerWeaponID, jmlAmmo);
    }
    else SEM(playerid, "ERROR: You're holding invalid weapon!");
    return 1;
}
CMD:setarmour(playerid, params[]){
    if(IsNull(params)) return SendClientMessage(playerid, COLOR_WHITE, "Kegunaan: /setarmour [amount]");
    new newArmour = strval(params);
    if(100 >= newArmour >= 0){
        SetPlayerArmour(playerid, newArmour);
    }
    else if(newArmour < 0){
        SEM(playerid, "ERROR: Value tidak bisa di bawah 0!");
    }
    else SEM(playerid, "ERROR: Maksimal armour adalah 100!");
    return 1;
}
CMD:weapid(playerid, params[]){
    Dialog_Show(playerid, Dialog: dialog_Weapon_ID);
    return 1;
}