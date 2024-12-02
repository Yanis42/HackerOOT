#include "z_demo_kankyo.h"
#include "z64cutscene_commands.h"

// clang-format off
CutsceneData gChildWarpInCS[] = {
    CS_HEADER(2, 1164),
    CS_CAM_EYE_SPLINE_REL_TO_PLAYER(0, 1135),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42714CA7, 60.324856f), 31, 68, 59, 0x010F),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42714CA7, 60.324856f), 32, 68, 60, 0x0120),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42714CA7, 60.324856f), 31, 69, 59, 0x0131),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42714CA7, 60.324856f), 31, 64, 59, 0x01F4),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42714CA7, 60.324856f), 31, 64, 59, 0x01F6),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42714CA7, 60.324856f), 31, 64, 59, 0x0207),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 0, CS_FLOAT(0x42714CA7, 60.324856f), 31, 64, 59, 0xB46C),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 0, CS_FLOAT(0x42714CA7, 60.324856f), 31, 64, 59, 0x05BC),
    CS_CAM_AT_SPLINE_REL_TO_PLAYER(0, 1164),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42714CA7, 60.324856f), 12, 40, 22, 0x010F),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42714CA7, 60.324856f), 11, 38, 22, 0x0120),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 7, CS_FLOAT(0x42714CA7, 60.324856f), 11, 39, 22, 0x0131),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 7, CS_FLOAT(0x42714CA7, 60.324856f), 57, 86, 21, 0x01F4),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42714CA7, 60.324856f), 57, 86, 21, 0x01F6),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 1000, CS_FLOAT(0x42714CA7, 60.324856f), 57, 86, 21, 0x0207),
        CS_CAM_POINT(CS_CAM_CONTINUE, 0x00, 30, CS_FLOAT(0x42714CA7, 60.324856f), 57, 86, 21, 0xB46C),
        CS_CAM_POINT(CS_CAM_STOP, 0x00, 30, CS_FLOAT(0x42714CA7, 60.324856f), 57, 86, 21, 0x05BC),
    CS_END_OF_SCRIPT(),
};
// clang-format on
