// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

#include "mtk_cpufreq_config.h"
#include "mtk_cpufreq_platform.h"

#define NR_FREQ		16
#define ARRAY_COL_SIZE	4

static unsigned int FY_6873Tbl[NR_FREQ * NR_MT_CPU_DVFS][ARRAY_COL_SIZE] = {
	/* Freq, Vproc, post_div, clk_div */
	/* LL */
	{ 2000, 148, 1, 1 },
	{ 1875, 142, 1, 1 },
	{ 1812, 139, 1, 1 },
	{ 1750, 137, 1, 1 },
	{ 1687, 134, 1, 1 },
	{ 1625, 131, 1, 1 },
	{ 1541, 128, 2, 1 },
	{ 1500, 125, 2, 1 },
	{ 1358, 120, 2, 1 },
	{ 1181, 114, 2, 1 },
	{ 1075, 111, 2, 1 },
	{ 968, 107, 2, 1 },
	{ 862, 103, 2, 1 },
	{ 756, 100, 2, 1 },
	{ 650, 96, 4, 1 },
	{ 500, 96, 4, 1 },



	/* L */
	{ 2000, 148, 1, 1 },
	{ 1950, 145, 1, 1 },
	{ 1900, 142, 1, 1 },
	{ 1850, 139, 1, 1 },
	{ 1800, 136, 1, 1 },
	{ 1716, 133, 1, 1 },
	{ 1633, 129, 1, 1 },
	{ 1548, 128, 2, 1 },
	{ 1383, 120, 2, 1 },
	{ 1258, 115, 2, 1 },
	{ 1175, 112, 2, 1 },
	{ 1091, 108, 2, 1 },
	{ 1008, 105, 2, 1 },
	{ 925, 102, 2, 1 },
	{ 841, 99, 2, 1 },
	{ 774, 96, 2, 1 },



	/* CCI */
	{ 1340, 148, 2, 1 },
	{ 1308, 142, 2, 1 },
	{ 1265, 134, 2, 1 },
	{ 1258, 128, 2, 1 },
	{ 1190, 120, 2, 1 },
	{ 1103, 117, 2, 1 },
	{ 1017, 114, 2, 1 },
	{ 960, 112, 2, 1 },
	{ 902, 110, 2, 1 },
	{ 873, 109, 2, 1 },
	{ 816, 107, 2, 1 },
	{ 730, 104, 4, 1 },
	{ 672, 102, 4, 1 },
	{ 615, 100, 4, 1 },
	{ 557, 98, 4, 1 },
	{ 500, 96, 4, 1 },

};

static unsigned int TB_6873Tbl[NR_FREQ * NR_MT_CPU_DVFS][ARRAY_COL_SIZE] = {
	/* Freq, Vproc, post_div, clk_div */
	/* LL */
	{ 2000, 148, 1, 1 },
	{ 1875, 142, 1, 1 },
	{ 1812, 139, 1, 1 },
	{ 1750, 137, 1, 1 },
	{ 1687, 134, 1, 1 },
	{ 1625, 131, 1, 1 },
	{ 1541, 128, 2, 1 },
	{ 1500, 125, 2, 1 },
	{ 1358, 120, 2, 1 },
	{ 1181, 114, 2, 1 },
	{ 1075, 111, 2, 1 },
	{ 968, 107, 2, 1 },
	{ 862, 103, 2, 1 },
	{ 756, 100, 2, 1 },
	{ 650, 96, 4, 1 },
	{ 500, 96, 4, 1 },




	/* L */
	{ 2600, 160, 1, 1 },
	{ 2433, 155, 1, 1 },
	{ 2266, 150, 1, 1 },
	{ 2133, 146, 1, 1 },
	{ 1933, 140, 1, 1 },
	{ 1800, 136, 1, 1 },
	{ 1633, 128, 1, 1 },
	{ 1548, 126, 2, 1 },
	{ 1383, 120, 2, 1 },
	{ 1300, 117, 2, 1 },
	{ 1175, 112, 2, 1 },
	{ 1133, 110, 2, 1 },
	{ 1050, 107, 2, 1 },
	{ 925, 102, 2, 1 },
	{ 841, 99, 2, 1 },
	{ 774, 96, 2, 1 },


	/* CCI */
	{ 1400, 148, 2, 1 },
	{ 1356, 142, 2, 1 },
	{ 1295, 134, 2, 1 },
	{ 1260, 128, 2, 1 },
	{ 1190, 120, 2, 1 },
	{ 1103, 117, 2, 1 },
	{ 1017, 114, 2, 1 },
	{ 960, 112, 2, 1 },
	{ 902, 110, 2, 1 },
	{ 873, 109, 2, 1 },
	{ 816, 107, 2, 1 },
	{ 730, 104, 4, 1 },
	{ 672, 102, 4, 1 },
	{ 615, 100, 4, 1 },
	{ 557, 98, 4, 1 },
	{ 500, 96, 4, 1 },

};

static unsigned int FY_6873TTbl[NR_FREQ * NR_MT_CPU_DVFS][ARRAY_COL_SIZE] = {
	/* Freq, Vproc, post_div, clk_div */
	/* LL */
	{ 2000, 148, 1, 1 },
	{ 1875, 142, 1, 1 },
	{ 1812, 139, 1, 1 },
	{ 1750, 137, 1, 1 },
	{ 1687, 134, 1, 1 },
	{ 1625, 131, 1, 1 },
	{ 1541, 128, 2, 1 },
	{ 1500, 125, 2, 1 },
	{ 1358, 120, 2, 1 },
	{ 1181, 114, 2, 1 },
	{ 1075, 111, 2, 1 },
	{ 968, 107, 2, 1 },
	{ 862, 103, 2, 1 },
	{ 756, 100, 2, 1 },
	{ 650, 96, 4, 1 },
	{ 500, 96, 4, 1 },




	/* L */
	{ 2200, 160, 1, 1 },
	{ 2100, 153, 1, 1 },
	{ 1983, 144, 1, 1 },
	{ 1933, 140, 1, 1 },
	{ 1866, 135, 1, 1 },
	{ 1800, 128, 1, 1 },
	{ 1620, 124, 1, 1 },
	{ 1508, 120, 2, 1 },
	{ 1466, 119, 2, 1 },
	{ 1383, 116, 2, 1 },
	{ 1300, 113, 2, 1 },
	{ 1175, 109, 2, 1 },
	{ 1133, 108, 2, 1 },
	{ 1050, 105, 2, 1 },
	{ 925, 101, 2, 1 },
	{ 774, 96, 2, 1 },




	/* CCI */
	{ 1400, 148, 2, 1 },
	{ 1356, 142, 2, 1 },
	{ 1295, 134, 2, 1 },
	{ 1260, 128, 2, 1 },
	{ 1190, 120, 2, 1 },
	{ 1103, 117, 2, 1 },
	{ 1017, 114, 2, 1 },
	{ 960, 112, 2, 1 },
	{ 902, 110, 2, 1 },
	{ 873, 109, 2, 1 },
	{ 816, 107, 2, 1 },
	{ 730, 104, 4, 1 },
	{ 672, 102, 4, 1 },
	{ 615, 100, 4, 1 },
	{ 557, 98, 4, 1 },
	{ 500, 96, 4, 1 },

};

static unsigned int FY_6873_v1_Tbl[NR_FREQ * NR_MT_CPU_DVFS][ARRAY_COL_SIZE] = {
	/* Freq, Vproc, post_div, clk_div */
	/* LL */
	{ 1181, 120, 2, 1 },
	{ 1181, 120, 2, 1 },
	{ 1181, 120, 2, 1 },
	{ 1181, 120, 2, 1 },
	{ 1181, 120, 2, 1 },
	{ 1181, 120, 2, 1 },
	{ 1181, 120, 2, 1 },
	{ 1181, 120, 2, 1 },
	{ 1181, 120, 2, 1 },
	{ 1181, 120, 2, 1 },
	{ 1075, 115, 2, 1 },
	{ 968, 110, 2, 1 },
	{ 897, 107, 2, 1 },
	{ 827, 104, 2, 1 },
	{ 720, 99, 4, 1 },
	{ 500, 96, 4, 1 },

	/* L */
	{ 1383, 120, 2, 1 },
	{ 1383, 120, 2, 1 },
	{ 1383, 120, 2, 1 },
	{ 1383, 120, 2, 1 },
	{ 1383, 120, 2, 1 },
	{ 1383, 120, 2, 1 },
	{ 1383, 120, 2, 1 },
	{ 1383, 120, 2, 1 },
	{ 1383, 120, 2, 1 },
	{ 1258, 115, 2, 1 },
	{ 1175, 112, 2, 1 },
	{ 1091, 108, 2, 1 },
	{ 1008, 105, 2, 1 },
	{ 925, 102, 2, 1 },
	{ 841, 99, 2, 1 },
	{ 774, 96, 2, 1 },

	/* CCI */
	{ 1341, 149, 2, 1 },
	{ 1306, 145, 2, 1 },
	{ 1260, 140, 2, 1 },
	{ 1190, 132, 2, 1 },
	{ 1103, 128, 2, 1 },
	{ 1075, 126, 2, 1 },
	{ 1017, 123, 2, 1 },
	{ 960, 120, 2, 1 },
	{ 902, 117, 2, 1 },
	{ 845, 114, 2, 1 },
	{ 758, 109, 2, 1 },
	{ 730, 108, 4, 1 },
	{ 672, 105, 4, 1 },
	{ 615, 102, 4, 1 },
	{ 557, 99, 4, 1 },
	{ 500, 96, 4, 1 },

};
unsigned int *xrecordTbl[NUM_CPU_LEVEL] = {
	[CPU_LEVEL_0] = &FY_6873Tbl[0][0],
	[CPU_LEVEL_1] = &TB_6873Tbl[0][0],
	[CPU_LEVEL_2] = &FY_6873TTbl[0][0],
	[CPU_LEVEL_3] = &FY_6873_v1_Tbl[0][0],
};

#ifdef CCI_MAP_TBL_SUPPORT
static unsigned char CCI_6873Tbl[32][16] = {
	/* Normal CCI Map */
	{ 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{ 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7},
	{ 6, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
	{ 6, 7, 7, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 12, 12, 12, 12, 12, 12, 12, 12},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 12, 13, 13, 13, 13, 13, 13, 13},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 12, 13, 13, 14, 14, 14, 14, 14},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 12, 13, 13, 14, 15, 15, 15, 15},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 12, 13, 13, 14, 15, 15, 15, 15},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 12, 13, 13, 14, 15, 15, 15, 15},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 12, 13, 13, 14, 15, 15, 15, 15},
	{ 6, 7, 7, 8, 8, 9, 10, 10, 12, 13, 13, 14, 15, 15, 15, 15},

	/* Hybrid CCI Map */
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{ 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
	{ 0, 0, 0, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
	{ 0, 0, 0, 1, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
	{ 0, 0, 0, 1, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
	{ 0, 0, 0, 1, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
	{ 0, 0, 0, 1, 3, 4, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6},
	{ 0, 0, 0, 1, 3, 4, 5, 5, 12, 12, 12, 12, 12, 12, 12, 12},
	{ 0, 0, 0, 1, 3, 4, 5, 5, 12, 13, 13, 13, 13, 13, 13, 13},
	{ 0, 0, 0, 1, 3, 4, 5, 5, 12, 13, 13, 14, 14, 14, 14, 14},
	{ 0, 0, 0, 1, 3, 4, 5, 5, 12, 13, 13, 14, 15, 15, 15, 15},
	{ 0, 0, 0, 1, 3, 4, 5, 5, 12, 13, 13, 14, 15, 15, 15, 15},
	{ 0, 0, 0, 1, 3, 4, 5, 5, 12, 13, 13, 14, 15, 15, 15, 15},
	{ 0, 0, 0, 1, 3, 4, 5, 5, 12, 13, 13, 14, 15, 15, 15, 15},
	{ 0, 0, 0, 1, 3, 4, 5, 5, 12, 13, 13, 14, 15, 15, 15, 15},

};

static unsigned char CCI_6873TBTbl[32][16] = {
	/* Normal CCI Map */
	{ 2, 4, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{ 2, 4, 5, 5, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7},
	{ 2, 4, 5, 5, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
	{ 2, 4, 5, 5, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 12, 12, 12, 12, 12, 12, 12, 12},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 12, 12, 13, 13, 13, 13, 13, 13},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 12, 12, 13, 14, 14, 14, 14, 14},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 12, 12, 13, 14, 15, 15, 15, 15},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 12, 12, 13, 14, 15, 15, 15, 15},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 12, 12, 13, 14, 15, 15, 15, 15},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 12, 12, 13, 14, 15, 15, 15, 15},
	{ 2, 4, 5, 5, 7, 8, 10, 10, 12, 12, 13, 14, 15, 15, 15, 15},

	/* Hybrid CCI Map */
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
	{ 0, 0, 0, 0, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
	{ 0, 0, 0, 0, 1, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
	{ 0, 0, 0, 0, 1, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
	{ 0, 0, 0, 0, 1, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
	{ 0, 0, 0, 0, 1, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
	{ 0, 0, 0, 0, 1, 3, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6},
	{ 0, 0, 0, 0, 1, 3, 5, 5, 12, 12, 12, 12, 12, 12, 12, 12},
	{ 0, 0, 0, 0, 1, 3, 5, 5, 12, 12, 13, 13, 13, 13, 13, 13},
	{ 0, 0, 0, 0, 1, 3, 5, 5, 12, 12, 13, 14, 14, 14, 14, 14},
	{ 0, 0, 0, 0, 1, 3, 5, 5, 12, 12, 13, 14, 15, 15, 15, 15},
	{ 0, 0, 0, 0, 1, 3, 5, 5, 12, 12, 13, 14, 15, 15, 15, 15},
	{ 0, 0, 0, 0, 1, 3, 5, 5, 12, 12, 13, 14, 15, 15, 15, 15},
	{ 0, 0, 0, 0, 1, 3, 5, 5, 12, 12, 13, 14, 15, 15, 15, 15},
	{ 0, 0, 0, 0, 1, 3, 5, 5, 12, 12, 13, 14, 15, 15, 15, 15},

};

static unsigned char CCI_6873TTbl[32][16] = {
	/* Normal CCI Map */
	{ 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{ 5, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7},
	{ 5, 6, 6, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8},
	{ 5, 6, 6, 7, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9},
	{ 5, 6, 6, 7, 7, 8, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
	{ 5, 6, 6, 7, 7, 8, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10},
	{ 5, 6, 6, 7, 7, 8, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11},
	{ 5, 6, 6, 7, 7, 8, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11},
	{ 5, 6, 6, 7, 7, 8, 10, 11, 11, 12, 12, 12, 12, 12, 12, 12},
	{ 5, 6, 6, 7, 7, 8, 10, 11, 11, 12, 12, 13, 13, 13, 13, 13},
	{ 5, 6, 6, 7, 7, 8, 10, 11, 11, 12, 12, 13, 14, 14, 14, 14},
	{ 5, 6, 6, 7, 7, 8, 10, 11, 11, 12, 12, 13, 14, 15, 15, 15},
	{ 5, 6, 6, 7, 7, 8, 10, 11, 11, 12, 12, 13, 14, 15, 15, 15},
	{ 5, 6, 6, 7, 7, 8, 10, 11, 11, 12, 12, 13, 14, 15, 15, 15},
	{ 5, 6, 6, 7, 7, 8, 10, 11, 11, 12, 12, 13, 14, 15, 15, 15},
	{ 5, 6, 6, 7, 7, 8, 10, 11, 11, 12, 12, 13, 14, 15, 15, 15},

	/* Hybrid CCI Map */
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{ 0, 0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2},
	{ 0, 0, 0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
	{ 0, 0, 0, 1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
	{ 0, 0, 0, 1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
	{ 0, 0, 0, 1, 2, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
	{ 0, 0, 0, 1, 2, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5},
	{ 0, 0, 0, 1, 2, 3, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6},
	{ 0, 0, 0, 1, 2, 3, 5, 6, 11, 12, 12, 12, 12, 12, 12, 12},
	{ 0, 0, 0, 1, 2, 3, 5, 6, 11, 12, 12, 13, 13, 13, 13, 13},
	{ 0, 0, 0, 1, 2, 3, 5, 6, 11, 12, 12, 13, 14, 14, 14, 14},
	{ 0, 0, 0, 1, 2, 3, 5, 6, 11, 12, 12, 13, 14, 15, 15, 15},
	{ 0, 0, 0, 1, 2, 3, 5, 6, 11, 12, 12, 13, 14, 15, 15, 15},
	{ 0, 0, 0, 1, 2, 3, 5, 6, 11, 12, 12, 13, 14, 15, 15, 15},
	{ 0, 0, 0, 1, 2, 3, 5, 6, 11, 12, 12, 13, 14, 15, 15, 15},
	{ 0, 0, 0, 1, 2, 3, 5, 6, 11, 12, 12, 13, 14, 15, 15, 15},

};



static unsigned char enratio_FYTbl[(NR_FREQ + 1) * IMAX_EN_RATIO_TBL_NUM] = {
	5, 22, 23, 25, 26, 28, 30, 0, 0,
	    0,  0,  0,  0,  0,  0, 0, 0,
	5, 22, 23, 25, 26, 28, 30, 0, 0,
	    0,  0,  0,  0,  0,  0, 0, 0,
};

unsigned char *xrecord_IMAX_Tbl[NUM_CPU_LEVEL] = {
	[CPU_LEVEL_0] = enratio_FYTbl,
	[CPU_LEVEL_1] = enratio_FYTbl,
	[CPU_LEVEL_2] = enratio_FYTbl,
	[CPU_LEVEL_3] = enratio_FYTbl,
};
unsigned char *xrecord_CCI_Tbl[NUM_CPU_LEVEL] = {
	[CPU_LEVEL_0] = &CCI_6873Tbl[0][0],
	[CPU_LEVEL_1] = &CCI_6873TBTbl[0][0],
	[CPU_LEVEL_2] = &CCI_6873TTbl[0][0],
	[CPU_LEVEL_3] = &CCI_6873Tbl[0][0],
};
#endif
