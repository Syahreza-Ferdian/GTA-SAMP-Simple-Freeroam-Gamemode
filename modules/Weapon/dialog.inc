#define MDIALOG_ZLANG_MODE
#include "mdialog"

DialogCreate:dialog_Weapon_ID(playerid){
    new menu[600];
    strcat(menu, "Weapon Name\tID\n", sizeof(menu));
    strcat(menu, "Fist\t0\n", sizeof(menu));
    strcat(menu, "Brass Knuckles\t1\n", sizeof(menu));
    strcat(menu, "Golf Club\t2\n", sizeof(menu));
    strcat(menu, "Nite Stick\t3\n", sizeof(menu));
    strcat(menu, "Knife\t4\n", sizeof(menu));
    strcat(menu, "Baseball Bat\t5\n", sizeof(menu));
    strcat(menu, "Shovel\t6\n", sizeof(menu));
    strcat(menu, "Pool Cue\t7\n", sizeof(menu));
    strcat(menu, "Katana\t8\n", sizeof(menu));
    strcat(menu, "Chainsaw\t9\n", sizeof(menu));
    strcat(menu, "Dildo 1\t10\n", sizeof(menu));
    strcat(menu, "Dildo 2\t11\n", sizeof(menu));
    strcat(menu, "Vibrator 1\t12\n", sizeof(menu));
    strcat(menu, "Vibrator 2\t13\n", sizeof(menu));
    strcat(menu, "Flowers\t14\n", sizeof(menu));
    strcat(menu, "Cane\t15\n", sizeof(menu));
    strcat(menu, "Grenade\t16\n", sizeof(menu));
    strcat(menu, "Teargas\t17\n", sizeof(menu));
    strcat(menu, "Molotov Cocktail\t18\n", sizeof(menu));
    strcat(menu, "Colt 45\t22\n", sizeof(menu));
    strcat(menu, "Silenced Pistol\t23\n", sizeof(menu));
    strcat(menu, "Desert Eagle\t24\n", sizeof(menu));
    strcat(menu, "Shotgun\t25\n", sizeof(menu));
    strcat(menu, "Sawn-off Shotgun\t26\n", sizeof(menu));
    strcat(menu, "Combat Shotgun\t27\n", sizeof(menu));
    strcat(menu, "UZI\t28\n", sizeof(menu));
    strcat(menu, "MP5\t29\n", sizeof(menu));
    strcat(menu, "AK-47\t30\n", sizeof(menu));
    strcat(menu, "M4\t31\n", sizeof(menu));
    strcat(menu, "TEC-9\t32\n", sizeof(menu));
    strcat(menu, "Rifle\t33\n", sizeof(menu));
    strcat(menu, "Sniper Rifle\t34\n", sizeof(menu));
    strcat(menu, "Rocket Launcher\t35\n", sizeof(menu));
    strcat(menu, "Heat Seeker\t36\n", sizeof(menu));
    strcat(menu, "Flamethrower\t37\n", sizeof(menu));
    strcat(menu, "Minigun\t38\n", sizeof(menu));
    strcat(menu, "Satchel Explosives\t39\n", sizeof(menu));
    strcat(menu, "Bomb\t40\n", sizeof(menu));
    strcat(menu, "Spraycan\t41\n", sizeof(menu));
    strcat(menu, "Fire Extinguisher\t42\n", sizeof(menu));
    strcat(menu, "Camera\t43\n", sizeof(menu));
    strcat(menu, "Night Vision\t44\n", sizeof(menu));
    strcat(menu, "Thermal Googles\t45\n", sizeof(menu));
    strcat(menu, "Parachute\t46\n", sizeof(menu));

    Dialog_Open(playerid, Dialog: dialog_Weapon_ID, DIALOG_STYLE_TABLIST_HEADERS, "WEAPON ID", menu, "Oke", "Tutup");
}
DialogResponse:dialog_Weapon_ID(playerid, response, listitem, inputtext[]){
    if(response){
        Dialog_Show(playerid, Dialog: dialog_Weapon_ID);
    }
    return 1;
}