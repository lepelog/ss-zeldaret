#ifndef RVL_SDK_GX_DRAW_H
#define RVL_SDK_GX_DRAW_H
#include "rvl/types.h"
#ifdef __cplusplus
extern "C" {
#endif

void GXDrawCylinder(u8 sides);
void GXDrawSphere(u32 stacks, u32 sectors);
/* 803bcdb0 */ void GXDrawDone(); 
#ifdef __cplusplus
}
#endif
#endif