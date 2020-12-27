/**
 * ***************************************************************
 *  @file      GPIO_interface.h				
 *  @author    Eslam Shahin (eslamshahin552000@gmail.com)                          
 *  @version   v1.0                                            
 *  @date      16 DEC 2020		                                   
 *  @brief     This file has the  APIs functions of The General
 *             purpose Input Output Pins for PIC16F877A            	                                 
 *
 *  @note      This program is distributed in the hope  that it  
 * 	           will be useful,but WITHOUT ANY WARRANTY; without     
 *	           even the implied warranty of  MERCHANTABILITY or     
 *	           FITNESS FOR A PARTICULAR PURPOSE.  
 *                                                      
 * ***************************************************************                                                                
 */
#ifndef _GPIO_INTERFACE_H_
#define _GPIO_INTERFACE_H_

#define HIGH     1
#define LOW      0

#define GPIOA    0    /*!< @def GPIOA this Macro is used to be an Input parmeter to Select GPIOA */
#define GPIOB    1    /*!< @def GPIOB this Macro is used to be an Input parmeter to Select GPIOB */
#define GPIOC    2    /*!< @def GPIOC this Macro is used to be an Input parmeter to Select GPIOC */
#define GPIOD    3    /*!< @def GPIOD this Macro is used to be an Input parmeter to Select GPIOD */
#define GPIOE    4    /*!< @def GPIOE this Macro is used to be an Input parmeter to Select GPIOE */

#define PIN0     0    /*!< @def PIN0  this Macro is used to be an Input parmeter to Select PIN0 */
#define PIN1     1    /*!< @def PIN1  this Macro is used to be an Input parmeter to Select PIN1 */
#define PIN2     2    /*!< @def PIN2  this Macro is used to be an Input parmeter to Select PIN2 */
#define PIN3     3    /*!< @def PIN3  this Macro is used to be an Input parmeter to Select PIN3 */
#define PIN4     4    /*!< @def PIN4  this Macro is used to be an Input parmeter to Select PIN4 */
#define PIN5     5    /*!< @def PIN5  this Macro is used to be an Input parmeter to Select PIN5 */
#define PIN6     6    /*!< @def PIN6  this Macro is used to be an Input parmeter to Select PIN6 */
#define PIN7     7    /*!< @def PIN7  this Macro is used to be an Input parmeter to Select PIN7 */

#define INPUT    1    /*!< @def INPUT  this Macro is used to be an Input parmeter to Select The state of pin */
#define OUTPUT   0    /*!< @def INPUT  this Macro is used to be an Input parmeter to Select The state of pin */
#define INPUT_PULLUP    2   /*!< @def INPUT  this Macro is used to be an Input parmeter to Select The state of pin */

void GPIO_voidSetPinDirection  ( u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Mode  );
void GPIO_voidSetPinValue      ( u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value );
u8   GPIO_u8GetPinValue        ( u8 Copy_u8Port , u8 Copy_u8Pin );
void GPIO_voidTogPin           ( u8 Port , u8 Pin );
void GPIO_voidTogPort          ( u8 Port );
void GPIO_voidWritePort        (u8 Port , u8 Value);

#endif