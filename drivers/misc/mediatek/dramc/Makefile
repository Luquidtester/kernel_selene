#
# Copyright (C) 2015 MediaTek Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#

MTK_PLATFORM := $(subst ",,$(CONFIG_MTK_PLATFORM))
ccflags-y += -I$(srctree)/drivers/misc/mediatek/dramc/$(MTK_PLATFORM)

ifneq (,$(filter $(CONFIG_MTK_PLATFORM), "mt6768" "mt6739" "mt6785"))
obj-$(CONFIG_MTK_DRAMC) := dramc.o mtk_lastdramc.o mtk_memtest.o mtk_rshmoo.o
obj-$(CONFIG_MTK_DRAMC) += $(subst ",,$(CONFIG_MTK_PLATFORM))/
else
obj-$(CONFIG_MTK_DRAMC_LEGACY) := dramc.o mtk_lastdramc.o mtk_memtest.o mtk_rshmoo.o
obj-$(CONFIG_MTK_DRAMC_LEGACY) += $(subst ",,$(CONFIG_MTK_PLATFORM))/
endif


