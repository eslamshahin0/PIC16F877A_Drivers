/**
 * ***************************************************************
 *  @file      GPIO_program.c			
 *  @author    Eslam Shahin (eslamshahin552000@gmail.com)                          
 *  @version   v1.0                                            
 *  @date      16 DEC 2020		                                   
 *  @brief     This file has the Implementation APIs functions 
 *             of The General Porpose Input Output Pins  
 *             for PIC16F877A            	                                 
 *
 *  @note      This program is distributed in the hope  that it  
 * 	           will be useful,but WITHOUT ANY WARRANTY; without     
 *	           even the implied warranty of  MERCHANTABILITY or     
 *	           FITNESS FOR A PARTICULAR PURPOSE.  
 *                                                      
 * ***************************************************************                                                                
 */
#include "../../STD_TYPES.h"
#include "../../BIT_MATH.h"
#include "../../Mem_Map16f877a.h"

#include "GPIO_interface.h"

/**
 * 
 * @fn      void GPIO_voidSetPinDirection( u8 Port , u8 Pin , u8 Mode  )
 * @brief   Select the mode of a pin in specific port
 * @param   Port Port name (GPIOA,GPIOB,...)  
 * @param   Pin  Pin number  (PIN0,PIN1,...)
 * @param   Mode Pin state   (INPUT ,OUTPUT,INPUT_PULLUP)
 * @return  void
 * 	  
 */
void GPIO_voidSetPinDirection( u8 Port , u8 Pin , u8 Mode  ){
    
    switch (Mode){
        
			case INPUT:
                switch (Port){
                    
				case GPIOA: SET_BIT(TRISA,Pin)   ;break;
				case GPIOB: SET_BIT(TRISB,Pin)   ;break;
				case GPIOC: SET_BIT(TRISC,Pin)   ;break;
				case GPIOD: SET_BIT(TRISD,Pin)   ;break;
                case GPIOE: SET_BIT(TRISE,Pin)   ;break;
                }
			break;
            
			case INPUT_PULLUP:
                switch (Port){
                    
				case GPIOB:
				CLEAR_BIT(OPTION_REG,RBPU); /* Enable inputt pullup for portb*/
				break;

			}
			break;
            
			case OUTPUT:
                switch (Port){
                    
				case GPIOA: CLEAR_BIT(TRISA,Pin)   ;break;
				case GPIOB: CLEAR_BIT(TRISB,Pin)   ;break;
				case GPIOC: CLEAR_BIT(TRISC,Pin)   ;break;
				case GPIOD: CLEAR_BIT(TRISD,Pin)   ;break;
				case GPIOE: CLEAR_BIT(TRISE,Pin)   ;break;
				
			}
			break;
    }
}

/**
 * 
 * @fn      void GPIO_voidSetPinValue( u8 Port , u8 Pin , u8 Value )
 * @brief   Select the logic High or Low for a Pin 
 * @param   Port Port name (GPIOA,GPIOB,...)  
 * @param   Pin  Pin number  (PIN0,PIN1,...)
 * @param   Value select logic on pin   (HIGH ,LOW)
 * @return  void
 * 	  
 */
void GPIO_voidSetPinValue( u8 Port , u8 Pin , u8 Value ){
    
    switch (Port)
	{
		case GPIOA:
		if (HIGH==Value){
			SET_BIT(PORTA,Pin);
		}else{
			CLEAR_BIT(PORTA,Pin);
		}
		break;
        
		case GPIOB:
		if (HIGH==Value){
			SET_BIT(PORTB,Pin);
        }else{
			CLEAR_BIT(PORTB,Pin);
		}
		break;
        
		case GPIOC:
		if (HIGH==Value){
			SET_BIT(PORTC,Pin);
		}else{
			CLEAR_BIT(PORTC,Pin);
		}
		break;
        
		case GPIOD:
		if (HIGH==Value){
			SET_BIT(PORTD,Pin);
		}else{
			CLEAR_BIT(PORTD,Pin);
		}
		break;
        case GPIOE:
		if (HIGH==Value){
			SET_BIT(PORTE,Pin);
		}else{
			CLEAR_BIT(PORTE,Pin);
		}
		break;
	}
}

/**
 * 
 * @fn      u8 GPIO_u8GetPinValue( u8 Port , u8 Pin )
 * @brief   Read pin Status 
 * @param   Port Port name (GPIOA,GPIOB,...)  
 * @param   Pin  Pin number  (PIN0,PIN1,...)
 * @return  Pin logic value (HIGH or LOW)
 * 	  
 */
u8 GPIO_u8GetPinValue( u8 Port , u8 Pin ){
    
    u8 Result=0;
    switch (Port){
        
        case GPIOA: Result = GET_BIT(PORTA,Pin);  break;              
        case GPIOB: Result = GET_BIT(PORTB,Pin);  break;                
        case GPIOC: Result = GET_BIT(PORTC,Pin);  break;                     
        case GPIOD: Result = GET_BIT(PORTD,Pin);  break;    
        case GPIOE: Result = GET_BIT(PORTE,Pin);  break;

	}
    return Result;
}

/**
 * 
 * @fn      void GPIO_voidTogPin( u8 Port , u8 Pin )
 * @brief   Inverse the pin status 
 * @param   Port Port name (GPIOA,GPIOB,...)  
 * @param   Pin  Pin number  (PIN0,PIN1,...)
 * @return  void
 * 	  
 */
void GPIO_voidTogPin( u8 Port , u8 Pin ){

	switch (Port)
	{
		case GPIOA:  TOG_BIT(PORTA,Pin);    break;                                  
		case GPIOB:  TOG_BIT(PORTB,Pin);    break;                                  
		case GPIOC:  TOG_BIT(PORTC,Pin);    break;                                       
		case GPIOD:  TOG_BIT(PORTD,Pin);    break;
        case GPIOE:  TOG_BIT(PORTE,Pin);    break;
	}
}

/**
 * 
 * @fn      void GPIO_voidTogPort( u8 Port  )
 * @brief   Inverse the all port status 
 * @param   Port Port name (GPIOA,GPIOB,...)  
 * @return  void
 * 	  
 */
void GPIO_voidTogPort( u8 Port  ){

	switch (Port)
	{
		case GPIOA:   TOG_REG(PORTA); break;                    
		case GPIOB:   TOG_REG(PORTB); break;                       
		case GPIOC:   TOG_REG(PORTC); break;         
		case GPIOD:   TOG_REG(PORTD); break;
        case GPIOE:   TOG_REG(PORTE); break;
	}
}

/**
 * 
 * @fn      void GPIO_voidWritePort(u8 Port , u8 Value)
 * @brief   Write a HEX value on the port
 * @param   Port Port name (GPIOA,GPIOB,...)
 * @param   Value Value that will be assigned (0X00 to 0XFF) 
 * @return  void
 * 	  
 */
void GPIO_voidWritePort(u8 Port , u8 Value){
    
	switch (Port)
	{
		case GPIOA: ASG_REG(PORTA,Value);   break;               
		case GPIOB: ASG_REG(PORTB,Value);   break;                
		case GPIOC: ASG_REG(PORTC,Value);   break;                
		case GPIOD: ASG_REG(PORTD,Value);   break;
        case GPIOE: ASG_REG(PORTE,Value);   break;
	}
}

