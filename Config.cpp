class CfgPatches
{
	class Haywards_Ghillie_Mod
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Backpacks"
		};
	};
};
class CfgMods
{
	class Haywards_Ghillie_Mod
	{
		dir="HaywardsGhillieMod";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Haywards Ghillie Mod";
		credits=""; 
		author="Lee Hayward";
		authorID="76561198040948171";  
		version="1.4";
		extra=0;
		type="mod";
	};
};

class CfgVehicles
{

	class Clothing;
	class GhillieBushrag_ColorBase: Clothing
	{
		itemSize[]={3,3};
		itemsCargoSize[]={10,6};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
	};
	
	class GhillieTop_ColorBase: Clothing
	{
		itemSize[]={3,3};
		itemsCargoSize[]={10,6};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
	};

	class GhillieSuit_ColorBase: Clothing
	{
		itemSize[]={3,3};
		itemsCargoSize[]={10,6};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
	};
};

