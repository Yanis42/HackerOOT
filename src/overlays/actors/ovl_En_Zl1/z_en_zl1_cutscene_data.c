#include "z_en_zl1.h"
#include "z64cutscene_commands.h"

// clang-format off
CutsceneData D_80B4C5D0[] = {
    CS_HEADER(28, 3000),
    CS_PLAYER_CUE_LIST(3),
        CS_PLAYER_CUE(PLAYER_CUEID_5, 400, 1211, 0x0000, 0xC000, 0x0000, -422, 84, 1, -422, 84, 1, CS_FLOAT(0xF6484E4, 1.1266862e-29f), CS_FLOAT(0x0, 0.0f), CS_FLOAT(0x1, 1e-45f)),
        CS_PLAYER_CUE(PLAYER_CUEID_1, 1211, 1241, 0x0000, 0xC000, 0x0000, -422, 84, 1, -483, 84, 0, CS_FLOAT(0xF6484E4, 1.1266862e-29f), CS_FLOAT(0x0, 0.0f), CS_FLOAT(0x1, 1e-45f)),
        CS_PLAYER_CUE(PLAYER_CUEID_41, 1241, 1311, 0x0000, 0xC000, 0x0000, -483, 84, 0, -483, 84, 0, CS_FLOAT(0xF6484E4, 1.1266862e-29f), CS_FLOAT(0x0, 0.0f), CS_FLOAT(0x1, 1e-45f)),
    CS_ACTOR_CUE_LIST(18, 1),
        CS_ACTOR_CUE(0x0007, 1170, 1316, 0x7477, 0x0000, 0x0000, -485, 84, 0, -469, 85, -55, CS_FLOAT(0x3DE07038, 0.10958904f), CS_FLOAT(0x3BE07038, 0.006849315f), CS_FLOAT(0xBDE07038, -0.10958904f)),
    CS_UNK_DATA_LIST(0x00000049, 1),
        CS_UNK_DATA(0x00010000, 0x0BB80000, 0x00000000, 0x00000000, 0xFFFFFFE8, 0x00000003, 0x00000000, 0xFFFFFFE8, 0x00000003, 0x00000000, 0x00000000, 0x00000000),
    CS_ACTOR_CUE_LIST(16, 3),
        CS_ACTOR_CUE(0x0009, 1220, 1310, 0x8000, 0x0000, 0x0000, -890, 90, 150, -890, 90, 0, CS_FLOAT(0x0, 0.0f), CS_FLOAT(0x0, 0.0f), CS_FLOAT(0x0, 0.0f)),
        CS_ACTOR_CUE(0x000A, 1310, 1449, 0x0000, 0x0000, 0x0000, -890, 90, 0, -890, 90, 0, CS_FLOAT(0x0, 0.0f), CS_FLOAT(0x0, 0.0f), CS_FLOAT(0x0, 0.0f)),
        CS_ACTOR_CUE(0x0004, 1449, 1457, 0x0000, 0x0000, 0x0000, -890, 90, 0, -890, 90, 0, CS_FLOAT(0x0, 0.0f), CS_FLOAT(0x0, 0.0f), CS_FLOAT(0x0, 0.0f)),
    CS_MISC_LIST(1),
        CS_MISC(CS_MISC_STOP_CUTSCENE, 1460, 1461, 0x0000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0x00000000),
    CS_ACTOR_CUE_LIST(29, 1),
        CS_ACTOR_CUE(0x0002, 330, 763, 0x0000, 0x0000, 0x0000, -1250, 150, 0, -1250, 150, 0, CS_FLOAT(0x0, 0.0f), CS_FLOAT(0x0, 0.0f), CS_FLOAT(0x0, 0.0f)),
    CS_TRANSITION(CS_TRANS_GRAY_FILL_IN, 200, 231),
    CS_TRANSITION(CS_TRANS_GRAY_FILL_OUT, 230, 271),
    CS_TRANSITION(CS_TRANS_GRAY_FILL_IN, 860, 870),
    CS_TRANSITION(CS_TRANS_GRAY_FILL_OUT, 875, 900),
    CS_CAM_EYE_SPLINE(0, 331),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -447, 128, 1, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -447, 128, 1, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -447, 128, 1, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -447, 128, 1, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -392, 145, 1, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -318, 168, 1, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -222, 198, 1, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -146, 221, 1, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -132, 222, 1, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -66, 267, 1, 0x3632),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -66, 267, 1, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -66, 267, 1, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -66, 267, 1, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -66, 267, 1, 0x3533),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 0, CS_FLOAT(0x42733334, 60.800003f), -66, 267, 1, 0x3336),
    CS_CAM_EYE_SPLINE(230, 1631),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1220, 445, 24, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1220, 445, 24, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1220, 445, 24, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1220, 445, 24, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1220, 445, 24, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1220, 445, 24, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1220, 445, 24, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1220, 445, 24, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1220, 445, 24, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1220, 259, 24, 0x3632),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1220, 189, 24, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1135, 198, 81, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -1132, 119, 84, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1199, 137, 36, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x3336),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x332C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x3231),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x3232),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x2034),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x3331),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x3434),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x312C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x3136),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x3336),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x332C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x200A),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x3136),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 0, CS_FLOAT(0x42726667, 60.600002f), -1218, 127, 22, 0x3336),
    CS_CAM_EYE_SPLINE(810, 1041),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726668, 60.600006f), -1218, 127, 22, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726668, 60.600006f), -1218, 127, 22, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726668, 60.600006f), -1218, 127, 22, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726668, 60.600006f), -1218, 88, 21, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726668, 60.600006f), -1208, -52, 23, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726668, 60.600006f), -1201, -114, 26, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726668, 60.600006f), -1201, -114, 26, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726668, 60.600006f), -1201, -114, 26, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726668, 60.600006f), -1201, -114, 26, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42726668, 60.600006f), -1201, -114, 26, 0x3632),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 0, CS_FLOAT(0x42726668, 60.600006f), -1201, -114, 26, 0x3639),
    CS_CAM_EYE_SPLINE(870, 1261),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42A08C84, 80.274445f), -59, 160, 320, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -59, 160, 320, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -59, 160, 320, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -59, 160, 320, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -115, 148, 249, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -190, 126, 192, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -286, 105, 135, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -357, 108, 87, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -394, 104, 53, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -394, 104, 53, 0x3632),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -394, 104, 53, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -394, 104, 53, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -394, 104, 53, 0x2031),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 0, CS_FLOAT(0x42704C78, 60.074677f), -394, 104, 53, 0x3533),
    CS_CAM_EYE_SPLINE(1160, 1401),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -459, 175, 80, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -459, 175, 80, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -459, 175, 80, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -459, 175, 80, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -459, 175, 80, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -459, 175, 80, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -459, 175, 80, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -459, 175, 80, 0x392C),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 0, CS_FLOAT(0x42700000, 60.0f), -459, 175, 80, 0x2032),
    CS_CAM_EYE_SPLINE(1260, 1411),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x4234CCBE, 45.199944f), -461, 133, 0, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x4234CCBE, 45.199944f), -461, 133, 0, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x4234CCBE, 45.199944f), -461, 133, 0, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x4234CCBE, 45.199944f), -461, 133, 0, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x4234CCBE, 45.199944f), -461, 133, 0, 0x2032),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 0, CS_FLOAT(0x4234CCBE, 45.199944f), -461, 133, 0, 0x3533),
    CS_CAM_EYE_SPLINE(1320, 1531),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x412FFF56, 10.999838f), -488, 124, -6, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x412FFF56, 10.999838f), -488, 124, -6, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x412FFF56, 10.999838f), -488, 124, -6, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x412FFF56, 10.999838f), -488, 124, -6, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x412FFF56, 10.999838f), -488, 124, -6, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x412FFF56, 10.999838f), -488, 124, -6, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x412FFF56, 10.999838f), -488, 124, -6, 0x3639),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 0, CS_FLOAT(0x412FFF56, 10.999838f), -488, 124, -6, 0x392C),
    CS_CAM_AT_SPLINE(0, 360),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726667, 60.600002f), -506, 110, 1, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42733334, 60.800003f), -506, 110, 1, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42733334, 60.800003f), -506, 110, 1, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42733334, 60.800003f), -506, 110, 1, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 25, CS_FLOAT(0x42733334, 60.800003f), -451, 127, 1, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 25, CS_FLOAT(0x42733334, 60.800003f), -380, 149, 1, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 20, CS_FLOAT(0x42733334, 60.800003f), -291, 177, 1, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 20, CS_FLOAT(0x42733334, 60.800003f), -224, 210, 1, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 20, CS_FLOAT(0x42733334, 60.800003f), -213, 230, 1, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 20, CS_FLOAT(0x42733334, 60.800003f), -143, 291, 1, 0x3632),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 20, CS_FLOAT(0x42733334, 60.800003f), -135, 308, 1, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 20, CS_FLOAT(0x42733334, 60.800003f), -127, 319, 1, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 20, CS_FLOAT(0x42733334, 60.800003f), -120, 326, 1, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 20, CS_FLOAT(0x42733334, 60.800003f), -120, 326, 1, 0x3533),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 30, CS_FLOAT(0x42733334, 60.800003f), -120, 326, 1, 0x3336),
    CS_CAM_AT_SPLINE(230, 1710),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1246, 413, 5, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1246, 413, 5, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1246, 413, 5, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1246, 413, 5, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1246, 413, 5, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1246, 413, 5, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1246, 413, 5, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1246, 413, 5, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1246, 413, 5, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1245, 227, 5, 0x3632),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1245, 158, 5, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -1180, 178, 50, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 80, CS_FLOAT(0x42700000, 60.0f), -1178, 131, 51, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 80, CS_FLOAT(0x42726667, 60.600002f), -1240, 146, 6, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726667, 60.600002f), -1253, 153, -3, 0x3336),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726667, 60.600002f), -1253, 153, -3, 0x332C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726667, 60.600002f), -1253, 153, -3, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726667, 60.600002f), -1253, 153, -3, 0x3231),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726667, 60.600002f), -1253, 153, -3, 0x3232),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726667, 60.600002f), -1252, 152, -2, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726667, 60.600002f), -1252, 152, -2, 0x2034),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 80, CS_FLOAT(0x42726667, 60.600002f), -1252, 152, -2, 0x3331),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 80, CS_FLOAT(0x42726667, 60.600002f), -1252, 152, -2, 0x3434),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 80, CS_FLOAT(0x42726667, 60.600002f), -1252, 152, -2, 0x312C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 80, CS_FLOAT(0x42726667, 60.600002f), -1251, 151, -1, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 80, CS_FLOAT(0x42726667, 60.600002f), -1251, 151, -1, 0x3136),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 80, CS_FLOAT(0x42726667, 60.600002f), -1251, 151, -1, 0x3336),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 80, CS_FLOAT(0x42726667, 60.600002f), -1251, 151, -1, 0x332C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 80, CS_FLOAT(0x42726667, 60.600002f), -1251, 151, -1, 0x200A),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726667, 60.600002f), -1251, 151, -1, 0x3136),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 80, CS_FLOAT(0x42726667, 60.600002f), -1251, 151, -1, 0x3336),
    CS_CAM_AT_SPLINE(810, 1070),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726668, 60.600006f), -1251, 151, -1, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726668, 60.600006f), -1251, 151, -1, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 20, CS_FLOAT(0x42726668, 60.600006f), -1250, 150, 0, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 10, CS_FLOAT(0x42726668, 60.600006f), -1241, 125, 5, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 10, CS_FLOAT(0x42726668, 60.600006f), -1226, -13, 10, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 10, CS_FLOAT(0x42726668, 60.600006f), -1218, -73, 26, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726668, 60.600006f), -1218, -73, 26, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726668, 60.600006f), -1218, -73, 26, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726668, 60.600006f), -1218, -73, 26, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42726668, 60.600006f), -1218, -73, 26, 0x3632),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 30, CS_FLOAT(0x42726668, 60.600006f), -1218, -73, 26, 0x3639),
    CS_CAM_AT_SPLINE(870, 1290),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -45, 240, 241, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -45, 240, 241, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -56, 219, 224, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -85, 183, 212, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -204, 134, 183, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -280, 116, 125, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -376, 104, 69, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -440, 107, 13, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -467, 110, -25, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -467, 110, -25, 0x3632),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -467, 110, -25, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -467, 110, -25, 0x392C),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -467, 110, -25, 0x2031),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 30, CS_FLOAT(0x42704C78, 60.074677f), -467, 110, -25, 0x3533),
    CS_CAM_AT_SPLINE(1160, 1430),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -456, 138, 16, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -456, 138, 16, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -456, 138, 16, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -456, 138, 16, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -456, 138, 16, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -456, 138, 16, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -456, 138, 16, 0x3639),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -456, 138, 16, 0x392C),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 30, CS_FLOAT(0x42700000, 60.0f), -456, 138, 16, 0x2032),
    CS_CAM_AT_SPLINE(1260, 1440),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x4234CCBE, 45.199944f), -535, 133, 0, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x4234CCBE, 45.199944f), -535, 133, 0, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x4234CCBE, 45.199944f), -535, 133, 0, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x4234CCBE, 45.199944f), -535, 133, 0, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x4234CCBE, 45.199944f), -535, 133, 0, 0x2032),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 30, CS_FLOAT(0x4234CCBE, 45.199944f), -535, 133, 0, 0x3533),
    CS_CAM_AT_SPLINE(1320, 1560),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x412FFF56, 10.999838f), -1349, 124, -6, 0x2031),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x412FFF56, 10.999838f), -1349, 124, -6, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x412FFF56, 10.999838f), -1349, 124, -6, 0x3833),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x412FFF56, 10.999838f), -1349, 124, -6, 0x2C20),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x412FFF56, 10.999838f), -1349, 124, -6, 0x2032),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x412FFF56, 10.999838f), -1349, 124, -6, 0x3533),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x412FFF56, 10.999838f), -1349, 124, -6, 0x3639),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 30, CS_FLOAT(0x412FFF56, 10.999838f), -1349, 124, -6, 0x392C),
    CS_TEXT_LIST(10),
        CS_TEXT_NONE(0, 50),
        CS_TEXT(0x7035, 50, 190, 0x0000, 0xFFFF, 0xFFFF),
        CS_TEXT_NONE(190, 300),
        CS_TEXT(0x7036, 300, 800, 0x0000, 0xFFFF, 0xFFFF),
        CS_TEXT_NONE(800, 970),
        CS_TEXT(0x7037, 970, 1150, 0x0000, 0xFFFF, 0x7038),
        CS_TEXT_NONE(1150, 1190),
        CS_TEXT(0x7005, 1190, 1200, 0x0000, 0xFFFF, 0x700B),
        CS_TEXT_NONE(1200, 1340),
        CS_TEXT(0x7009, 1340, 1420, 0x0000, 0xFFFF, 0xFFFF),
    CS_START_SEQ_LIST(1),
        CS_START_SEQ(NA_BGM_HYRULE_CS, 230, 231, 0x0000, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000003, 0x00000000, 0x00000000),
    CS_START_SEQ_LIST(1),
        CS_START_SEQ(NA_BGM_ZELDA_THEME, 870, 871, 0x0000, 0x00000000, 0xFFFFFFFE, 0x00000000, 0xFFFFFFFD, 0xFFFFFFFE, 0x00000000, 0xFFFFFFFD),
    CS_STOP_SEQ_LIST(1),
        CS_STOP_SEQ(NA_BGM_GENERAL_SFX, 110, 111, 0x0000, 0x00000000, 0xFFFFFFFE, 0x00000000, 0x00000001, 0xFFFFFFFE, 0x00000000, 0x00000001),
    CS_END_OF_SCRIPT(),
};
// clang-format on
