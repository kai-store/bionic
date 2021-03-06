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
#ifndef _UAPI__SOCK_DIAG_H__
#define _UAPI__SOCK_DIAG_H__
#include <linux/types.h>
#define SOCK_DIAG_BY_FAMILY 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SOCK_DESTROY_BACKPORT 21
struct sock_diag_req {
  __u8 sdiag_family;
  __u8 sdiag_protocol;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  SK_MEMINFO_RMEM_ALLOC,
  SK_MEMINFO_RCVBUF,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SK_MEMINFO_WMEM_ALLOC,
  SK_MEMINFO_SNDBUF,
  SK_MEMINFO_FWD_ALLOC,
  SK_MEMINFO_WMEM_QUEUED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SK_MEMINFO_OPTMEM,
  SK_MEMINFO_BACKLOG,
  SK_MEMINFO_VARS,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum sknetlink_groups {
  SKNLGRP_NONE,
  SKNLGRP_INET_TCP_DESTROY,
  SKNLGRP_INET_UDP_DESTROY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  SKNLGRP_INET6_TCP_DESTROY,
  SKNLGRP_INET6_UDP_DESTROY,
  __SKNLGRP_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SKNLGRP_MAX (__SKNLGRP_MAX - 1)
#endif
