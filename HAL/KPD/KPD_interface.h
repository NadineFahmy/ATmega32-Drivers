/*
 * KPD_interface.h
 *
 *  Created on: Oct 30, 2023
 *      Author: yoga
 */

#ifndef KPD_INTERFACE_H_
#define KPD_INTERFACE_H_

#define NOTPRESSED 0xff

void KPD_Init(void);
u8   KPD_u8GetPressed( void );

#endif /* KPD_INTERFACE_H_ */
