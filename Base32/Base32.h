/*
 * Base32.h
 *
 * MIT License (MIT)
 *
 * Copyright (c) 2012 Ashkan Farhadtouski
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
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */


/** 
 TroopSwap/ID.me Changelog
 kEncodeCharsArray & kDecodeMap were modified to follow the RFC2938 Base32 standard, also known as 'base32hex'.
 This change replaced the Crockford's Base32 standard, also known as 'modified base32hex.'
**/

#import <Foundation/Foundation.h>

@interface Base32 : NSObject

/**
 * Encodes `numberToEncode` into its Base32 representation.
 *
 * @param numberToEncode A string representation of a decimal number. Note that 
 * the decimal number *must* have ten or *less* digits. Otherwise the primitive
 * data structures will overflow.
 *
 * @return Base32 representation of the decimal value in `numberToEncode`.
 *
 * @see http://www.crockford.com/wrmg/base32.html
 */
+ (NSString *)encode:(NSString *)numberToEncode;

/**
 * Decodes `base32String` into its original, decimal value.
 *
 * @param base32String A Base32 string representation that should be decoded
 * into its original, decimal value.
 *
 * @return The original decimal value.
 *
 * @see http://www.crockford.com/wrmg/base32.html
 */
+ (NSString *)decode:(NSString *)base32String;

@end
