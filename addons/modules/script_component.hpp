#define COMPONENT modules
#define COMPONENT_BEAUTIFIED Modules
#include "\x\zen\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_MODULES
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_MODULES
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MODULES
#endif

#include "\x\zen\addons\main\script_macros.hpp"

#include "\a3\ui_f\hpp\defineCommonGrids.inc"
#include "\a3\ui_f_curator\ui\defineResinclDesign.inc"

#define IDC_ATTRIBUTERADIUS 60000
#define IDC_ATTRIBUTERADIUS_VALUE 60001

#define IDC_HIDEZEUS 60100
#define IDC_HIDEZEUS_VALUE 60101

#define IDC_SIDERELATIONS 60200
#define IDC_SIDERELATIONS_TOGGLE 60201
#define IDC_SIDERELATIONS_SIDE_1 60202
#define IDC_SIDERELATIONS_SIDE_2 60203
#define IDC_SIDERELATIONS_RADIO 60204

#define IDC_TELEPORTPLAYERS 60300
#define IDC_TELEPORTPLAYERS_BUTTON_SIDES 60301
#define IDC_TELEPORTPLAYERS_BUTTON_GROUPS 60302
#define IDC_TELEPORTPLAYERS_BUTTON_PLAYERS 60303
#define IDC_TELEPORTPLAYERS_TAB_SIDES 60311
#define IDC_TELEPORTPLAYERS_TAB_GROUPS 60312
#define IDC_TELEPORTPLAYERS_TAB_PLAYERS 60313
#define IDC_TELEPORTPLAYERS_BLUFOR 60321
#define IDC_TELEPORTPLAYERS_OPFOR 60320
#define IDC_TELEPORTPLAYERS_INDEPENDENT 60322
#define IDC_TELEPORTPLAYERS_CIVILIAN 60323
#define IDC_TELEPORTPLAYERS_GROUPS 60330
#define IDC_TELEPORTPLAYERS_GROUPS_SEARCH 60331
#define IDC_TELEPORTPLAYERS_GROUPS_BUTTON 60332
#define IDC_TELEPORTPLAYERS_PLAYERS 60340
#define IDC_TELEPORTPLAYERS_PLAYERS_SEARCH 60341
#define IDC_TELEPORTPLAYERS_PLAYERS_BUTTON 60342

#define ICON_CHECKED "\a3\ui_f\data\gui\rsccommon\rsccheckbox\checkbox_checked_ca.paa"
#define ICON_UNCHECKED "\a3\ui_f\data\gui\rsccommon\rsccheckbox\checkbox_unchecked_ca.paa"

#define ICON_HOSTILE "\a3\ui_f\data\igui\cfg\simpletasks\types\attack_ca.paa"
#define ICON_FRIENDLY "\a3\ui_f\data\igui\cfg\simpletasks\types\help_ca.paa"

#define ICON_BLUFOR QPATHTOEF(common,UI\icon_blufor_ca.paa)
#define ICON_OPFOR QPATHTOEF(common,UI\icon_opfor_ca.paa)
#define ICON_INDEPENDENT QPATHTOEF(common,UI\icon_independent_ca.paa)
#define ICON_CIVILIAN QPATHTOEF(common,UI\icon_civilian_ca.paa)

#define GET_SIDE_ICON(UNIT) ([ARR_4(ICON_OPFOR, ICON_BLUFOR, ICON_INDEPENDENT, ICON_CIVILIAN)] select ([side UNIT] call BIS_fnc_sideID))
