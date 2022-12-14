// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

/* Margaux_6873_v1p9_2k6_game */

/**********************************************
 * unified_power_data.h
 * This header file includes:
 * 1. Macros of SRAM related address
 * 2. Raw datas of unified power tables for each bank
 **********************************************/

#ifndef UNIFIED_POWER_DATA_H
#define UNIFIED_POWER_DATA_H

/* remember to sync to sspm upower */
#define UPOWER_CSRAM_BASE 0x0012a000
#define UPOWER_CSRAM_SIZE 0x3000 /* 12K bytes */
#define UPOWER_DVFS_OFF_BOTTOM 0x8 /* ignore the last 8 bytes */
/* limit should be at 0x12CFF4 */
#define UPOWER_TBL_LIMIT \
	((UPOWER_CSRAM_BASE)+(UPOWER_CSRAM_SIZE)-(UPOWER_DVFS_OFF_BOTTOM))

struct upower_tbl upower_tbl_l_6873 = {
	.row = {
		{.cap = 137, .volt = 60000, .dyn_pwr = 13161,
			.lkg_pwr = {19352, 19352, 19352, 19352, 19352, 19352} },
		{.cap = 168, .volt = 60000, .dyn_pwr = 17109,
			.lkg_pwr = {19352, 19352, 19352, 19352, 19352, 19352} },
		{.cap = 189, .volt = 62500, .dyn_pwr = 21592,
			.lkg_pwr = {20682, 20682, 20682, 20682, 20682, 20682} },
		{.cap = 209, .volt = 64375, .dyn_pwr = 26119,
			.lkg_pwr = {21679, 21679, 21679, 21679, 21679, 21679} },
		{.cap = 228, .volt = 66875, .dyn_pwr = 31653,
			.lkg_pwr = {23150, 23150, 23150, 23150, 23150, 23150} },
		{.cap = 246, .volt = 69375, .dyn_pwr = 37710,
			.lkg_pwr = {24667, 24667, 24667, 24667, 24667, 24667} },
		{.cap = 263, .volt = 71250, .dyn_pwr = 43111,
			.lkg_pwr = {25804, 25804, 25804, 25804, 25804, 25804} },
		{.cap = 290, .volt = 75000, .dyn_pwr = 53680,
			.lkg_pwr = {28077, 28077, 28077, 28077, 28077, 28077} },
		{.cap = 309, .volt = 78125, .dyn_pwr = 63136,
			.lkg_pwr = {30227, 30227, 30227, 30227, 30227, 30227} },
		{.cap = 314, .volt = 80000, .dyn_pwr = 67475,
			.lkg_pwr = {31517, 31517, 31517, 31517, 31517, 31517} },
		{.cap = 324, .volt = 81875, .dyn_pwr = 73311,
			.lkg_pwr = {32980, 32980, 32980, 32980, 32980, 32980} },
		{.cap = 331, .volt = 83750, .dyn_pwr = 78659,
			.lkg_pwr = {34443, 34443, 34443, 34443, 34443, 34443} },
		{.cap = 338, .volt = 85625, .dyn_pwr = 84216,
			.lkg_pwr = {35955, 35955, 35955, 35955, 35955, 35955} },
		{.cap = 345, .volt = 86875, .dyn_pwr = 88637,
			.lkg_pwr = {37030, 37030, 37030, 37030, 37030, 37030} },
		{.cap = 352, .volt = 88750, .dyn_pwr = 94484,
			.lkg_pwr = {38641, 38641, 38641, 38641, 38641, 38641} },
		{.cap = 365, .volt = 92500, .dyn_pwr = 106636,
			.lkg_pwr = {42089, 42089, 42089, 42089, 42089, 42089} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
	},
};

struct upower_tbl upower_tbl_cluster_l_6873 = {
	.row = {
		{.cap = 137, .volt = 60000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 168, .volt = 60000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 189, .volt = 62500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 209, .volt = 64375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 228, .volt = 66875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 246, .volt = 69375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 263, .volt = 71250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 290, .volt = 75000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 309, .volt = 78125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 314, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 324, .volt = 81875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 331, .volt = 83750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 338, .volt = 85625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 345, .volt = 86875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 352, .volt = 88750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 365, .volt = 92500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_b_6873 = {
	.row = {
		{.cap = 583, .volt = 60000, .dyn_pwr = 90623,
			.lkg_pwr = {82351, 82351, 82351, 82351, 82351, 82351} },
		{.cap = 622, .volt = 61875, .dyn_pwr = 104718,
			.lkg_pwr = {87214, 87214, 87214, 87214, 87214, 87214} },
		{.cap = 669, .volt = 63750, .dyn_pwr = 122264,
			.lkg_pwr = {92077, 92077, 92077, 92077, 92077, 92077} },
		{.cap = 712, .volt = 65625, .dyn_pwr = 141187,
			.lkg_pwr = {96937, 96937, 96937, 96937, 96937, 96937} },
		{.cap = 749, .volt = 67500, .dyn_pwr = 160355,
			.lkg_pwr = {101789, 101789, 101789, 101789, 101789,
				101789} },
		{.cap = 782, .volt = 70000, .dyn_pwr = 182755,
			.lkg_pwr = {108258, 108258, 108258, 108258, 108258,
				108258} },
		{.cap = 816, .volt = 71875, .dyn_pwr = 202968,
			.lkg_pwr = {113107, 113107, 113107, 113107, 113107,
				113107} },
		{.cap = 861, .volt = 75000, .dyn_pwr = 236977,
			.lkg_pwr = {121189, 121189, 121189, 121189, 121189,
				121189} },
		{.cap = 911, .volt = 80000, .dyn_pwr = 291736,
			.lkg_pwr = {135760, 135760, 135760, 135760, 135760,
				135760} },
		{.cap = 936, .volt = 80625, .dyn_pwr = 307510,
			.lkg_pwr = {137623, 137623, 137623, 137623, 137623,
				137623} },
		{.cap = 958, .volt = 83125, .dyn_pwr = 340058,
			.lkg_pwr = {145074, 145074, 145074, 145074, 145074,
				145074} },
		{.cap = 980, .volt = 85000, .dyn_pwr = 369167,
			.lkg_pwr = {150662, 150662, 150662, 150662, 150662,
				150662} },
		{.cap = 992, .volt = 86875, .dyn_pwr = 393910,
			.lkg_pwr = {157351, 157351, 157351, 157351, 157351,
				157351} },
		{.cap = 1004, .volt = 88750, .dyn_pwr = 419597,
			.lkg_pwr = {164040, 164040, 164040, 164040, 164040,
				164040} },
		{.cap = 1014, .volt = 90625, .dyn_pwr = 446234,
			.lkg_pwr = {170797, 170797, 170797, 170797, 170797,
				170797} },
		{.cap = 1024, .volt = 92500, .dyn_pwr = 473826,
			.lkg_pwr = {177689, 177689, 177689, 177689, 177689,
				177689} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
	},
};

struct upower_tbl upower_tbl_cluster_b_6873 = {
	.row = {
		{.cap = 583, .volt = 60000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 622, .volt = 61875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 669, .volt = 63750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 712, .volt = 65625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 749, .volt = 67500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 782, .volt = 70000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 816, .volt = 71875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 861, .volt = 75000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 911, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 936, .volt = 80625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 958, .volt = 83125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 980, .volt = 85000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 992, .volt = 86875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1004, .volt = 88750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1014, .volt = 90625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1024, .volt = 92500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_cci_6873 = {
	.row = {
		{.cap = 0, .volt = 60000, .dyn_pwr = 7449,
			.lkg_pwr = {35013, 35013, 35013, 35013, 35013, 35013} },
		{.cap = 0, .volt = 61250, .dyn_pwr = 8648,
			.lkg_pwr = {36116, 36116, 36116, 36116, 36116, 36116} },
		{.cap = 0, .volt = 62500, .dyn_pwr = 9942,
			.lkg_pwr = {37219, 37219, 37219, 37219, 37219, 37219} },
		{.cap = 0, .volt = 63750, .dyn_pwr = 11303,
			.lkg_pwr = {38322, 38322, 38322, 38322, 38322, 38322} },
		{.cap = 0, .volt = 65000, .dyn_pwr = 12764,
			.lkg_pwr = {39426, 39426, 39426, 39426, 39426, 39426} },
		{.cap = 0, .volt = 66875, .dyn_pwr = 15103,
			.lkg_pwr = {41316, 41316, 41316, 41316, 41316, 41316} },
		{.cap = 0, .volt = 68125, .dyn_pwr = 16768,
			.lkg_pwr = {42577, 42577, 42577, 42577, 42577, 42577} },
		{.cap = 0, .volt = 68750, .dyn_pwr = 17644,
			.lkg_pwr = {43207, 43207, 43207, 43207, 43207, 43207} },
		{.cap = 0, .volt = 70000, .dyn_pwr = 19468,
			.lkg_pwr = {44468, 44468, 44468, 44468, 44468, 44468} },
		{.cap = 0, .volt = 71250, .dyn_pwr = 21367,
			.lkg_pwr = {45728, 45728, 45728, 45728, 45728, 45728} },
		{.cap = 0, .volt = 73125, .dyn_pwr = 24409,
			.lkg_pwr = {47619, 47619, 47619, 47619, 47619, 47619} },
		{.cap = 0, .volt = 75000, .dyn_pwr = 27702,
			.lkg_pwr = {49510, 49510, 49510, 49510, 49510, 49510} },
		{.cap = 0, .volt = 80000, .dyn_pwr = 33320,
			.lkg_pwr = {55139, 55139, 55139, 55139, 55139, 55139} },
		{.cap = 0, .volt = 83750, .dyn_pwr = 36720,
			.lkg_pwr = {60333, 60333, 60333, 60333, 60333, 60333} },
		{.cap = 0, .volt = 88750, .dyn_pwr = 42637,
			.lkg_pwr = {67896, 67896, 67896, 67896, 67896, 67896} },
		{.cap = 0, .volt = 92500, .dyn_pwr = 47450,
			.lkg_pwr = {74432, 74432, 74432, 74432, 74432, 74432} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
	},
};

struct upower_tbl upower_tbl_l_6873TB = {
	.row = {
		{.cap = 148, .volt = 60000, .dyn_pwr = 13161,
			.lkg_pwr = {19352, 19352, 19352, 19352, 19352, 19352} },
		{.cap = 180, .volt = 60000, .dyn_pwr = 17109,
			.lkg_pwr = {19352, 19352, 19352, 19352, 19352, 19352} },
		{.cap = 199, .volt = 62500, .dyn_pwr = 21592,
			.lkg_pwr = {20682, 20682, 20682, 20682, 20682, 20682} },
		{.cap = 215, .volt = 64375, .dyn_pwr = 26119,
			.lkg_pwr = {21679, 21679, 21679, 21679, 21679, 21679} },
		{.cap = 229, .volt = 66875, .dyn_pwr = 31653,
			.lkg_pwr = {23150, 23150, 23150, 23150, 23150, 23150} },
		{.cap = 244, .volt = 69375, .dyn_pwr = 37701,
			.lkg_pwr = {24667, 24667, 24667, 24667, 24667, 24667} },
		{.cap = 258, .volt = 71250, .dyn_pwr = 43103,
			.lkg_pwr = {25804, 25804, 25804, 25804, 25804, 25804} },
		{.cap = 277, .volt = 75000, .dyn_pwr = 53675,
			.lkg_pwr = {28077, 28077, 28077, 28077, 28077, 28077} },
		{.cap = 289, .volt = 78125, .dyn_pwr = 63136,
			.lkg_pwr = {30227, 30227, 30227, 30227, 30227, 30227} },
		{.cap = 294, .volt = 80000, .dyn_pwr = 67475,
			.lkg_pwr = {31517, 31517, 31517, 31517, 31517, 31517} },
		{.cap = 302, .volt = 81875, .dyn_pwr = 73311,
			.lkg_pwr = {32980, 32980, 32980, 32980, 32980, 32980} },
		{.cap = 308, .volt = 83750, .dyn_pwr = 78659,
			.lkg_pwr = {34443, 34443, 34443, 34443, 34443, 34443} },
		{.cap = 313, .volt = 85625, .dyn_pwr = 84216,
			.lkg_pwr = {35955, 35955, 35955, 35955, 35955, 35955} },
		{.cap = 318, .volt = 86875, .dyn_pwr = 88637,
			.lkg_pwr = {37030, 37030, 37030, 37030, 37030, 37030} },
		{.cap = 322, .volt = 88750, .dyn_pwr = 94484,
			.lkg_pwr = {38641, 38641, 38641, 38641, 38641, 38641} },
		{.cap = 330, .volt = 92500, .dyn_pwr = 106636,
			.lkg_pwr = {42089, 42089, 42089, 42089, 42089, 42089} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
	},
};

struct upower_tbl upower_tbl_cluster_l_6873TB = {
	.row = {
		{.cap = 148, .volt = 60000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 180, .volt = 60000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 199, .volt = 62500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 215, .volt = 64375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 229, .volt = 66875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 244, .volt = 69375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 258, .volt = 71250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 277, .volt = 75000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 289, .volt = 78125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 294, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 302, .volt = 81875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 308, .volt = 83750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 313, .volt = 85625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 318, .volt = 86875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 322, .volt = 88750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 330, .volt = 92500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_b_6873TB = {
	.row = {
		{.cap = 569, .volt = 60000, .dyn_pwr = 80826,
			.lkg_pwr = {82351, 82351, 82351, 82351, 82351, 82351} },
		{.cap = 599, .volt = 61875, .dyn_pwr = 93398,
			.lkg_pwr = {87214, 87214, 87214, 87214, 87214, 87214} },
		{.cap = 632, .volt = 63750, .dyn_pwr = 109046,
			.lkg_pwr = {92077, 92077, 92077, 92077, 92077, 92077} },
		{.cap = 679, .volt = 66875, .dyn_pwr = 136201,
			.lkg_pwr = {100171, 100171, 100171, 100171, 100171,
				100171} },
		{.cap = 711, .volt = 68750, .dyn_pwr = 154643,
			.lkg_pwr = {105023, 105023, 105023, 105023, 105023,
				105023} },
		{.cap = 725, .volt = 70000, .dyn_pwr = 165890,
			.lkg_pwr = {108258, 108258, 108258, 108258, 108258,
				108258} },
		{.cap = 765, .volt = 73125, .dyn_pwr = 198961,
			.lkg_pwr = {116340, 116340, 116340, 116340, 116340,
				116340} },
		{.cap = 787, .volt = 75000, .dyn_pwr = 221669,
			.lkg_pwr = {121189, 121189, 121189, 121189, 121189,
				121189} },
		{.cap = 827, .volt = 78750, .dyn_pwr = 271121,
			.lkg_pwr = {132118, 132118, 132118, 132118, 132118,
				132118} },
		{.cap = 851, .volt = 80000, .dyn_pwr = 293628,
			.lkg_pwr = {135760, 135760, 135760, 135760, 135760,
				135760} },
		{.cap = 891, .volt = 85000, .dyn_pwr = 358805,
			.lkg_pwr = {150662, 150662, 150662, 150662, 150662,
				150662} },
		{.cap = 916, .volt = 87500, .dyn_pwr = 402360,
			.lkg_pwr = {159581, 159581, 159581, 159581, 159581,
				159581} },
		{.cap = 954, .volt = 91250, .dyn_pwr = 472114,
			.lkg_pwr = {173094, 173094, 173094, 173094, 173094,
				173094} },
		{.cap = 977, .volt = 93750, .dyn_pwr = 525193,
			.lkg_pwr = {182283, 182283, 182283, 182283, 182283,
				182283} },
		{.cap = 1000, .volt = 96875, .dyn_pwr = 602118,
			.lkg_pwr = {195059, 195059, 195059, 195059, 195059,
				195059} },
		{.cap = 1024, .volt = 100000, .dyn_pwr = 685630,
			.lkg_pwr = {208694, 208694, 208694, 208694, 208694,
				208694} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
	},
};

struct upower_tbl upower_tbl_cluster_b_6873TB = {
	.row = {
		{.cap = 569, .volt = 60000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 599, .volt = 61875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 632, .volt = 63750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 679, .volt = 66875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 711, .volt = 68750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 725, .volt = 70000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 765, .volt = 73125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 787, .volt = 75000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 827, .volt = 78750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 851, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 891, .volt = 85000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 916, .volt = 87500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 954, .volt = 91250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 977, .volt = 93750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1000, .volt = 96875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1024, .volt = 100000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_cci_6873TB = {
	.row = {
		{.cap = 0, .volt = 60000, .dyn_pwr = 7449,
			.lkg_pwr = {35013, 35013, 35013, 35013, 35013, 35013} },
		{.cap = 0, .volt = 61250, .dyn_pwr = 8648,
			.lkg_pwr = {36116, 36116, 36116, 36116, 36116, 36116} },
		{.cap = 0, .volt = 62500, .dyn_pwr = 9942,
			.lkg_pwr = {37219, 37219, 37219, 37219, 37219, 37219} },
		{.cap = 0, .volt = 63750, .dyn_pwr = 11303,
			.lkg_pwr = {38322, 38322, 38322, 38322, 38322, 38322} },
		{.cap = 0, .volt = 65000, .dyn_pwr = 12764,
			.lkg_pwr = {39426, 39426, 39426, 39426, 39426, 39426} },
		{.cap = 0, .volt = 66875, .dyn_pwr = 15103,
			.lkg_pwr = {41316, 41316, 41316, 41316, 41316, 41316} },
		{.cap = 0, .volt = 68125, .dyn_pwr = 16768,
			.lkg_pwr = {42577, 42577, 42577, 42577, 42577, 42577} },
		{.cap = 0, .volt = 68750, .dyn_pwr = 17644,
			.lkg_pwr = {43207, 43207, 43207, 43207, 43207, 43207} },
		{.cap = 0, .volt = 70000, .dyn_pwr = 19468,
			.lkg_pwr = {44468, 44468, 44468, 44468, 44468, 44468} },
		{.cap = 0, .volt = 71250, .dyn_pwr = 21367,
			.lkg_pwr = {45728, 45728, 45728, 45728, 45728, 45728} },
		{.cap = 0, .volt = 73125, .dyn_pwr = 24409,
			.lkg_pwr = {47619, 47619, 47619, 47619, 47619, 47619} },
		{.cap = 0, .volt = 75000, .dyn_pwr = 27702,
			.lkg_pwr = {49510, 49510, 49510, 49510, 49510, 49510} },
		{.cap = 0, .volt = 80000, .dyn_pwr = 33373,
			.lkg_pwr = {55139, 55139, 55139, 55139, 55139, 55139} },
		{.cap = 0, .volt = 83750, .dyn_pwr = 37591,
			.lkg_pwr = {60333, 60333, 60333, 60333, 60333, 60333} },
		{.cap = 0, .volt = 88750, .dyn_pwr = 44202,
			.lkg_pwr = {67896, 67896, 67896, 67896, 67896, 67896} },
		{.cap = 0, .volt = 92500, .dyn_pwr = 49574,
			.lkg_pwr = {74432, 74432, 74432, 74432, 74432, 74432} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
	},
};

struct upower_tbl upower_tbl_l_6873T = {
	.row = {
		{.cap = 131, .volt = 60000, .dyn_pwr = 13161,
			.lkg_pwr = {19352, 19352, 19352, 19352, 19352, 19352} },
		{.cap = 161, .volt = 60000, .dyn_pwr = 17109,
			.lkg_pwr = {19352, 19352, 19352, 19352, 19352, 19352} },
		{.cap = 181, .volt = 62500, .dyn_pwr = 21592,
			.lkg_pwr = {20682, 20682, 20682, 20682, 20682, 20682} },
		{.cap = 200, .volt = 64375, .dyn_pwr = 26119,
			.lkg_pwr = {21679, 21679, 21679, 21679, 21679, 21679} },
		{.cap = 218, .volt = 66875, .dyn_pwr = 31653,
			.lkg_pwr = {23150, 23150, 23150, 23150, 23150, 23150} },
		{.cap = 236, .volt = 69375, .dyn_pwr = 37710,
			.lkg_pwr = {24667, 24667, 24667, 24667, 24667, 24667} },
		{.cap = 252, .volt = 71250, .dyn_pwr = 43111,
			.lkg_pwr = {25804, 25804, 25804, 25804, 25804, 25804} },
		{.cap = 278, .volt = 75000, .dyn_pwr = 53680,
			.lkg_pwr = {28077, 28077, 28077, 28077, 28077, 28077} },
		{.cap = 296, .volt = 78125, .dyn_pwr = 63136,
			.lkg_pwr = {30227, 30227, 30227, 30227, 30227, 30227} },
		{.cap = 301, .volt = 80000, .dyn_pwr = 67475,
			.lkg_pwr = {31517, 31517, 31517, 31517, 31517, 31517} },
		{.cap = 311, .volt = 81875, .dyn_pwr = 73311,
			.lkg_pwr = {32980, 32980, 32980, 32980, 32980, 32980} },
		{.cap = 317, .volt = 83750, .dyn_pwr = 78659,
			.lkg_pwr = {34443, 34443, 34443, 34443, 34443, 34443} },
		{.cap = 324, .volt = 85625, .dyn_pwr = 84216,
			.lkg_pwr = {35955, 35955, 35955, 35955, 35955, 35955} },
		{.cap = 331, .volt = 86875, .dyn_pwr = 88637,
			.lkg_pwr = {37030, 37030, 37030, 37030, 37030, 37030} },
		{.cap = 338, .volt = 88750, .dyn_pwr = 94484,
			.lkg_pwr = {38641, 38641, 38641, 38641, 38641, 38641} },
		{.cap = 350, .volt = 92500, .dyn_pwr = 106636,
			.lkg_pwr = {42089, 42089, 42089, 42089, 42089, 42089} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
		{{0}, {19352} },
	},
};

struct upower_tbl upower_tbl_cluster_l_6873T = {
	.row = {
		{.cap = 131, .volt = 60000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 161, .volt = 60000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 181, .volt = 62500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 200, .volt = 64375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 218, .volt = 66875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 236, .volt = 69375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 252, .volt = 71250, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 278, .volt = 75000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 296, .volt = 78125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 301, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 311, .volt = 81875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 317, .volt = 83750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 324, .volt = 85625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 331, .volt = 86875, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 338, .volt = 88750, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 350, .volt = 92500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_b_6873T = {
	.row = {
		{.cap = 559, .volt = 60000, .dyn_pwr = 90623,
			.lkg_pwr = {82351, 82351, 82351, 82351, 82351, 82351} },
		{.cap = 641, .volt = 63125, .dyn_pwr = 119878,
			.lkg_pwr = {90456, 90456, 90456, 90456, 90456, 90456} },
		{.cap = 701, .volt = 65625, .dyn_pwr = 147015,
			.lkg_pwr = {96937, 96937, 96937, 96937, 96937, 96937} },
		{.cap = 734, .volt = 67500, .dyn_pwr = 165194,
			.lkg_pwr = {101789, 101789, 101789, 101789, 101789,
				101789} },
		{.cap = 750, .volt = 68125, .dyn_pwr = 173095,
			.lkg_pwr = {103406, 103406, 103406, 103406, 103406,
				103406} },
		{.cap = 798, .volt = 70625, .dyn_pwr = 200836,
			.lkg_pwr = {109874, 109874, 109874, 109874, 109874,
				109874} },
		{.cap = 826, .volt = 72500, .dyn_pwr = 221442,
			.lkg_pwr = {114723, 114723, 114723, 114723, 114723,
				114723} },
		{.cap = 851, .volt = 74375, .dyn_pwr = 242888,
			.lkg_pwr = {119572, 119572, 119572, 119572, 119572,
				119572} },
		{.cap = 863, .volt = 75000, .dyn_pwr = 251871,
			.lkg_pwr = {121189, 121189, 121189, 121189, 121189,
				121189} },
		{.cap = 894, .volt = 77500, .dyn_pwr = 282361,
			.lkg_pwr = {128475, 128475, 128475, 128475, 128475,
				128475} },
		{.cap = 940, .volt = 80000, .dyn_pwr = 327013,
			.lkg_pwr = {135760, 135760, 135760, 135760, 135760,
				135760} },
		{.cap = 955, .volt = 84375, .dyn_pwr = 374037,
			.lkg_pwr = {148799, 148799, 148799, 148799, 148799,
				148799} },
		{.cap = 969, .volt = 87500, .dyn_pwr = 413241,
			.lkg_pwr = {159581, 159581, 159581, 159581, 159581,
				159581} },
		{.cap = 979, .volt = 90000, .dyn_pwr = 445700,
			.lkg_pwr = {168500, 168500, 168500, 168500, 168500,
				168500} },
		{.cap = 1004, .volt = 95625, .dyn_pwr = 519229,
			.lkg_pwr = {189605, 189605, 189605, 189605, 189605,
				189605} },
		{.cap = 1024, .volt = 100000, .dyn_pwr = 580577,
			.lkg_pwr = {208694, 208694, 208694, 208694, 208694,
				208694} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
		{{0}, {82351} },
	},
};

struct upower_tbl upower_tbl_cluster_b_6873T = {
	.row = {
		{.cap = 559, .volt = 60000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 641, .volt = 63125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 701, .volt = 65625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 734, .volt = 67500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 750, .volt = 68125, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 798, .volt = 70625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 826, .volt = 72500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 851, .volt = 74375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 863, .volt = 75000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 894, .volt = 77500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 940, .volt = 80000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 955, .volt = 84375, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 969, .volt = 87500, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 979, .volt = 90000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1004, .volt = 95625, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
		{.cap = 1024, .volt = 100000, .dyn_pwr = 0,
			.lkg_pwr = {0, 0, 0, 0, 0, 0} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
		{{0}, {0} },
	},
};

struct upower_tbl upower_tbl_cci_6873T = {
	.row = {
		{.cap = 0, .volt = 60000, .dyn_pwr = 7449,
			.lkg_pwr = {35013, 35013, 35013, 35013, 35013, 35013} },
		{.cap = 0, .volt = 61250, .dyn_pwr = 8648,
			.lkg_pwr = {36116, 36116, 36116, 36116, 36116, 36116} },
		{.cap = 0, .volt = 62500, .dyn_pwr = 9942,
			.lkg_pwr = {37219, 37219, 37219, 37219, 37219, 37219} },
		{.cap = 0, .volt = 63750, .dyn_pwr = 11303,
			.lkg_pwr = {38322, 38322, 38322, 38322, 38322, 38322} },
		{.cap = 0, .volt = 65000, .dyn_pwr = 12764,
			.lkg_pwr = {39426, 39426, 39426, 39426, 39426, 39426} },
		{.cap = 0, .volt = 66875, .dyn_pwr = 15103,
			.lkg_pwr = {41316, 41316, 41316, 41316, 41316, 41316} },
		{.cap = 0, .volt = 68125, .dyn_pwr = 16768,
			.lkg_pwr = {42577, 42577, 42577, 42577, 42577, 42577} },
		{.cap = 0, .volt = 68750, .dyn_pwr = 17644,
			.lkg_pwr = {43207, 43207, 43207, 43207, 43207, 43207} },
		{.cap = 0, .volt = 70000, .dyn_pwr = 19468,
			.lkg_pwr = {44468, 44468, 44468, 44468, 44468, 44468} },
		{.cap = 0, .volt = 71250, .dyn_pwr = 21367,
			.lkg_pwr = {45728, 45728, 45728, 45728, 45728, 45728} },
		{.cap = 0, .volt = 73125, .dyn_pwr = 24409,
			.lkg_pwr = {47619, 47619, 47619, 47619, 47619, 47619} },
		{.cap = 0, .volt = 75000, .dyn_pwr = 27702,
			.lkg_pwr = {49510, 49510, 49510, 49510, 49510, 49510} },
		{.cap = 0, .volt = 80000, .dyn_pwr = 33373,
			.lkg_pwr = {55139, 55139, 55139, 55139, 55139, 55139} },
		{.cap = 0, .volt = 83750, .dyn_pwr = 37591,
			.lkg_pwr = {60333, 60333, 60333, 60333, 60333, 60333} },
		{.cap = 0, .volt = 88750, .dyn_pwr = 44202,
			.lkg_pwr = {67896, 67896, 67896, 67896, 67896, 67896} },
		{.cap = 0, .volt = 92500, .dyn_pwr = 49574,
			.lkg_pwr = {74432, 74432, 74432, 74432, 74432, 74432} },
	},
	.lkg_idx = DEFAULT_LKG_IDX,
	.row_num = UPOWER_OPP_NUM,
	.nr_idle_states = NR_UPOWER_CSTATES,
	.idle_states = {
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
		{{0}, {35013} },
	},
};

#endif /* UNIFIED_POWER_DATA_H */
