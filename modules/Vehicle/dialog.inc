#include "../modules/Vehicle.inc"

DialogCreate:dialog_Veh(playerid){
    new Menu[3000];
    strcat(Menu, "Vehicle Name\tVehicle ID\n", sizeof(Menu));
    strcat(Menu, "Landstalker\t400\nBravura\t401\nBuffalo\t402\nLinerunner\t403\nPerennial\t404\nSentinel\t405\nDumper\t406\nFiretruck\t407\nTrashmaster\t408\nStretch\t409\nManana\t410\n", sizeof(Menu));
    strcat(Menu, "Infernus\t411\nVoodoo\t412\nPony\t413\nMule\t414\nCheetah\t415\nAmbulance\t416\nLevianthan\t417\nMoonbeam\t418\nEsperanto\t419\nTaxi\t420\n", sizeof(Menu));
    strcat(Menu, "Washington\t421\nBobcat\t422\nMr. Whoopee\t423\nBF Injection\t424\nHunter\t425\nPremier\t426\nEnforcer\t427\nSecurity Car\t428\nBanshee\t429\nPredator\t430\n", sizeof(Menu));
    strcat(Menu, "Bus\t431\nRhino\t432\nBarracks\t433\nHotknife\t434\nTrailer\t435\nPrevion\t436\nCoach\t437\nCabbie\t438\nStallion\t439\nRumpo\t440\n", sizeof(Menu));
    strcat(Menu, "RC Bandit\t441\nRomero\t442\nPacker\t443\nMonster\t444\nAdmiral\t445\nSqualo\t446\nSeasparrow\t447\nPizzaBoy\t448\nTram\t449\nTrailer 2\t450\n", sizeof(Menu));
    strcat(Menu, "Turismo\t451\nSpeeder\t452\nReefer\t453\nTropic\t454\nFlatbed\t455\nYankee\t456\nCaddy\t457\nSolair\t458\nRC Van\t459\nSkimmer\t460\n", sizeof(Menu));
    strcat(Menu, "PCJ-600\t461\nFaggio\t462\nFreeway\t463\nRC Barron\t464\nRC Raider\t465\nGlendale\t466\nOceanic\t467\nSanchez\t468\nSparrow\t469\nPatriot\t470\n", sizeof(Menu));
    strcat(Menu, "Quad\t471\nCoastguard\t472\nDinghy\t473\nHermes\t474\nSabre\t475\nRustler\t476\nZR-350\t477\nWalton\t478\nRegina\t479\nComet\t480\n", sizeof(Menu));
    strcat(Menu, "BMX\t481\nBurrito\t482\nCamper\t483\nMarquis\t484\nBaggage\t485\nDozer\t486\nMaverick\t487\nNews Maverick\t488\nRancher\t489\nFBI Rancher\t490\n", sizeof(Menu));
    strcat(Menu, "Virgo\t491\nGreenwood\t492\nJetmax\t493\nHotring C\t494\nSandking\t495\nBlista Compact\t496\nPolice Maverick\t497\nBoxville\t498\nBenson\t499\nMesa\t500\n", sizeof(Menu));
    strcat(Menu, "RC Goblin\t501\nHotring A\t502\nHotring B\t503\nBloodring Banger\t504\nRancher Lure\t505\nSuper GT\t506\nElegant\t507\nJourney\t508\nBike\t509\nMountain Bike\t510\n", sizeof(Menu));
    strcat(Menu, "Beagle\t511\nCropduster\t512\nStuntplane\t513\nPetrolTanker\t514\nRoad Train\t515\nNebula\t516\nMajestic\t517\nBuccaneer\t518\nShamal\t519\nHydra\t520\n", sizeof(Menu));
    strcat(Menu, "FCR-900\t521\nNRG-500\t522\nHPV1000\t523\nCement Truck\t524\nTowtruck\t525\nFortune\t526\nCardona\t527\nFBI Truck\t528\nWillard\t529\nForklift\t530\n", sizeof(Menu));
    strcat(Menu, "Tractor\t531\nCombine\t532\nFeltzer\t533\nRemington\t534\nSlamvan\t535\nBlade\t536\nFreight\t537\nBrownstreak\t538\nVortex\t539\nVincent\t540\n", sizeof(Menu));
    strcat(Menu, "Bullet\t541\nClover\t542\nSadler\t543\nFireTruck LA\t544\nHustler\t545\nIntruder\t546\nPrimo\t547\nCargobob\t548\nTampa\t549\nSunrise\t550\n", sizeof(Menu));
    strcat(Menu, "Merit\t551\nUtility Van\t552\nNevada\t553\nYosemite\t554\nWindsor\t555\nMonster A\t556\nMonster B\t557\nUranus\t558\nJester\t559\nSultan\t560\n", sizeof(Menu));
    strcat(Menu, "Stratum\t561\nElegy\t562\nRaindance\t563\nRC Tiger\t564\nFlash\t565\nTahoma\t566\nSavanna\t567\nBandito\t568\nFreight Trailer\t569\nStreak Trailer\t570\n", sizeof(Menu));
    strcat(Menu, "Kart\t571\nMower\t572\nDuneride\t573\nSweeper\t574\nBroadway\t575\nTornado\t576\nAT-400\t577\nDFT-30\t578\nHuntley\t579\nStafford\t580\n", sizeof(Menu));
    strcat(Menu, "BF-400\t581\nNewsvan\t582\nTug\t583\nPetrol Trailer\t584\nEmperor\t585\nWayfarer\t586\nEuros\t587\nHotdog\t588\nClub\t589\nFreight Trailer\t590\n", sizeof(Menu));
    strcat(Menu, "Trailer 3\t591\nAndromada\t592\nDodo\t593\nRC Cam\t594\nLaunch\t595\nLSPD Car\t596\nSFPD Car\t597\nLVPD Car\t598\nPD Rancher\t599\nPicador\t600\n", sizeof(Menu));
    strcat(Menu, "SWAT\t601\nAlpha\t602\nPhoenix\t603\nGlendale\t604\nSadler Damaged\t605\nBaggage Trailer A\t606\nBaggage Trailer B\t608\nStairs Trailer\t608\nBoxville\t609\nFarm Trailer\t610\nUtility Trailer\t611\n", sizeof(Menu));
    Dialog_Open(playerid, Dialog: dialog_Veh, DIALOG_STYLE_TABLIST_HEADERS, "Vehicle Selection", Menu, "Spawn", "Cancel");
}
DialogResponse:dialog_Veh(playerid, response, listitem, inputtext[]){
    if(response){
        new vehicleid, interiorid, worldid, text[100];
		new Float:X, Float:Y, Float:Z, Float:Angle;
        SetupPlayerForVehicleSelection(playerid, vehicleid, 400+listitem, interiorid, worldid, Float:X, Float:Y, Float:Z, Float:Angle);
        vehicleid = GetPlayerVehicleID(playerid);
        format(text, sizeof(text), "{ffffff}VEHICLE: Berhasil spawn {00ff00}%s {ffffff}dengan ID {00ff00}%d", inputtext, vehicleid);
        SendClientMessage(playerid, COLOR_WHITE, text);
    }
    return 1;
}