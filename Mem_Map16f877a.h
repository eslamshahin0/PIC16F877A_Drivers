/**
 * ***************************************************************
 *  @file      Mem_Map16f877a.h 			
 *  @author    Eslam Shahin                          
 *  @version   v1.0                                            
 *  @date      16 DEC 2020		                                   
 *  @brief     This file has the Register's adresses and bits
 *             numbers for each register in PIC16F877A        	                                 
 *
 *  @note      This program is distributed in the hope  that it  
 * 	           will be useful,but WITHOUT ANY WARRANTY; without     
 *	           even the implied warranty of  MERCHANTABILITY or     
 *	           FITNESS FOR A PARTICULAR PURPOSE.  
 *                                                      
 * ***************************************************************                                                                
 */
#ifndef MEM_MAP16F877A_H_
#define MEM_MAP16F877A_H_

/************** GPIO *********************/
#define PORTA  (*(volatile unsigned char* const)0x05)
#define TRISA   (*(volatile unsigned char* const)0x85)

#define PORTB  (*(volatile unsigned char* const)0x06)
#define TRISB   (*(volatile unsigned char* const)0x86)

#define PORTC  (*(volatile unsigned char* const)0x07)
#define TRISC   (*(volatile unsigned char* const)0x87)

#define PORTD  (*(volatile unsigned char* const)(0x08))
#define TRISD   (*(volatile unsigned char* const)0x88)

#define PORTE  (*(volatile unsigned char* const)0x09)
#define TRISE   (*(volatile unsigned char* const)0x89)


/**************** External Interrupts ****************/
#define INTCON       (*(volatile unsigned char* const)0x0B)
#define OPTION_REG   (*(volatile unsigned char* const)0x81)
#define GIE    7
#define RBPU   7
#define INTE   4
#define INTF   1
#define RBIE   3
#define RBIF   0
#define INTEDG 6
/***************************Timer 0 ***********************/
#define TMR0   (*(volatile unsigned char* const)0x01)
//OPTION_REG
#define PSA 3   //IF 1 PRESCALLER IS FOR WATCH DOG
#define T0SE 4 //SOURSE EDAGE SELECT BIT , 0 FOR RISING
#define T0CS 5
#define TMR0IE 5
#define TMR0IF 2
/***********************Timer 1 *******************************/
#define T1CON   (*(volatile unsigned char* const)0x10)
#define PIR1    (*(volatile unsigned char* const)0x0C)
#define PIE1    (*(volatile unsigned char* const)0x8C)
#define TMR1    (*(volatile unsigned int* const)0x0E)
#define TMR1L   (*(volatile unsigned char* const)0x0E)
#define TMR1H   (*(volatile unsigned char* const)0x0F)
#define T1OSCEN 3   
#define T1SYNC  2
#define TMR1CS  1  // 1 FOR EXTERNAL
#define TMR1ON  0
#define TMR1IF  0
#define TMR1IE  0
/**********************TIMER 2 **********************/
#define TMR2 (*(volatile unsigned char* const)0x11)
#define T2CON (*(volatile unsigned char* const)0x12)
#define TMR2IF  1
#define TMR2IE  1
#define TOUTPS3 6
#define TOUTPS2 5
#define TOUTPS1 4
#define TOUTPS0 3
#define TMR2ON  2
#define T2CKPS1 1
#define T2CKPS0 0

/******************** CCP *************************/
#define CCP1CON (*(volatile unsigned char* const)0x17)
#define PIR2    (*(volatile unsigned char* const)0x0D)
#define PIE2    (*(volatile unsigned char* const)0x8D)

#define CCP2CON (*(volatile unsigned char* )0x1D)


/***************** ADC *****************************/
#define  ADCON0  (*(volatile unsigned char* )0x1F)
#define  ADCON1  (*(volatile unsigned char* )0x9F)
#define  ADRESH  (*(volatile unsigned char* )0x1E)
#define  ADRESL  (*(volatile unsigned char* )0x9E)
/* ADCON0*/
#define  ADCS1   7
#define  ADCS0   6
#define  CHS2    5
#define  CHS1    4
#define  CHS0    3
#define  GO_DONE 2
#define  ADON    0
/* ADCON1 */
#define ADFM 7
#define ADCS2 6
#define PCFG3 3
#define PCFG2 2
#define PCFG1 1 
#define PCFG0 0

/**************** EEPROM ********************/
#define  EEDATA  (*(volatile unsigned char * )0x010C)
#define  EEADR  (*(volatile unsigned  char * )0x010D)
#define  EEDATH  (*(volatile unsigned char * )0x010E)
#define  EEADRH  (*(volatile unsigned char * )0x010F)
#define  EECON1  (*(volatile unsigned char * )0x018C)
#define  EECON2  (*(volatile unsigned char * )0x018D)

#define  EEPGD   7
#define  WRERR   3
#define  WREN    2
#define  WR      1
#define  RD      0

#endif 
