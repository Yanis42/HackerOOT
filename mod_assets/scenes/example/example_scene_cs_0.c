#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "example_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

CutsceneData gZcameditTestCS[] = {
    CS_BEGIN_CUTSCENE(23, 308),
        CS_DESTINATION(CS_DEST_KOKIRI_FOREST_FARORE, 99, 0),
        CS_MISC_LIST(3),
            CS_MISC(CS_MISC_RED_PULSATING_LIGHTS, 12, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
            CS_MISC(CS_MISC_VISMONO_BLACK_AND_WHITE, 80, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
            CS_MISC(CS_MISC_VISMONO_SEPIA, 125, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
        CS_TRANSITION(CS_TRANS_GRAY_FILL_IN, 205, 245),
        CS_TEXT_LIST(2),
            CS_TEXT(0x1234, 0, 0, CS_TEXT_CHOICE, 0x0001, 0x0002),
            CS_TEXT_NONE(2, 3),
        CS_TEXT_LIST(1),
            CS_TEXT_OCARINA_ACTION(OCARINA_ACTION_TEACH_BOLERO, 5, 6, 0x5678),
        CS_LIGHT_SETTING_LIST(1),
            CS_LIGHT_SETTING(9, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
        CS_TIME_LIST(1),
            CS_TIME(0, 45, 0, 14, 0),
        CS_STOP_SEQ_LIST(2),
            CS_STOP_SEQ(NA_BGM_GENERAL_SFX, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0),
            CS_STOP_SEQ(NA_BGM_SHEIK, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0),
        CS_FADE_OUT_SEQ_LIST(3),
            CS_FADE_OUT_SEQ(CS_FADE_OUT_BGM_MAIN, 120, 121, 0, 0, 0, 0, 0, 0, 0, 0),
            CS_FADE_OUT_SEQ(CS_FADE_OUT_FANFARE, 374, 618, 0, 0, 0, 0, 0, 0, 0, 0),
            CS_FADE_OUT_SEQ(CS_FADE_OUT_FANFARE, 551, 531, 0, 0, 0, 0, 0, 0, 0, 0),
        CS_RUMBLE_CONTROLLER_LIST(1),
            CS_RUMBLE_CONTROLLER(0, 381, 0, 117, 212, 235, 0, 0),
        CS_START_SEQ_LIST(1),
            CS_START_SEQ(NA_BGM_GENERAL_SFX, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0),
        CS_ACTOR_CUE_LIST(CS_CMD_ACTOR_CUE_0_0, 3),
            CS_ACTOR_CUE(0x0000, 60, 80, DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), -266, 0, 53, -230, 0, 53, 0.0f, 0.0f, 0.0f),
            CS_ACTOR_CUE(0x0000, 80, 100, DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), -230, 0, 53, -192, 0, 53, 0.0f, 0.0f, 0.0f),
            CS_ACTOR_CUE(0x0000, 100, 120, DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), -192, 0, 53, -157, 0, 53, 0.0f, 0.0f, 0.0f),
        CS_PLAYER_CUE_LIST(3),
            CS_PLAYER_CUE(PLAYER_CUEID_NONE, 60, 80, DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), 0, 0, -80, 0, 0, -50, 0.0f, 0.0f, 0.0f),
            CS_PLAYER_CUE(PLAYER_CUEID_NONE, 80, 100, DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), 0, 0, -50, 0, 0, -23, 0.0f, 0.0f, 0.0f),
            CS_PLAYER_CUE(PLAYER_CUEID_NONE, 100, 120, DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), 0, 0, -23, 0, 0, 13, 0.0f, 0.0f, 0.0f),
        CS_CAM_EYE_SPLINE(0, 122),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 80.0f, 0, 12, 382, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 80.0f, 0, 12, 382, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 80.0f, 0, 12, 382, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 80.0f, 0, 12, 382, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 438, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 438, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 438, 0),
            CS_CAM_POINT(CS_CAM_STOP, 0, 0, 0.0f, 0, 0, 0, 0),
        CS_CAM_AT_SPLINE(0, 131),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 1, 80.0f, 0, 68, 382, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 10, 80.0f, 0, 68, 382, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 20, 80.0f, 0, 52, 342, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 20, 80.0f, 0, 12, 326, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 50, 60.0f, 0, 12, 382, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 10, 60.0f, 0, 12, 382, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 10, 60.0f, 0, 12, 382, 0),
            CS_CAM_POINT(CS_CAM_STOP, 0, 0, 0.0f, 0, 0, 0, 0),
        CS_CAM_EYE_SPLINE(75, 126),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, -292, 166, 435, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, -292, 166, 435, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, -292, 166, 435, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, -292, 166, 435, 0),
            CS_CAM_POINT(CS_CAM_STOP, 0, 0, 0.0f, 0, 0, 0, 0),
        CS_CAM_AT_SPLINE(75, 135),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 10, 60.0f, -253, 136, 395, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, -253, 136, 395, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, -253, 136, 395, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 10, 60.0f, -253, 136, 395, 0),
            CS_CAM_POINT(CS_CAM_STOP, 0, 0, 0.0f, 0, 0, 0, 0),
        CS_CAM_EYE_SPLINE(95, 206),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 438, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 438, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 494, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 494, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 494, 0),
            CS_CAM_POINT(CS_CAM_STOP, 0, 0, 0.0f, 0, 0, 0, 0),
        CS_CAM_AT_SPLINE(95, 220),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, 0, 12, 382, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, 0, 12, 382, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 50, 60.0f, 0, 12, 438, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, 0, 12, 438, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, 0, 12, 438, 0),
            CS_CAM_POINT(CS_CAM_STOP, 0, 0, 0.0f, 0, 0, 0, 0),
        CS_CAM_EYE_SPLINE(135, 186),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, -295, 136, -115, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, -295, 136, -115, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, -295, 136, -115, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, -295, 136, -115, 0),
            CS_CAM_POINT(CS_CAM_STOP, 0, 0, 0.0f, 0, 0, 0, 0),
        CS_CAM_AT_SPLINE(135, 195),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 10, 60.0f, -255, 117, -75, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, -255, 117, -75, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, -255, 117, -75, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 10, 60.0f, -255, 117, -75, 0),
            CS_CAM_POINT(CS_CAM_STOP, 0, 0, 0.0f, 0, 0, 0, 0),
        CS_CAM_EYE_SPLINE(155, 307),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 494, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 494, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 550, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 550, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 550, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 550, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 550, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 550, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 0, 60.0f, 0, 12, 550, 0),
            CS_CAM_POINT(CS_CAM_STOP, 0, 0, 0.0f, 0, 0, 0, 0),
        CS_CAM_AT_SPLINE(155, 336),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 1, 60.0f, 0, 12, 438, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, 0, 12, 438, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, 0, 12, 494, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, 0, 12, 494, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, 0, 12, 494, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, 0, 31, 497, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 15, 60.0f, 0, 41, 502, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 30, 60.0f, 0, 42, 502, 0),
            CS_CAM_POINT(CS_CAM_CONTINUE, 0, 30, 60.0f, 0, 41, 502, 0),
            CS_CAM_POINT(CS_CAM_STOP, 0, 0, 0.0f, 0, 0, 0, 0),
    CS_END(),
};

