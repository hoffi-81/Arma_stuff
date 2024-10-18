#define CT_BUTTON 4203


class CfgPatches
{
	class DD_FORM_2745
	{
		name = "GTGC GUI";
		author = "Hoffi_81";
		requiredVersion = 2.0;
		requiredAddons[] = {"A3_UI_F"};
		units[] = {};
		weapons[] = {};
	};
};


class CfgFunctions
{
	class GTGC_GUI
	{
		class 9Liner
		{
			class onLoad9Liner_med
			{
				file = "";
			};
			class onUnload9Liner_med
			{
				file = "";
			};
		};
	};
};

class RscPicture;
class RscEdit;
class RscButton;
#define CT_STATIC 4204;







class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class GTGC_9Liner
				{
					author = "hoffi_81";
					displayName = "9 Liner Medivac";
					exceptions[] = {"isNotHandcuffed","isNotSurrendering","isNotSwimming","isNotOnLadder"};
					statement = "createDialog 'GTGC_9Liner';";
					icon = "GerGUI\ui\9Liner_Medivac.paa"
				};
			};
		};
	};
};


class GTGC_9Liner
{
	idd = 5000;
	duration = "1e + ´011";
	fadeIn = 0;
	fadeOut = 0;
	onLoad = "_this call GTGC_GUI_fnc_onLoad9Liner_med;";
	onUnload = "call GTGC_GUI_fnc_onUnload9Liner_med;";

	class ControlsBackground
	{
		class DD_FORM_2745: RscPicture
		{
			idc = 4200;
			text = "GerGUI\ui\9Liner_Medivac.paa";
			x = "0.0125 * safezoneW + safezoneX";
			y = "0.02 * safezoneH + safezoneY";
			w = "0.2875 * safezoneW";
			h = "0.46 * safezoneH";
		};
	};

	class Controls
	{
		class LOCATION: RscEdit
		{
			idc = 4201;
			x = "0.052 * safezoneW + safezoneX";
			y = "0.049 * safezoneH + safezoneY";
			w = "0.134 * safezoneW"; //breite
			h = "0.015 * safezoneH"; //höhe
			style = "0x200";
			colorText[] = {0,0,0,1};
			shadow = 0;
			tooltip = "Koordinaten des Notfallortes.";
		};

		class CALLSIGN: RscEdit
		{
			idc = 4202;
			x = "0.052 * safezoneW + safezoneX";
			y = "0.065 * safezoneH + safezoneY";
			w = "0.134 * safezoneW";
			h = "0.015 * safezoneH";
			style = "0x200";
			colorText[] = {0,0,0,1};
			shadow = 0;
			tooltip = "Name der Einheit.";
		};
		class PRIORITY: RscButton
		{
			idc = 4203;
			x = "0.012 * safezoneW + safezoneX";
			y = "0.08 * safezoneH + safezoneY";
			w = "0.183 * safezoneW";
			h = "0.03 * safezoneH";
			style = "0x200";
			colorBackground[] = {0,0,0,1};
			shadow = 0;
			tooltip = "Click to toggle another UI element.";

			// Event handler for button click
			// onButtonClick = "if (_uiVisible) then { _uiVisible = false; ctrlShow (4204, false); } else { _uiVisible = true; ctrlShow (4204, true); };";
			// onload = "_uiVisible = false;"
		};

		// class AnotherUIElement: RscEdit 
		// {
		// 	idc = 4204;
		// 	// type = CT_STATIC; // Use CT_STATIC for a static text element if desired
		// 	style = "0x00 + 0x50";
		// 	x = "0.052 * safezoneW + safezoneX";
		// 	y = "0.13 * safezoneH + safezoneY";
		// 	w = "0.134 * safezoneW";
		// 	h = "0.015 * safezoneH";
		// 	colorBackground[] = {0, 0, 0, 0.5}; // Background color with 50% opacity
		// 	text = "Another UI Element";
		// 	sizeEx = 0.04;
		// 	shadow = 0;
		// };
		class RANK: RscEdit
		{
			idc = 4204;
			x = "0.0210941 * safezoneW + safezoneX";
			y = "0.1875 * safezoneH + safezoneY";
			w = "0.134766 * safezoneW";
			h = "0.0455555 * safezoneH";
			style = "0x200 + 0x10";
			colorText[] = {0,0,0,1};
			shadow = 0;
			tooltip = "Rank of captive.";
		};
		class CAPTURING_UNIT: RscEdit
		{
			idc = 4205;
			x = "0.157031 * safezoneW + safezoneX";
			y = "0.1875 * safezoneH + safezoneY";
			w = "0.134766 * safezoneW";
			h = "0.0455555 * safezoneH";
			style = "0x200 + 0x10";
			colorText[] = {0,0,0,1};
			shadow = 0;
			tooltip = "Unit that captured the EPW.";
		};
		class CIRCUMSTANCES: RscEdit
		{
			idc = 4207;
			x = "0.0210938 * safezoneW + safezoneX";
			y = "0.338889 * safezoneH + safezoneY";
			w = "0.0890633 * safezoneW";
			h = "0.126805 * safezoneH";
			style = "0x200 + 0x10";
			colorText[] = {0,0,0,1};
			shadow = 0;
			tooltip = "Circumstances or reason for capture.";
		};
		class CONDITION: RscEdit
		{
			idc = 4208;
			x = "0.112109 * safezoneW + safezoneX";
			y = "0.355555 * safezoneH + safezoneY";
			w = "0.0886727 * safezoneW";
			h = "0.110138 * safezoneH";
			style = "0x200 + 0x10";
			colorText[] = {0,0,0,1};
			shadow = 0;
			tooltip = "Physical condition of the EPW.";
		};
		class EQUIPMENT: RscEdit
		{
			idc = 4209;
			x = "0.202734 * safezoneW + safezoneX";
			y = "0.355555 * safezoneH + safezoneY";
			w = "0.0886727 * safezoneW";
			h = "0.110138 * safezoneH";
			style = "0x200 + 0x10";
			colorText[] = {0,0,0,1};
			shadow = 0;
			tooltip = "Weapons, equipment, documents found on the captive.";
		};
	};
};
