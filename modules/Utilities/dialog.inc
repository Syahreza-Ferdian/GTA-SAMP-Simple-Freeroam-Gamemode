#define MDIALOG_ZLANG_MODE
#include "mdialog"

DialogCreate:dialog_Rules(playerid)
{
    new Menu[200];
	// Menu[0]='\0';
	strcat(Menu, "Server ini berkonsepkan freeroam. Setiap orang bebas melakukan apa saja\n", sizeof(Menu));
	strcat(Menu, "Namun, terdapat beberapa peraturan sederhana dalam server ini: \n", sizeof(Menu));
    strcat(Menu, "\t1. Hargailah player lain\n", sizeof(Menu));
    strcat(Menu, "\t2. Have fun!", sizeof(Menu));
    
    Dialog_Open(playerid, Dialog: dialog_Rules, DIALOG_STYLE_MSGBOX, "Rules Server", Menu, "Oke", "Close");
}
DialogResponse:dialog_Rules(playerid, response, listitem, inputtext[]){
    if(!response){
        SendClientMessage(playerid, -1, "{FF0000}Mohon membaca peraturan server sebelum bermain. Klik tombol '{FFFFFF}OKE' {FF0000}jika kamu setuju dengan peraturan server.");
        Dialog_Show(playerid, Dialog: dialog_Rules);
        return 1;
    }
    else GameTextForPlayer(playerid, "Terima kasih telah membaca peraturan server.\nSelamat Bermain", 5000, 5);
    return 1;
}
DialogCreate:dialog_Help(playerid){
    new Menu[1600];
    strcat(Menu, "Command\tFungsi\n", sizeof(Menu));
    strcat(Menu, "/help\tUntuk melihat semua command yang ada di server.\n", sizeof(Menu));
    strcat(Menu, "/credits\tUntuk melihat orang yang men-develop server/gamemode ini\n", sizeof(Menu));
    strcat(Menu, "/rules\tUntuk melihat peraturan yang berlaku di server\n", sizeof(Menu));
    strcat(Menu, "/setweather\tUntuk mengganti weather di in-game\n", sizeof(Menu));
    strcat(Menu, "/killme\tMembunuh karakter in-game Anda\n", sizeof(Menu));
    strcat(Menu, "/setskin\tMengatur skin karakter Anda\n", sizeof(Menu));
    strcat(Menu, "/jetpack\tMengenakan jetpack biar bisa terbang\n", sizeof(Menu));
    strcat(Menu, "/weapon\tSpawn weapon untuk karakter Anda\n", sizeof(Menu));
    strcat(Menu, "/setammo\tMengatur ammo untuk weapon Anda\n", sizeof(Menu));
    strcat(Menu, "/setarmour\tMengatur armour (darah putih) karakter Anda\n", sizeof(Menu));
    strcat(Menu, "/godmode\tMembuat karakter anda kebal\n", sizeof(Menu));
    strcat(Menu, "/gotols\tMen-teleport diri sendiri ke Los Santos\n", sizeof(Menu));
    strcat(Menu, "/gotolv\tMen-teleport diri sendiri ke Las Venturas\n", sizeof(Menu));
    strcat(Menu, "/gotosf\tMen-teleport diri sendiri ke San Fierro\n", sizeof(Menu));
    strcat(Menu, "/gotorc\tMen-teleport diri sendiri ke Red County\n", sizeof(Menu));
    strcat(Menu, "/ft\tMen-teleport diri sendiri ke depan\n", sizeof(Menu));
    strcat(Menu, "/bt\tMen-teleport diri sendiri ke belakang\n", sizeof(Menu));
    strcat(Menu, "/rt\tMen-teleport diri sendiri ke samping kanan\n", sizeof(Menu));
    strcat(Menu, "/lt\tMen-teleport diri sendiri ke samping kiri\n", sizeof(Menu));
    strcat(Menu, "/dn\tMen-teleport diri sendiri ke bawah\n", sizeof(Menu));
    strcat(Menu, "/up\tMen-teleport diri sendiri ke atas\n", sizeof(Menu));
    strcat(Menu, "/tune\tMen-teleport ke tempat tuning/modifikasi kendaraan\n", sizeof(Menu));
    strcat(Menu, "/veh\tUntuk men-spawn kendaraan\n", sizeof(Menu));
    strcat(Menu, "/destroyveh\tMenghancurkan kendaraan yang sedang dikemudikan\n", sizeof(Menu));
    strcat(Menu, "/vehcolor\tMerubah warna kendaraan secara instan\n", sizeof(Menu));
    strcat(Menu, "/fixveh\tMemperbaiki kendaraan yang sedang dikemudikan\n", sizeof(Menu));
    strcat(Menu, "/flip\tDigunakan untuk mem-flip kendaraan yang sedang terbalik\n", sizeof(Menu));
    strcat(Menu, "/gotoveh\tUntuk men-teleport diri sendiri ke kendaraan tertentu\n", sizeof(Menu));
    strcat(Menu, "/getveh\tUntuk men-teleport kendaraan ke lokasi kita\n", sizeof(Menu));
    strcat(Menu, "/cargod\tMembuat kendaraan yang dikemudikan menjadi kebal\n", sizeof(Menu));
    strcat(Menu, "/setworld\tMengubah world ID yang dipakai\n", sizeof(Menu));
    strcat(Menu, "/worldid\tMenampilkan world ID saat ini\n", sizeof(Menu));

    Dialog_Open(playerid, Dialog: dialog_Help, DIALOG_STYLE_TABLIST_HEADERS, "COMMAND LIST", Menu, "Oke", "Tutup");
}
DialogResponse:dialog_Help(playerid, response, listitem, inputtext[]){
    if(response){
        Dialog_Show(playerid, Dialog: dialog_Help);
    }
    return 1;
}