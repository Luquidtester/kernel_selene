#
# Copyright (C) 2016 MediaTek Inc.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See http://www.gnu.org/licenses/gpl-2.0.html for more details.
#

ccflags-y +=	\
	-I$(CPUFREQ_ROOT_DIR)/inc	\
	-I$(CPUFREQ_ROOT_DIR)/src/mach/mt6877	\
	-I$(srctree)/drivers/misc/mediatek/base/power/include	\
	-I$(srctree)/drivers/misc/mediatek/base/power/eem_v2/mt6877/inc	\
	-I$(srctree)/drivers/misc/mediatek/freqhopping	\
	-I$(srctree)/drivers/misc/mediatek/freqhopping/mt6877

ifeq ($(CONFIG_MTK_TINYSYS_MCUPM_SUPPORT), y)
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mcupm/
ccflags-y += -I$(srctree)/drivers/misc/mediatek/mcupm/mt6853/
endif

obj-y += mtk_cpufreq_platform.o
