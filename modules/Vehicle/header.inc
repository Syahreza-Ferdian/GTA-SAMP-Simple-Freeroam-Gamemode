new bool: CARGOD[MAX_PLAYERS];
stock SetupPlayerForVehicleSelection(playerid, vehicleid, vehicletype, interiorid, worldid, Float:X, Float:Y, Float:Z, Float:Angle)
{
	interiorid = GetPlayerInterior(playerid);
	worldid = GetPlayerVirtualWorld(playerid);	
	GetPlayerPos(playerid, Float:X, Float:Y, Float:Z);
	GetPlayerFacingAngle(playerid, Float:Angle);
	vehicleid = CreateVehicle(vehicletype, Float:X, Float:Y, Float:Z, Float:Angle, -1, -1, -1, 0);
	LinkVehicleToInterior(vehicleid, interiorid);
	SetVehicleVirtualWorld(vehicleid, worldid);
	PutPlayerInVehicle(playerid, vehicleid, 0);
}