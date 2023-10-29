/*
 * BUZ_program.c
 *
 *  Created on: Oct 29, 2023
 *      Author: yoga
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"

#include "BUZ_interface.h"

void BUZ_voidInit( BUZ_Type BUZ_Configuration )
{

	DIO_enumSetPinDirection( BUZ_Configuration.Port , BUZ_Configuration.Pin , DIO_PORT_OUTPUT );

}

void BUZ_voidOn  ( BUZ_Type BUZ_Configuration )
{

	if( BUZ_Configuration.Active_State == ACTIVE_HIGH ){

		DIO_enumSetPinValue( BUZ_Configuration.Port , BUZ_Configuration.Pin , DIO_PIN_LOW );

	}else if( BUZ_Configuration.Active_State == ACTIVE_LOW ){

		DIO_enumSetPinValue( BUZ_Configuration.Port , BUZ_Configuration.Pin , DIO_PIN_HIGH  );

	}

}


void BUZ_voidOff ( BUZ_Type BUZ_Configuration )
{

	if( BUZ_Configuration.Active_State == ACTIVE_HIGH ){

		DIO_enumSetPinValue( BUZ_Configuration.Port , BUZ_Configuration.Pin , DIO_PIN_HIGH );

	}else if( BUZ_Configuration.Active_State == ACTIVE_LOW ){

		DIO_enumSetPinValue( BUZ_Configuration.Port , BUZ_Configuration.Pin ,DIO_PIN_LOW  );

	}

}

void BUZ_voidToggle      ( BUZ_Type BUZ_Configuration )
{
	DIO_enumTogglePinValue  ( BUZ_Configuration.Port , BUZ_Configuration.Pin );
}
