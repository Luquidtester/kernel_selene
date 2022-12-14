// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#include <linux/string.h>

#include "mmdvfs_plat.h"

inline void mmdvfs_update_qos_sram(struct mm_larb_request larb_req[],
	u32 larb_update)
{ return; }

inline void mmdvfs_update_limit_config(enum mmdvfs_limit_source source,
	u32 source_value, u32 *limit_value, u32 *limit_level)
{ return; }

bool mmdvfs_log_larb_mmp(s32 common_port_id, s32 larb_id)
{ return false; }

/* Return port number of CCU on SMI common */
inline u32 mmdvfs_get_ccu_smi_common_port(u32 master_id)
{ return 0; }

inline s32 get_ccu_hrt_bw(struct mm_larb_request larb_req[])
{ return 0; }

inline s32 get_md_hrt_bw(void)
{ return 0; }

inline s32 dram_write_weight(s32 val)
{ return val; }

inline s32 emi_occ_ratio(void)
{ return 500; }

inline s32 emi_occ_ui_only(void)
{ return 500; }

inline s32 cam_occ_ratio(void)
{ return 1000; }

inline s32 disp_occ_ratio(void)
{ return 1000; }
