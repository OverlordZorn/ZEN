class RscText;
class RscEdit;
class RscButton;
class RscListBox;
class ctrlToolbox;
class RscActivePicture;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;

class RscDisplayAttributes {
    class Controls {
        class Background;
        class Title;
        class Content: RscControlsGroup {
            class controls;
        };
        class ButtonOK;
        class ButtonCancel;
    };
};

class GVAR(RscLabel): RscText {
    idc = -1;
    x = 0;
    y = 0;
    w = 10 * GUI_GRID_W;
    h = GUI_GRID_H;
    colorBackground[] = {0, 0, 0, 0.5};
};

class GVAR(RscToolboxYesNo): ctrlToolbox {
    idc = -1;
    x = 10.1 * GUI_GRID_W;
    y = 0;
    w = 15.9 * GUI_GRID_W;
    h = GUI_GRID_H;
    rows = 1;
    columns = 2;
    strings[] = {ECSTRING(common,No), ECSTRING(common,Yes)};
};

class GVAR(RscHideZeus): RscDisplayAttributes {
    onLoad = QUOTE([ARR_3('onLoad', _this, QQGVAR(RscHideZeus))] call EFUNC(common,zeusAttributes));
    onUnload = QUOTE([ARR_3('onUnload', _this, QQGVAR(RscHideZeus))] call EFUNC(common,zeusAttributes));
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls {
                class hideZeus: RscControlsGroupNoScrollbars {
                    onSetFocus = QUOTE(_this call FUNC(ui_hideZeus));
                    x = 0;
                    y = 0;
                    w = 26 * GUI_GRID_W;
                    h = GUI_GRID_H;
                    class controls {
                        class Label: GVAR(RscLabel) {
                            text = CSTRING(ModuleHideZeus);
                        };
                        class Value: GVAR(RscToolboxYesNo) {
                            idc = IDC_HIDEZEUS_VALUE;
                        };
                    };
                };
            };
        };
        class ButtonOK: ButtonOK {};
        class ButtonCancel: ButtonCancel {};
    };
};

class GVAR(RscTeleportPlayers): RscDisplayAttributes {
    onLoad = QUOTE([ARR_3('onLoad', _this, QQGVAR(RscTeleportPlayers))] call EFUNC(common,zeusAttributes));
    onUnload = QUOTE([ARR_3('onUnload', _this, QQGVAR(RscTeleportPlayers))] call EFUNC(common,zeusAttributes));
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls {
                class teleportPlayers: RscControlsGroupNoScrollbars {
                    onSetFocus = QUOTE(_this call FUNC(ui_teleportPlayers));
                    x = 0;
                    y = 0;
                    w = 26 * GUI_GRID_W;
                    h = 8.2 * GUI_GRID_H;
                    class controls {
                        class Background: RscText {
                            x = 0;
                            y = GUI_GRID_H;
                            w = 26 * GUI_GRID_W;
                            h = 7.2 * GUI_GRID_H;
                            colorBackground[] = {1, 1, 1, 0.1};
                        };
                        class ButtonSides: RscButton {
                            idc = IDC_TELEPORTPLAYERS_BUTTON_SIDES;
                            text = CSTRING(Sides);
                            font = "RobotoCondensedLight";
                            x = 0;
                            y = 0;
                            w = 26/3 * GUI_GRID_W;
                            h = GUI_GRID_H;
                            colorBackground[] = {0, 0, 0, 0.5};
                            colorBackgroundActive[] = {1, 1, 1, 0.15};
                            colorBackgroundDisabled[] = {1, 1, 1, 0.1};
                            colorDisabled[] = {1, 1, 1, 1};
                            colorFocused[] = {1, 1, 1, 0.1};
                            period = 0;
                            periodOver = 0;
                            periodFocus = 0;
                            shadow = 0;
                        };
                        class ButtonGroups: ButtonSides {
                            idc = IDC_TELEPORTPLAYERS_BUTTON_GROUPS;
                            text = CSTRING(Groups);
                            x = 26/3 * GUI_GRID_W;
                        };
                        class ButtonPlayers: ButtonSides {
                            idc = IDC_TELEPORTPLAYERS_BUTTON_PLAYERS;
                            text = CSTRING(Players);
                            x = 52/3 * GUI_GRID_W;
                        };
                        class TabSides: RscControlsGroupNoScrollbars {
                            idc = IDC_TELEPORTPLAYERS_TAB_SIDES;
                            x = 0;
                            y = GUI_GRID_H;
                            w = 26 * GUI_GRID_W;
                            h = 7.2 * GUI_GRID_H;
                            class controls {
                                class BLUFOR: RscActivePicture {
                                    idc = IDC_TELEPORTPLAYERS_BLUFOR;
                                    text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_west_ca.paa";
                                    x = 4.25 * GUI_GRID_W;
                                    y = 2.35 * GUI_GRID_H;
                                    w = 2.5 * GUI_GRID_W;
                                    h = 2.5 * GUI_GRID_H;
                                };
                                class OPFOR: BLUFOR {
                                    idc = IDC_TELEPORTPLAYERS_OPFOR;
                                    text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_east_ca.paa";
                                    x = 9.25 * GUI_GRID_W;
                                };
                                class Independent: BLUFOR {
                                    idc = IDC_TELEPORTPLAYERS_INDEPENDENT;
                                    text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_guer_ca.paa";
                                    x = 14.25 * GUI_GRID_W;
                                };
                                class Civilian: BLUFOR {
                                    idc = IDC_TELEPORTPLAYERS_CIVILIAN;
                                    text = "\a3\Ui_F_Curator\Data\Displays\RscDisplayCurator\side_civ_ca.paa";
                                    x = 19.25 * GUI_GRID_W;
                                };
                            };
                        };
                        class TabGroups: RscControlsGroupNoScrollbars {
                            idc = IDC_TELEPORTPLAYERS_TAB_GROUPS;
                            x = 0;
                            y = GUI_GRID_H;
                            w = 26 * GUI_GRID_W;
                            h = 7.2 * GUI_GRID_H;
                            class controls {
                                class Groups: RscListBox {
                                    idc = IDC_TELEPORTPLAYERS_GROUPS;
                                    x = 0.5 * GUI_GRID_W;
                                    y = 0.5 * GUI_GRID_H;
                                    w = 25 * GUI_GRID_W;
                                    h = 5 * GUI_GRID_H;
                                    colorSelect[] = {1, 1, 1, 1};
                                    colorSelect2[] = {1, 1, 1, 1};
                                    colorBackground[] = {0, 0, 0, 0.5};
                                    colorSelectBackground[] = {0, 0, 0, 0};
                                    colorSelectBackground2[] = {0, 0, 0, 0};
                                };
                                class Search: RscEdit {
                                    idc = IDC_TELEPORTPLAYERS_GROUPS_SEARCH;
                                    x = 1.6 * GUI_GRID_W;
                                    y = 5.7 * GUI_GRID_H;
                                    w = 23.9 * GUI_GRID_W;
                                    h = GUI_GRID_H;
                                };
                                class SearchButton: RscButton {
                                    idc = IDC_TELEPORTPLAYERS_GROUPS_BUTTON;
                                    style = ST_CENTER + ST_PICTURE + ST_KEEP_ASPECT_RATIO;
                                    text = "\a3\Ui_f\data\GUI\RscCommon\RscButtonSearch\search_start_ca.paa";
                                    x = 0.5 * GUI_GRID_W;
                                    y = 5.65 * GUI_GRID_H;
                                    w = GUI_GRID_W;
                                    h = GUI_GRID_H;
                                    colorBackground[] = {0, 0, 0, 0.5};
                                    colorFocused[] = {0, 0, 0, 0.5};
                                };
                            };
                        };
                        class TabPlayers: RscControlsGroupNoScrollbars {
                            idc = IDC_TELEPORTPLAYERS_TAB_PLAYERS;
                            x = 0;
                            y = GUI_GRID_H;
                            w = 26 * GUI_GRID_W;
                            h = 7.2 * GUI_GRID_H;
                            class controls {
                                class Players: RscListBox {
                                    idc = IDC_TELEPORTPLAYERS_PLAYERS;
                                    x = 0.5 * GUI_GRID_W;
                                    y = 0.5 * GUI_GRID_H;
                                    w = 25 * GUI_GRID_W;
                                    h = 5 * GUI_GRID_H;
                                    colorSelect[] = {1, 1, 1, 1};
                                    colorSelect2[] = {1, 1, 1, 1};
                                    colorBackground[] = {0, 0, 0, 0.5};
                                    colorSelectBackground[] = {0, 0, 0, 0};
                                    colorSelectBackground2[] = {0, 0, 0, 0};
                                };
                                class Search: RscEdit {
                                    idc = IDC_TELEPORTPLAYERS_PLAYERS_SEARCH;
                                    x = 1.6 * GUI_GRID_W;
                                    y = 5.7 * GUI_GRID_H;
                                    w = 23.9 * GUI_GRID_W;
                                    h = GUI_GRID_H;
                                };
                                class SearchButton: RscButton {
                                    idc = IDC_TELEPORTPLAYERS_PLAYERS_BUTTON;
                                    style = ST_CENTER + ST_PICTURE + ST_KEEP_ASPECT_RATIO;
                                    text = "\a3\Ui_f\data\GUI\RscCommon\RscButtonSearch\search_start_ca.paa";
                                    x = 0.5 * GUI_GRID_W;
                                    y = 5.65 * GUI_GRID_H;
                                    w = GUI_GRID_W;
                                    h = GUI_GRID_H;
                                    colorBackground[] = {0, 0, 0, 0.5};
                                    colorFocused[] = {0, 0, 0, 0.5};
                                };
                            };
                        };
                    };
                };
            };
        };
        class ButtonOK: ButtonOK {};
        class ButtonCancel: ButtonCancel {};
    };
};
