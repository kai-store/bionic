/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _ISP_DRV_KERNEL_H_
#define _ISP_DRV_KERNEL_H_
#define ISP_IO_MAGIC 'R'
#define ISP_IO_IRQ _IOR(ISP_IO_MAGIC, 0, struct isp_irq_param)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_IO_READ _IOR(ISP_IO_MAGIC, 1, struct isp_reg_param)
#define ISP_IO_WRITE _IOW(ISP_IO_MAGIC, 2, struct isp_reg_param)
#define ISP_IO_RST _IOW(ISP_IO_MAGIC, 3, uint32_t)
#define ISP_IO_SETCLK _IOW(ISP_IO_MAGIC, 4, enum isp_clk_sel)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_IO_STOP _IOW(ISP_IO_MAGIC, 5, uint32_t)
#define ISP_IO_INT _IOW(ISP_IO_MAGIC, 6, uint32_t)
#define ISP_IO_DCAM_INT _IOW(ISP_IO_MAGIC, 7, uint32_t)
#define ISP_IO_LNC_PARAM _IOW(ISP_IO_MAGIC, 8, struct isp_reg_param)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISP_IO_LNC _IOW(ISP_IO_MAGIC, 9, struct isp_reg_param)
#define ISP_IO_ALLOC _IOW(ISP_IO_MAGIC, 10, struct isp_reg_param)
enum isp_clk_sel {
  ISP_CLK_312M = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_CLK_256M,
  ISP_CLK_128M,
  ISP_CLK_76M8,
  ISP_CLK_48M,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_CLK_NONE
};
struct isp_irq_param {
  uint32_t isp_irq_val;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  uint32_t dcam_irq_val;
  uint32_t irq_val;
  int32_t ret_val;
  uint64_t system_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct isp_reg_bits {
  unsigned long reg_addr;
  unsigned long reg_value;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct isp_reg_param {
  unsigned long reg_param;
  uint32_t counts;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  ISP_LNC_STATUS_OK = (1 << 0),
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  ISP_INT_HIST_STORE = (1 << 0),
  ISP_INT_STORE = (1 << 1),
  ISP_INT_LENS_LOAD = (1 << 2),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_INT_HIST_CAL = (1 << 3),
  ISP_INT_HIST_RST = (1 << 4),
  ISP_INT_FETCH_BUF_FULL = (1 << 5),
  ISP_INT_DCAM_FULL = (1 << 6),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_INT_STORE_ERR = (1 << 7),
  ISP_INT_SHADOW = (1 << 8),
  ISP_INT_PREVIEW_STOP = (1 << 9),
  ISP_INT_AWB = (1 << 10),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_INT_AF = (1 << 11),
  ISP_INT_SLICE_CNT = (1 << 12),
  ISP_INT_AE = (1 << 13),
  ISP_INT_ANTI_FLICKER = (1 << 14),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_INT_AWBM_START = (1 << 15),
  ISP_INT_AFM_START = (1 << 16),
  ISP_INT_AE_START = (1 << 17),
  ISP_INT_FETCH_SOF = (1 << 18),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_INT_FETCH_EOF = (1 << 19),
  ISP_INT_AFM_WIN8 = (1 << 20),
  ISP_INT_AFM_WIN7 = (1 << 21),
  ISP_INT_AFM_WIN6 = (1 << 22),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_INT_AFM_WIN5 = (1 << 23),
  ISP_INT_AFM_WIN4 = (1 << 24),
  ISP_INT_AFM_WIN3 = (1 << 25),
  ISP_INT_AFM_WIN2 = (1 << 26),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  ISP_INT_AFM_WIN1 = (1 << 27),
  ISP_INT_AFM_WIN0 = (1 << 28),
  ISP_INT_STOP = (1 << 31),
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
