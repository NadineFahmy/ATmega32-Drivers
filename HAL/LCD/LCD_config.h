/*
 * LCD_config.h
 *
 *  Created on: Oct 29, 2023
 *      Author: yoga
 */

#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_

#define CLCD_MODE  4

#define CLCD_DATA_PORT      DIO_PORTA
#define CLCD_CONTROL_PORT   DIO_PORTB

#define CLCD_RS             DIO_PIN1
#define CLCD_RW             DIO_PIN2
#define CLCD_EN             DIO_PIN3

#endif /* LCD_CONFIG_H_ */
