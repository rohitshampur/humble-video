/* This file is autogenerated.  Do not edit. */
/*
 * LIBOIL - Library of Optimized Inner Loops
 * Copyright (c) 2005 David A. Schleef <ds@schleef.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <math.h>

#include <liboil/liboil.h>
#include <liboil/liboilclasses.h>

static void
clamp_s8_pointer (oil_type_s8 *dest, oil_type_s8 *src1,
    int n
    , oil_type_s8 *low
    , oil_type_s8 *high
    )
{
  while (n) {
    oil_type_s8 x = *src1;
    if (x < *low) x = *low;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_s8_pointer, clamp_s8);

static void
clamp_u8_pointer (oil_type_u8 *dest, oil_type_u8 *src1,
    int n
    , oil_type_u8 *low
    , oil_type_u8 *high
    )
{
  while (n) {
    oil_type_u8 x = *src1;
    if (x < *low) x = *low;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_u8_pointer, clamp_u8);

static void
clamp_s16_pointer (oil_type_s16 *dest, oil_type_s16 *src1,
    int n
    , oil_type_s16 *low
    , oil_type_s16 *high
    )
{
  while (n) {
    oil_type_s16 x = *src1;
    if (x < *low) x = *low;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_s16_pointer, clamp_s16);

static void
clamp_u16_pointer (oil_type_u16 *dest, oil_type_u16 *src1,
    int n
    , oil_type_u16 *low
    , oil_type_u16 *high
    )
{
  while (n) {
    oil_type_u16 x = *src1;
    if (x < *low) x = *low;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_u16_pointer, clamp_u16);

static void
clamp_s32_pointer (oil_type_s32 *dest, oil_type_s32 *src1,
    int n
    , oil_type_s32 *low
    , oil_type_s32 *high
    )
{
  while (n) {
    oil_type_s32 x = *src1;
    if (x < *low) x = *low;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_s32_pointer, clamp_s32);

static void
clamp_u32_pointer (oil_type_u32 *dest, oil_type_u32 *src1,
    int n
    , oil_type_u32 *low
    , oil_type_u32 *high
    )
{
  while (n) {
    oil_type_u32 x = *src1;
    if (x < *low) x = *low;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_u32_pointer, clamp_u32);

static void
clamp_s8_unroll4 (oil_type_s8 *dest, oil_type_s8 *src,
    int n , oil_type_s8 *low, oil_type_s8 *high)
{
  oil_type_s8 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_s8_unroll4, clamp_s8);

static void
clamp_u8_unroll4 (oil_type_u8 *dest, oil_type_u8 *src,
    int n , oil_type_u8 *low, oil_type_u8 *high)
{
  oil_type_u8 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_u8_unroll4, clamp_u8);

static void
clamp_s16_unroll4 (oil_type_s16 *dest, oil_type_s16 *src,
    int n , oil_type_s16 *low, oil_type_s16 *high)
{
  oil_type_s16 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_s16_unroll4, clamp_s16);

static void
clamp_u16_unroll4 (oil_type_u16 *dest, oil_type_u16 *src,
    int n , oil_type_u16 *low, oil_type_u16 *high)
{
  oil_type_u16 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_u16_unroll4, clamp_u16);

static void
clamp_s32_unroll4 (oil_type_s32 *dest, oil_type_s32 *src,
    int n , oil_type_s32 *low, oil_type_s32 *high)
{
  oil_type_s32 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_s32_unroll4, clamp_s32);

static void
clamp_u32_unroll4 (oil_type_u32 *dest, oil_type_u32 *src,
    int n , oil_type_u32 *low, oil_type_u32 *high)
{
  oil_type_u32 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_u32_unroll4, clamp_u32);

static void
clamp_s8_trick (oil_type_s8 *dest, oil_type_s8 *src,
    int n , oil_type_s8 *low, oil_type_s8 *high)
{
  int x;
  while (n&3) {
    x = *src;
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[0] = x;
    x = src[1];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[1] = x;
    x = src[2];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[2] = x;
    x = src[3];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_s8_trick, clamp_s8);

static void
clamp_u8_trick (oil_type_u8 *dest, oil_type_u8 *src,
    int n , oil_type_u8 *low, oil_type_u8 *high)
{
  int x;
  while (n&3) {
    x = *src;
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[0] = x;
    x = src[1];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[1] = x;
    x = src[2];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[2] = x;
    x = src[3];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_u8_trick, clamp_u8);

static void
clamp_s16_trick (oil_type_s16 *dest, oil_type_s16 *src,
    int n , oil_type_s16 *low, oil_type_s16 *high)
{
  int x;
  while (n&3) {
    x = *src;
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[0] = x;
    x = src[1];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[1] = x;
    x = src[2];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[2] = x;
    x = src[3];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_s16_trick, clamp_s16);

static void
clamp_u16_trick (oil_type_u16 *dest, oil_type_u16 *src,
    int n , oil_type_u16 *low, oil_type_u16 *high)
{
  int x;
  while (n&3) {
    x = *src;
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[0] = x;
    x = src[1];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[1] = x;
    x = src[2];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[2] = x;
    x = src[3];
    x = x - (((x-*low)>>31)&(x-*low));
    x = x + (((*high-x)>>31)&(*high-x));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamp_u16_trick, clamp_u16);

static void
clamphigh_s8_pointer (oil_type_s8 *dest, oil_type_s8 *src1,
    int n
    , oil_type_s8 *high
    )
{
  while (n) {
    oil_type_s8 x = *src1;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_s8_pointer, clamphigh_s8);

static void
clamphigh_u8_pointer (oil_type_u8 *dest, oil_type_u8 *src1,
    int n
    , oil_type_u8 *high
    )
{
  while (n) {
    oil_type_u8 x = *src1;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_u8_pointer, clamphigh_u8);

static void
clamphigh_s16_pointer (oil_type_s16 *dest, oil_type_s16 *src1,
    int n
    , oil_type_s16 *high
    )
{
  while (n) {
    oil_type_s16 x = *src1;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_s16_pointer, clamphigh_s16);

static void
clamphigh_u16_pointer (oil_type_u16 *dest, oil_type_u16 *src1,
    int n
    , oil_type_u16 *high
    )
{
  while (n) {
    oil_type_u16 x = *src1;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_u16_pointer, clamphigh_u16);

static void
clamphigh_s32_pointer (oil_type_s32 *dest, oil_type_s32 *src1,
    int n
    , oil_type_s32 *high
    )
{
  while (n) {
    oil_type_s32 x = *src1;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_s32_pointer, clamphigh_s32);

static void
clamphigh_u32_pointer (oil_type_u32 *dest, oil_type_u32 *src1,
    int n
    , oil_type_u32 *high
    )
{
  while (n) {
    oil_type_u32 x = *src1;
    if (x > *high) x = *high;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_u32_pointer, clamphigh_u32);

static void
clamphigh_s8_unroll4 (oil_type_s8 *dest, oil_type_s8 *src,
    int n , oil_type_s8 *high)
{
  oil_type_s8 x;
  while (n&3) {
    x = *src;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_s8_unroll4, clamphigh_s8);

static void
clamphigh_u8_unroll4 (oil_type_u8 *dest, oil_type_u8 *src,
    int n , oil_type_u8 *high)
{
  oil_type_u8 x;
  while (n&3) {
    x = *src;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_u8_unroll4, clamphigh_u8);

static void
clamphigh_s16_unroll4 (oil_type_s16 *dest, oil_type_s16 *src,
    int n , oil_type_s16 *high)
{
  oil_type_s16 x;
  while (n&3) {
    x = *src;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_s16_unroll4, clamphigh_s16);

static void
clamphigh_u16_unroll4 (oil_type_u16 *dest, oil_type_u16 *src,
    int n , oil_type_u16 *high)
{
  oil_type_u16 x;
  while (n&3) {
    x = *src;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_u16_unroll4, clamphigh_u16);

static void
clamphigh_s32_unroll4 (oil_type_s32 *dest, oil_type_s32 *src,
    int n , oil_type_s32 *high)
{
  oil_type_s32 x;
  while (n&3) {
    x = *src;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_s32_unroll4, clamphigh_s32);

static void
clamphigh_u32_unroll4 (oil_type_u32 *dest, oil_type_u32 *src,
    int n , oil_type_u32 *high)
{
  oil_type_u32 x;
  while (n&3) {
    x = *src;
    if (x > *high) x = *high;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x > *high) x = *high;

    dest[0] = x;
    x = src[1];
    if (x > *high) x = *high;

    dest[1] = x;
    x = src[2];
    if (x > *high) x = *high;

    dest[2] = x;
    x = src[3];
    if (x > *high) x = *high;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_u32_unroll4, clamphigh_u32);

static void
clamphigh_s8_trick (oil_type_s8 *dest, oil_type_s8 *src,
    int n , oil_type_s8 *high)
{
  int x;
  while (n&3) {
    x = *src;
    x = x + (((*high-x)>>31)&(*high-x));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[0] = x;
    x = src[1];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[1] = x;
    x = src[2];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[2] = x;
    x = src[3];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_s8_trick, clamphigh_s8);

static void
clamphigh_u8_trick (oil_type_u8 *dest, oil_type_u8 *src,
    int n , oil_type_u8 *high)
{
  int x;
  while (n&3) {
    x = *src;
    x = x + (((*high-x)>>31)&(*high-x));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[0] = x;
    x = src[1];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[1] = x;
    x = src[2];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[2] = x;
    x = src[3];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_u8_trick, clamphigh_u8);

static void
clamphigh_s16_trick (oil_type_s16 *dest, oil_type_s16 *src,
    int n , oil_type_s16 *high)
{
  int x;
  while (n&3) {
    x = *src;
    x = x + (((*high-x)>>31)&(*high-x));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[0] = x;
    x = src[1];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[1] = x;
    x = src[2];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[2] = x;
    x = src[3];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_s16_trick, clamphigh_s16);

static void
clamphigh_u16_trick (oil_type_u16 *dest, oil_type_u16 *src,
    int n , oil_type_u16 *high)
{
  int x;
  while (n&3) {
    x = *src;
    x = x + (((*high-x)>>31)&(*high-x));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[0] = x;
    x = src[1];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[1] = x;
    x = src[2];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[2] = x;
    x = src[3];
    x = x + (((*high-x)>>31)&(*high-x));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamphigh_u16_trick, clamphigh_u16);

static void
clamplow_s8_pointer (oil_type_s8 *dest, oil_type_s8 *src1,
    int n
    , oil_type_s8 *low
    )
{
  while (n) {
    oil_type_s8 x = *src1;
    if (x < *low) x = *low;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_s8_pointer, clamplow_s8);

static void
clamplow_u8_pointer (oil_type_u8 *dest, oil_type_u8 *src1,
    int n
    , oil_type_u8 *low
    )
{
  while (n) {
    oil_type_u8 x = *src1;
    if (x < *low) x = *low;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_u8_pointer, clamplow_u8);

static void
clamplow_s16_pointer (oil_type_s16 *dest, oil_type_s16 *src1,
    int n
    , oil_type_s16 *low
    )
{
  while (n) {
    oil_type_s16 x = *src1;
    if (x < *low) x = *low;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_s16_pointer, clamplow_s16);

static void
clamplow_u16_pointer (oil_type_u16 *dest, oil_type_u16 *src1,
    int n
    , oil_type_u16 *low
    )
{
  while (n) {
    oil_type_u16 x = *src1;
    if (x < *low) x = *low;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_u16_pointer, clamplow_u16);

static void
clamplow_s32_pointer (oil_type_s32 *dest, oil_type_s32 *src1,
    int n
    , oil_type_s32 *low
    )
{
  while (n) {
    oil_type_s32 x = *src1;
    if (x < *low) x = *low;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_s32_pointer, clamplow_s32);

static void
clamplow_u32_pointer (oil_type_u32 *dest, oil_type_u32 *src1,
    int n
    , oil_type_u32 *low
    )
{
  while (n) {
    oil_type_u32 x = *src1;
    if (x < *low) x = *low;
    *dest = x;
    dest++;
    src1++;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_u32_pointer, clamplow_u32);

static void
clamplow_s8_unroll4 (oil_type_s8 *dest, oil_type_s8 *src,
    int n , oil_type_s8 *low)
{
  oil_type_s8 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_s8_unroll4, clamplow_s8);

static void
clamplow_u8_unroll4 (oil_type_u8 *dest, oil_type_u8 *src,
    int n , oil_type_u8 *low)
{
  oil_type_u8 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_u8_unroll4, clamplow_u8);

static void
clamplow_s16_unroll4 (oil_type_s16 *dest, oil_type_s16 *src,
    int n , oil_type_s16 *low)
{
  oil_type_s16 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_s16_unroll4, clamplow_s16);

static void
clamplow_u16_unroll4 (oil_type_u16 *dest, oil_type_u16 *src,
    int n , oil_type_u16 *low)
{
  oil_type_u16 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_u16_unroll4, clamplow_u16);

static void
clamplow_s32_unroll4 (oil_type_s32 *dest, oil_type_s32 *src,
    int n , oil_type_s32 *low)
{
  oil_type_s32 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_s32_unroll4, clamplow_s32);

static void
clamplow_u32_unroll4 (oil_type_u32 *dest, oil_type_u32 *src,
    int n , oil_type_u32 *low)
{
  oil_type_u32 x;
  while (n&3) {
    x = *src;
    if (x < *low) x = *low;

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    if (x < *low) x = *low;

    dest[0] = x;
    x = src[1];
    if (x < *low) x = *low;

    dest[1] = x;
    x = src[2];
    if (x < *low) x = *low;

    dest[2] = x;
    x = src[3];
    if (x < *low) x = *low;

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_u32_unroll4, clamplow_u32);

static void
clamplow_s8_trick (oil_type_s8 *dest, oil_type_s8 *src,
    int n , oil_type_s8 *low)
{
  int x;
  while (n&3) {
    x = *src;
    x = x - (((x-*low)>>31)&(x-*low));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[0] = x;
    x = src[1];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[1] = x;
    x = src[2];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[2] = x;
    x = src[3];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_s8_trick, clamplow_s8);

static void
clamplow_u8_trick (oil_type_u8 *dest, oil_type_u8 *src,
    int n , oil_type_u8 *low)
{
  int x;
  while (n&3) {
    x = *src;
    x = x - (((x-*low)>>31)&(x-*low));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[0] = x;
    x = src[1];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[1] = x;
    x = src[2];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[2] = x;
    x = src[3];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_u8_trick, clamplow_u8);

static void
clamplow_s16_trick (oil_type_s16 *dest, oil_type_s16 *src,
    int n , oil_type_s16 *low)
{
  int x;
  while (n&3) {
    x = *src;
    x = x - (((x-*low)>>31)&(x-*low));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[0] = x;
    x = src[1];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[1] = x;
    x = src[2];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[2] = x;
    x = src[3];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_s16_trick, clamplow_s16);

static void
clamplow_u16_trick (oil_type_u16 *dest, oil_type_u16 *src,
    int n , oil_type_u16 *low)
{
  int x;
  while (n&3) {
    x = *src;
    x = x - (((x-*low)>>31)&(x-*low));

    *dest = x;
    dest++;
    src++;
    n--;
  }
  n >>= 2;
  while (n) {
    x = src[0];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[0] = x;
    x = src[1];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[1] = x;
    x = src[2];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[2] = x;
    x = src[3];
    x = x - (((x-*low)>>31)&(x-*low));

    dest[3] = x;
    dest+=4;
    src+=4;
    n--;
  }
}
OIL_DEFINE_IMPL (clamplow_u16_trick, clamplow_u16);
