/**
 * ***************************************************************
 *  @file      BIT_MATH.h			
 *  @author    Eslam Shahin (eslamshahin552000@gmail.com)                          
 *  @version   v1.0                                            
 *  @date      8 Aug 2020, 19:50	                                   
 *  @note      This file to make you deal with individual bits 	                                 
 *
 *  @attention This program is distributed in the hope  that it  
 * 	           will be useful,but WITHOUT ANY WARRANTY; without     
 *	           even the implied warranty of  MERCHANTABILITY or     
 *	           FITNESS FOR A PARTICULAR PURPOSE.  
 *                                                     
 *  @details   This file made to define some operations to do on 
 *             indvidual bits of registers  and input and output 
 *             values  ,   this preprocessor macros are replaced 
 *             before compilation   
 *
 * **************************************************************                                                                
 */

#ifndef __BIT_MATH__
#define __BIT_MATH__

/* Make a pin input or output */
#define  INPUT    1
#define  OUTPUT   0

#define  LOW      0
#define  HIGH     1

/******* To Set Specific BIT High or Low ***************/
/*!< @def SET_BIT this Macro take REG. and bit number to set */
#define SET_BIT(REG,BIT) 		 REG |=(1<<BIT) 
/*!< @def SET_BIT this Macro take REG. and bit number to clear */
#define CLEAR_BIT(REG,BIT) 		 REG &=(~(1<<BIT))
/*!< @def SET_BIT this Macro take REG. and bit number to togelle */
#define TOG_BIT(REG,BIT) 		(REG ^=(1<<BIT))
/*!< @def SET_BIT this Macro take REG. and bit number to get it value */
#define GET_BIT(REG,BIT)        ((REG>>BIT)&1)

/*********** Macros To Control a Reg ******************/
#define ASG_REG(REG,VALUE)      REG=VALUE
#define SET_REG(REG)			REG=0XFF
#define CLEAR_REG(REG)			REG=0X00
#define TOG_REG(REG)			REG=~REG

#endif
