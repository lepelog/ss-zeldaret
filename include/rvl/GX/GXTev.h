#ifndef RVL_SDK_GX_TEV_H
#define RVL_SDK_GX_TEV_H
#include "rvl/GX/GXTypes.h"
#include <common.h>
#ifdef __cplusplus
extern "C" {
#endif

void GXSetTevOp(GXTevStageID, UNKWORD);
void GXSetTevColorIn(GXTevStageID, GXTevColorArg, GXTevColorArg, GXTevColorArg, GXTevColorArg);
void GXSetTevAlphaIn(GXTevStageID, GXTevAlphaArg, GXTevAlphaArg, GXTevAlphaArg, GXTevAlphaArg);
void GXSetTevColorOp(GXTevStageID, GXTevOp, GXTevBias, GXTevScale, u8, GXTevRegID);
void GXSetTevAlphaOp(GXTevStageID, GXTevOp, GXTevBias, GXTevScale, u8, GXTevRegID);

void GXSetTevColor(GXTevRegID, GXColor);
void GXSetTevColorS10(GXTevRegID, GXColorS10);
void GXSetTevKColor(GXTevKColorID, GXColor);
void GXSetTevKColorSel(GXTevStageID, GXTevKColorSel);
void GXSetTevKAlphaSel(GXTevStageID, GXTevKAlphaSel);
void GXSetTevSwapMode(GXTevStageID, GXTevSwapSel, GXTevSwapSel);
void GXSetTevSwapModeTable(GXTevSwapSel, GXTevColorChan, GXTevColorChan, GXTevColorChan, GXTevColorChan);

void GXSetAlphaCompare(GXCompare, u8, GXAlphaOp, GXCompare, u8);
void GXSetZTexture(UNKWORD, GXTexFmt, u32);
void GXSetTevOrder(GXTevStageID, GXTexCoordID, GXTexMapID, GXChannelID);
void GXSetNumTevStages(u8);

#ifdef __cplusplus
}
#endif
#endif
