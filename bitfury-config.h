/**
 * libbitfury.h - library for Bitfury chip/board
 *
 * Copyright (c) 2013 needbmw
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
**/

#ifndef __BITFURYCONFIG_H__
#define __BITFURYCONFIG_H__

/* Select your type of hardware */

#define BITFURY_METABANK 1
//#define BITFURY_NEEDBMW_NOMUX 1

/* Set clock defaults */
#define CLK_NO_DIV2 0

#if CLK_NO_DIV2
#define CLK_BITS_MIN 30
#define CLK_BITS_MAX 48
#define CLK_BITS_DEF 40
#define CLK_BITS_INIT 38
#else
#define CLK_BITS_MIN 48
#define CLK_BITS_MAX 57
#define CLK_BITS_DEF 54
#define CLK_BITS_INIT 52
#endif

/* Set stats options */

#define BITFURY_SHORT_STATS 30
#define BITFURY_LONG_STATS 300
#define BITFURY_API_STATS 600
#define BITFURY_STAT_N 1024

#endif
