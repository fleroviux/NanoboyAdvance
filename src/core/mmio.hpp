/*
 * Copyright (C) 2018 Frederic Meyer. All rights reserved.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#pragma once

#define DISPCNT (0x04000000)
#define DISPSTAT (0x04000004)
#define VCOUNT (0x04000006)
#define BG0CNT (0x04000008)
#define BG1CNT (0x0400000A)
#define BG2CNT (0x0400000C)
#define BG3CNT (0x0400000E)
#define BG0HOFS (0x04000010)
#define BG0VOFS (0x04000012)
#define BG1HOFS (0x04000014)
#define BG1VOFS (0x04000016)
#define BG2HOFS (0x04000018)
#define BG2VOFS (0x0400001A)
#define BG3HOFS (0x0400001C)
#define BG3VOFS (0x0400001E)
#define BG2PA (0x04000020)
#define BG2PB (0x04000022)
#define BG2PC (0x04000024)
#define BG2PD (0x04000026)
#define BG2X (0x04000028)
#define BG2Y (0x0400002C)
#define BG3PA (0x04000030)
#define BG3PB (0x04000032)
#define BG3PC (0x04000034)
#define BG3PD (0x04000036)
#define BG3X (0x04000038)
#define BG3Y (0x0400003C)
#define WIN0H (0x04000040)
#define WIN1H (0x04000042)
#define WIN0V (0x04000044)
#define WIN1V (0x04000046)
#define WININ (0x04000048)
#define WINOUT (0x0400004A)
#define MOSAIC (0x0400004C)
#define BLDCNT (0x04000050)
#define BLDALPHA (0x04000052)
#define BLDY (0x04000054)
#define SOUND1CNT_L (0x04000060)
#define SOUND1CNT_H (0x04000062)
#define SOUND1CNT_X (0x04000064)
#define SOUND2CNT_L (0x04000068)
#define SOUND2CNT_H (0x0400006C)
#define SOUND3CNT_L (0x04000070)
#define SOUND3CNT_H (0x04000072)
#define SOUND3CNT_X (0x04000074)
#define SOUND4CNT_L (0x04000078)
#define SOUND4CNT_H (0x0400007C)
#define SOUNDCNT_L (0x04000080)
#define SOUNDCNT_H (0x04000082)
#define SOUNDCNT_X (0x04000084)
#define SOUNDBIAS (0x04000088)
#define WAVE_RAM (0x04000090)
#define FIFO_A (0x040000A0)
#define FIFO_B (0x040000A4)
#define DMA0SAD (0x040000B0)
#define DMA0DAD (0x040000B4)
#define DMA0CNT_L (0x040000B8)
#define DMA0CNT_H (0x040000BA)
#define DMA1SAD (0x040000BC)
#define DMA1DAD (0x040000C0)
#define DMA1CNT_L (0x040000C4)
#define DMA1CNT_H (0x040000C6)
#define DMA2SAD (0x040000C8)
#define DMA2DAD (0x040000CC)
#define DMA2CNT_L (0x040000D0)
#define DMA2CNT_H (0x040000D2)
#define DMA3SAD (0x040000D4)
#define DMA3DAD (0x040000D8)
#define DMA3CNT_L (0x040000DC)
#define DMA3CNT_H (0x040000DE)
#define TM0CNT_L (0x04000100)
#define TM0CNT_H (0x04000102)
#define TM1CNT_L (0x04000104)
#define TM1CNT_H (0x04000106)
#define TM2CNT_L (0x04000108)
#define TM2CNT_H (0x0400010A)
#define TM3CNT_L (0x0400010C)
#define TM3CNT_H (0x0400010E)
#define KEYINPUT (0x04000130)
#define IE (0x04000200)
#define IF (0x04000202)
#define WAITCNT (0x04000204)
#define IME (0x04000208)
#define HALTCNT (0x04000301)
