#include "nds/ndstypes.h"
#include "common.h"

static inline u32 uncacheAddr(u32 address)
{
	return (address & 0x3FFFFF) + 0x2400000;
}

void loadFile(void * offset, const char * path)
{
	FSFile file;
	FS_InitFile(&file);
	if (FS_OpenFile(&file, path))
	{
		s32 len = FS_GetLength(&file);
		FS_ReadFile(&file, offset, len);
	}
	FS_CloseFile(&file);
}

void initArm7Payload()
{
	void* arm7PayloadOffset = (void*)uncacheAddr(heapTop);
	loadFile(arm7PayloadOffset, arm7BinPath);
	*(u32*)PxiRtcCallback7 = 0x46C04778;// bx pc; nop;
	*(u32*)(PxiRtcCallback7 + 4) = MAKE_BRANCH((void*)uncacheAddr(PxiRtcCallback7 + 4), arm7PayloadOffset);
	PXI_SendWordByFifo(5, 0xFF << 8, 0);
	while(!PXI_IsCallbackReady(1, 1));
	while(!PXI_IsCallbackReady(2, 1));
}