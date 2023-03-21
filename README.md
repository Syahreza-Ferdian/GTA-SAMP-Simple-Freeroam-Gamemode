# Simple Freeroam Gamemode
<p>By Syahreza Ferdian</p>

<p align="center">
  <a href="https://github.com/Syahreza-Ferdian/GTA-SAMP-Simple-Freeroam-Gamemode"><img src="https://img.shields.io/badge/sampctl-Simple_Freeroam_Server-2f2f2f.svg?style=for-the-badge" align="center"></a>
</p>


<!--
Short description of your library, why it's useful, some examples, pictures or
videos. Link to your forum release thread too.

Remember: You can use "forumfmt" to convert this readme to forum BBCode!

What the sections below should be used for:

`## Installation`: Leave this section un-edited unless you have some specific
additional installation procedure.

`## Testing`: Whether your library is tested with a simple `main()` and `print`,
unit-tested, or demonstrated via prompting the player to connect, you should
include some basic information for users to try out your code in some way.

And finally, maintaining your version number`:

* Follow [Semantic Versioning](https://semver.org/)
* When you release a new version, update `VERSION` and `git tag` it
* Versioning is important for sampctl to use the version control features

Happy Pawning!
-->

## Tentang Gamemode Ini
> Gamemode pertama yang saya bikin dengan serius (setelah sebelumnya gagal). Akan terus di-update dan dibenahi sesuai dengan kemampuan saya.

## Kekurangan Gamemode Ini
<ul>
        <li>Tidak mempunyai database system</li>
        <li>Beberapa command yang harusnya ada, masih belum ada</li>
        <li>Vehicle management system yang kurang bagus</li>
        <li>Command /getveh yang masih ngebug. Kadang karakternya terbang ga jelas ketika men-get kendaraan besar (Roadtrain, Petrol Tanker, Linerunner)</li>
</ul>

## Installation

Setidaknya membutuhkan plugin/dependencies berikut untuk menjalankan gamemode ini:
<ol>
        <li>SAMP Standard Libary</li>
        <li>ZCMD by Southclaws</li>
        <li>MDialog by Open GTO</li>
</ol>
Sangat disarankan untuk memasang sampctl supaya lebih mudah dalam mengatur dan compile gamemode


## Command List (Akan di-update apabila ada update)

> /help
/credits
/rules
/setweather
/killme
/setskin
/jetpack
/weapon
/setammo
/setarmour
/godmode
/gotols
/gotolv
/gotosf
/gotorc
/ft
/bt
/lt
/rt
/dn
/up
/tune
/destroyveh
/vehcolor
/fixveh
/flip
/gotoveh
/getveh
/cargod
/setworld
/worldid


## Usage

<!--
Depending on whether your package is tested via in-game "demo tests" or
y_testing unit-tests, you should indicate to readers what to expect below here.
-->

Apabila sudah meng-install SAMPCTL, maka ketikkan cmd berikut di console untuk meng-compile gamemode:
```bash
sampctl package build
```
Lalu ketikkan cmd berikut untuk menjalankan server secara lokal (local host)
```bash
sampctl package run
```

## Special Thanks
Terima kasih saya sampaikan kepada:
<ol>
        <li>Open MP Documentation</li>
        <li>Southclaws untuk plugin ZCMD</li>
        <li>Open-GTO untuk plugin MDialog</li>
        <li>Tianmetal untuk macro SEM(Send Error Message) dan macro IsNull, serta menginspirasi saya untuk bikin gamemode secara Modular</li>
</ol>
