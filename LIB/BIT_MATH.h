/*
 * BIT_MATH.h
 *
 *  Created on: Oct 18, 2023
 *      Author: yoga
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(var, bit) var |= (1 << bit)
#define CLR_BIT(var, bit) var &= (~(1 << bit))
#define TOG_BIT(var, bit) var ^= (1 << bit)
#define GET_BIT(var, bit) (var & (1 << bit)) >> bit

#define IS_BIT_SET(var, bit) (var & (1 << bit)) >> bit
#define IS_BIT_CLR(var, bit) (!(var & (1 << bit)) >> bit)
#define ROR(var, num) var = (var << (reg_size - num)) | (reg >> (num))
#define ROL(var, num) var = (var >> (reg_size - num)) | (reg << (num))

#endif
