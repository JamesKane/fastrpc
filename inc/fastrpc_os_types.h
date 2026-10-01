// SPDX-License-Identifier: BSD-3-Clause

#ifndef FASTRPC_OS_TYPES_H
#define FASTRPC_OS_TYPES_H

/*
 * The Linux UAPI's fixed-width type names, for the kernel interface's
 * structures, on systems without <linux/types.h>.
 */
#if defined(__FreeBSD__)
#include <sys/types.h>
#include <sys/ioccom.h>
#include <stdint.h>
typedef uint8_t __u8;
typedef uint16_t __u16;
typedef uint32_t __u32;
typedef uint64_t __u64;
typedef int8_t __s8;
typedef int16_t __s16;
typedef int32_t __s32;
typedef int64_t __s64;

/*
 * Linux error numbers FreeBSD doesn't have, for the code that maps them:
 * distinct values the FreeBSD kernel never returns.
 */
#include <errno.h>
#define EBADRQC		(ELAST + 101)
#define ECHRNG		(ELAST + 102)
#define EBADFD		(ELAST + 103)
#define EBADE		(ELAST + 104)
#define EBADR		(ELAST + 105)
#define ENOKEY		(ELAST + 106)
#define ENOSR		(ELAST + 107)
#else
#include <linux/types.h>
#endif

#endif /* FASTRPC_OS_TYPES_H */
