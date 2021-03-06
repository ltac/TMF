/* assignGear specific macros */


class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
     uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP"};
       vest[] = {};
       backpack[] = {"rhsusf_falconii_mc"};
       headgear[] = {};
       goggles[] = {"default"};
       hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] = {};
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "";

    // These are acre item radios that will be added during the ACRE init. ACRE radios added via any other system will be erased.
    radios[] = {};
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {
        "UK3CB_BAF_H_Mk7_Camo_A",
        "UK3CB_BAF_H_Mk7_Camo_B",
        "UK3CB_BAF_H_Mk7_Camo_C",
        "UK3CB_BAF_H_Mk7_Camo_D"
    };
    vest[] = {
        "UK3CB_BAF_V_Osprey_Rifleman_A",
        "UK3CB_BAF_V_Osprey_Rifleman_B",
        "UK3CB_BAF_V_Osprey_Rifleman_C",
        "UK3CB_BAF_V_Osprey_Rifleman_D",
        "UK3CB_BAF_V_Osprey_Rifleman_E",
        "UK3CB_BAF_V_Osprey_Rifleman_F"};
    backpack[] = {"UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A"};
    primaryWeapon[] = {"UK3CB_BAF_L85A2_EMAG"};
    scope[] = {"UK3CB_BAF_SpecterLDS_Dot"};
    attachment[] = {"acc_pointer_IR"};
    magazines[] =
    {
        LIST_10("UK3CB_BAF_556_30Rnd"),
        LIST_2("UK3CB_BAF_556_30Rnd_T"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
    items[] =
    {
        LIST_3("ACE_fieldDressing"),
        "ACE_morphine"
    };
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"UK3CB_BAF_L85A2_UGL"};
    magazines[] +=
    {
        LIST_8("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_shell")
    };
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"UK3CB_BAF_L22A2"};
    scope[] = {"UK3CB_BAF_Eotech"};
    attachment[] = {"acc_pointer_IR"};
    magazines[] =
    {
        LIST_7("UK3CB_BAF_556_30Rnd"),
        LIST_2("UK3CB_BAF_556_30Rnd_T"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class m : car
{
    displayName = "Medic";
    backpackItems[] = {
        LIST_15("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_6("ACE_epinephrine"),
        LIST_2("ACE_bloodIV"),
        LIST_2("SmokeShell")
    };
};
class smg : r
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"UK3CB_BAF_L91A1"};
    scope[] = {"UK3CB_BAF_Eotech"};
    magazines[] =
    {
        LIST_6("UK3CB_BAF_9_30Rnd"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
};
class ftl : g
{
    displayName = "Fireteam Leader";
    magazines[] +=
    {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_shell"),
        LIST_2("SmokeShellGreen")
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] +=
    {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    items[] += {"ACE_Maptools"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class co : sl
{
    displayName = "Platoon Leader";
    radios[] = {"ACRE_PRC117F"};
    magazines[] = {
        LIST_3("rhsusf_mag_15Rnd_9x19_FMJ"),
        LIST_2("1Rnd_SmokeGreen_Grenade_shell"),
        LIST_3("1Rnd_SmokeRed_Grenade_shell"),
        LIST_2("SmokeShellGreen"),
        LIST_2("SmokeShellPurple"),
        LIST_3("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_Smoke_Grenade_shell"),
        LIST_7("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
        "HandGrenade",
        LIST_2("SmokeShell")
    };
    backpackItems[] = {};
};
class fac : co
{
    displayName = "Forward Air Controller";
    backpackItems[] = {};
    radios[] = {"ACRE_PRC117F"};
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS",
        "ACE_Vector"
    };
    items[] = {
        LIST_3("ACE_fieldDressing"),
        "ACE_morphine",
        "ACE_Kestrel4500",
        "ACE_microDAGR",
        "ACE_Maptools"
    };
};
class ar : r
{
    displayName = "Automatic Rifleman";
    primaryWeapon[] = {"UK3CB_BAF_L110A2"};
    bipod[] = {};
    sidearmWeapon[] = {"UK3CB_BAF_L131A1"};
    magazines[] =
    {
        LIST_6("UK3CB_BAF_556_100Rnd"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("UK3CB_BAF_9_17Rnd")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backpackItems[] =
    {
        LIST_4("UK3CB_BAF_556_100Rnd")
    };
    linkedItems[] += {"Binocular"};
};
class rat : car
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"rhs_weap_M136"};
};
class dm : r
{
    displayName = "Designated Marksman";
    primaryWeapon[] = {"rhs_weap_sr25_ec"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    magazines[] =
    {
        LIST_10("rhsusf_20Rnd_762x51_m118_special_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner";
    primaryWeapon[] = {"UK3CB_BAF_L7A2"};
    scope[] = {};
    magazines[] =
    {
        LIST_4("UK3CB_BAF_762_200Rnd_T"),
        "HandGrenade",
        "SmokeShell",
        LIST_4("UK3CB_BAF_9_17Rnd")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("UK3CB_BAF_762_200Rnd_T")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_3("UK3CB_BAF_762_200Rnd_T")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    backPack[] = {"UK3CB_BAF_L111A1"};

};
class hmgac : r
{
    displayName = "HMG Ammo Carrier";
    backpackItems[] =
    {
        LIST_3("UK3CB_BAF_127_100Rnd")
    };
};
class hmgag : car
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"UK3CB_BAF_Tripod"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"rhs_weap_smaw_green"};
    secondaryAttachments[] = {"rhs_weap_optic_smaw"};
    backpack[] = {"B_Carryall_khk"};
    magazines[] +=
    {
        LIST_2("rhs_mag_smaw_HEDP"),
        LIST_3("rhs_mag_smaw_SR")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backpack[] = {"B_Carryall_khk"};
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEDP"),
        "rhs_mag_smaw_SR"
    };
};
class matag : car
{
    displayName = "MAT Assistant Gunner";
    vest[] = {"rhsusf_iotv_ocp_Teamleader"};
    backpack[] = {"B_Carryall_khk"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_mag_smaw_HEDP"),
        "rhs_mag_smaw_SR"
    };
};
class hatg : car
{
    displayName = "HAT Gunner";
    secondaryWeapon[] = {"rhs_weap_fgm148"};
    backpack[] = {"B_Carryall_khk"};
    backpackItems[] =
    {
        LIST_2("rhs_fgm148_magazine_AT")
    };
};
class hatac : r
{
    displayName = "HAT Ammo Carrier";
    backpack[] = {"B_Carryall_khk"};
    backpackItems[] =
    {
        LIST_2("rhs_fgm148_magazine_AT")
    };
};
class hatag : car
{
    displayName = "HAT Assistant Gunner";
    backpack[] = {"B_Carryall_khk"};
    backpackItems[] =
    {
        LIST_2("rhs_fgm148_magazine_AT")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : car
{
    displayName = "Mortar Gunner";
    backPack[] = {"B_Mortar_01_weapon_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemGPS"
    };
};
class mtrac : r
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : car
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"B_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class samg : car
{
    displayName = "AA Missile Specialist";
    backpack[] = {"B_Carryall_khk"};
    secondaryWeapon[] = {"rhs_weap_fim92"};
    magazines[] +=
    {
        LIST_2("rhs_fim92_mag")
    };
};
class samag : car
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"B_Carryall_khk"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        LIST_2("rhs_fim92_mag")
    };
};
class sn : r
{
    displayName = "Sniper";
    uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM"};
    vest[] = {"UK3CB_BAF_V_Osprey_Marksman_A"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_XM2010_sa"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_2"};
    bipod[] = {"rhsusf_acc_harris_bipod"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_9("rhsusf_5Rnd_300winmag_xm2010"),
        LIST_2("HandGrenade"),
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    backpack[] = {};
    linkedItems[] += {"ACE_Vector","ItemGPS"};
    items[] += {"ACE_Kestrel4500", "ACE_microDAGR"};
};
class sp : sn
{
    displayName = "Spotter";
    scope[] = {"rhsusf_acc_ACOG_d"};
    primaryWeapon[] = {"rhs_weap_m4a1_carryhandle_m203"};
    magazines[] =
    {
        LIST_7("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Red"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_4("1Rnd_Smoke_Grenade_shell"),
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve"};
    vest[] = {"UK3CB_BAF_V_Pilot_A"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    radios[] = {"ACRE_PRC117F"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_A Crew Helmet"};
    linkedItems[] += {"Binocular","ItemGPS"};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve"};
    vest[] = {"UK3CB_BAF_V_Pilot_A"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    headgear[] = {"UK3CB_BAF_H_CrewHelmet_A Crew Helmet"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : vd
{
    displayName = "Vehicle Gunner";
    backpackItems[] = {};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_RAF"};
    vest[] = {"UK3CB_BAF_V_Pilot_A"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    radios[] = {"ACRE_PRC117F"};
    headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A Helmet Mk"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
    items[] += {"ACE_DAGR"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"UK3CB_BAF_U_HeliPilotCoveralls_RAF"};
    vest[] = {"UK3CB_BAF_V_Pilot_A"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    headgear[] = {"UK3CB_BAF_H_PilotHelmetHeli_A Helmet Mk"};
    goggles[] = {"default"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
    magazines[] += {
        LIST_2("1Rnd_SmokeGreen_Grenade_shell")
    };
};
class pc : pcc
{
    displayName = "Helicopter Crew";
    backpackItems[] = {};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"rhs_uniform_cu_ocp"};
    vest[] = {"rhsusf_iotv_ocp"};
    backpack[] = {"rhsusf_assault_eagleaiii_ocp"};
    radios[] = {"ACRE_PRC117F"};
    headgear[] = {"RHS_jetpilot_usaf"};
    goggles[] = {"default"};
    sidearmWeapon[] = {"rhsusf_weap_m9"};
    magazines[] =
    {
        LIST_4("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    items[] =
    {
        LIST_3("ACE_fieldDressing"),
        "ACE_morphine"
    };
    linkedItems[] = {"ItemMap","ItemGPS","ItemCompass","ItemWatch"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    backpack[] = {"B_Carryall_khk"};
    vest[] = {"rhsusf_iotv_ocp_Repair"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        LIST_2("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
    items[] += {"ACE_M26_Clacker","ACE_DefusalKit"};
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    vest[] = {"rhsusf_iotv_ocp_Repair"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "ACE_M26_Clacker",
        "ACE_DefusalKit"
    };
    backpackItems[] = {
        "MineDetector",
        "ToolKit",
        "ATMine_Range_Mag"
    };
};
class UAV : car
{
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
    vest[] = {"rhsusf_iotv_ocp_Teamleader"};
    linkedItems[] += {"B_UavTerminal"};
};