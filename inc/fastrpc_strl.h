// SPDX-License-Identifier: BSD-3-Clause

#ifndef FASTRPC_STRL_H
#define FASTRPC_STRL_H

/*
 * strlcpy and strlcat, for a libc that has neither (glibc before 2.38)
 * where libbsd is not to be had either: built into each library, hidden.
 */
#include <stddef.h>

__attribute__((visibility("hidden")))
size_t strlcpy(char *dst, const char *src, size_t size);
__attribute__((visibility("hidden")))
size_t strlcat(char *dst, const char *src, size_t size);

#endif /* FASTRPC_STRL_H */
