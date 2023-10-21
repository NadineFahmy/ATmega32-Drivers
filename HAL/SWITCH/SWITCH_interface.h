/*
 * SWITCH_interface.h
 *
 *  Created on: Oct 21, 2023
 *      Author: yoga
 */

#ifndef SWITCH_INTERFACE_H_
#define SWITCH_INTERFACE_H_

#define SW_PRESSED     1
#define SW_NOT_PRESSED 0

#define SW_Int_PULL_UP     0
#define SW_Ext_PULL_UP     1
#define SW_Ext_PULL_DOWN   2
#define SW_FLOATING        3

typedef struct{

	u8 Port;
	u8 Pin ;
	u8 Pull_State;

}SW_Type;

void SW_voidInit       ( SW_Type SW_Config );
u8   SW_u8GetPressed   ( SW_Type SW_Config );

#endif /* SWITCH_INTERFACE_H_ */
