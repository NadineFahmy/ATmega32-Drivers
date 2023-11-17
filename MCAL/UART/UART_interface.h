/*
 * UART_interface.h
 *
 *  Created on: Nov 17, 2023
 *      Author: yoga
 */

#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_

void USART_voidInit (void);

u8   USART_u8SendData (u8 Copy_u8Data);

u8   USART_u8RecevieData (u8 * Copy_u8ReceviedData) ;

u8   USART_u8SendStringSynch (const u8 * Copy_pchString);
u8   USART_u8SendStringAsynch (const u8 * Copy_pchString , void (* NotificationFunc)(void)) ;

u8   USART_u8ReceiveBufferSynch (u8 * Copy_pchString , u32 Copy_uint32BufferSize) ;
u8   USART_u8ReceiveBufferAsynch (u8 * Copy_pchString , u32 Copy_uint32BufferSize , void (* NotificationFunc)(void)) ;

#endif /* UART_INTERFACE_H_ */
