/*
 * GIE_program.c
 *
 *  Created on: Nov 17, 2023
 *      Author: yoga
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GIE_interface.h"
#include "GIE_register.h"

void GIE_VoidEnable (void)
{
	SET_BIT (SREG , SREG_I) ;
}

void GIE_VoidDisable (void)
{
	CLR_BIT (SREG , SREG_I) ;
}
