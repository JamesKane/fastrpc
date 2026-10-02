// SPDX-License-Identifier: BSD-3-Clause

#include <string.h>

#include "fastrpc_strl.h"

/* Copy src into dst of size bytes, terminated; return strlen(src). */
size_t strlcpy(char *dst, const char *src, size_t size) {
  size_t len = strlen(src);

  if (size != 0) {
    size_t n = len < size - 1 ? len : size - 1;

    memcpy(dst, src, n);
    dst[n] = '\0';
  }
  return len;
}

/* Append src to dst of size bytes, terminated; return the length tried. */
size_t strlcat(char *dst, const char *src, size_t size) {
  size_t dlen = strnlen(dst, size);

  if (dlen == size)
    return size + strlen(src);
  return dlen + strlcpy(dst + dlen, src, size - dlen);
}
