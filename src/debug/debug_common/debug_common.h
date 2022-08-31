#ifndef DEBUG_COMMON_H
#define DEBUG_COMMON_H

#include "ultra64/types.h"
#include "ultra64/printf.h"
#include "ultra64/gbi.h"
#include "padmgr.h"
#include "config.h"
#include "color.h"

// ----------------------------------------------

struct PlayState;

typedef struct {
    /* 0x00 */ PrintCallback callback;
    /* 0x04 */ Gfx* dList;
    /* 0x08 */ u16 posX;
    /* 0x0A */ u16 posY;
    /* 0x0C */ u16 baseX;
    /* 0x0E */ u8 baseY;
    /* 0x0F */ u8 flags;
    /* 0x10 */ Color_RGBA8_u32 color;
    /* 0x14 */ char unk_14[0x1C]; // unused
} GfxPrint; // size = 0x30

// ----------------------------------------------

s32 PrintUtils_VPrintf(PrintCallback* pfn, const char* fmt, va_list args);
s32 PrintUtils_Printf(PrintCallback* pfn, const char* fmt, ...);

void GfxPrint_SetColor(GfxPrint* this, u32 r, u32 g, u32 b, u32 a);
void GfxPrint_SetPosPx(GfxPrint* this, s32 x, s32 y);
void GfxPrint_SetPos(GfxPrint* this, s32 x, s32 y);
void GfxPrint_SetBasePosPx(GfxPrint* this, s32 x, s32 y);
void GfxPrint_Init(GfxPrint* this);
void GfxPrint_Destroy(GfxPrint* this);
void GfxPrint_Open(GfxPrint* this, Gfx* dList);
Gfx* GfxPrint_Close(GfxPrint* this);
s32 GfxPrint_Printf(GfxPrint* this, const char* fmt, ...);

#endif
