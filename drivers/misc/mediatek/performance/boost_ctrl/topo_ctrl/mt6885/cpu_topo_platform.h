/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
*/


#ifndef __MT_CPU_TOPO_PLATFORM_H__
#define __MT_CPU_TOPO_PLATFORM_H__

#ifdef __cplusplus
extern "C" {
#endif


/*==============================================================*/
/* Macros							*/
/*==============================================================*/
/* TODO: remove these workaround for k49 migration */
#define NO_SCHEDULE_API		(1)

#if defined(CONFIG_MTK_SCHED_MULTI_GEARS)

#define TOTAL_CORE_NUM	(CORE_NUM_L+CORE_NUM_B+CORE_NUM_BB)
#define CORE_NUM_L	(4)
#define CORE_NUM_B	(3)
#define CORE_NUM_BB	(1)

static inline unsigned int get_cluster_cpu_core(unsigned int id)
{
	if (id == 0)
		return CORE_NUM_L;
	else if (id == 1)
		return CORE_NUM_B;
	else if (id == 2)
		return CORE_NUM_BB;
	return 0;
}

/*==============================================================*/
/* Enum								*/
/*==============================================================*/
enum ppm_cluster {
	PPM_CLUSTER_L = 0,
	PPM_CLUSTER_B,
	PPM_CLUSTER_BB,

	NR_PPM_CLUSTERS,
};

#else

#define TOTAL_CORE_NUM	(CORE_NUM_L+CORE_NUM_B)
#define CORE_NUM_L	(4)
#define CORE_NUM_B	(4)

#define get_cluster_cpu_core(id)	\
		(id ? CORE_NUM_B : CORE_NUM_L)

/*==============================================================*/
/* Enum								*/
/*==============================================================*/
enum ppm_cluster {
	PPM_CLUSTER_L = 0,
	PPM_CLUSTER_B,

	NR_PPM_CLUSTERS,
};

#endif /* CONFIG_MTK_SCHED_MULTI_GEARS */

/*==============================================================*/
/* Data Structures						*/
/*==============================================================*/

/*==============================================================*/
/* Global Variables						*/
/*==============================================================*/

/*==============================================================*/
/* APIs								*/
/*==============================================================*/


#ifdef __cplusplus
}
#endif

#endif
