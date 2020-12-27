/**
 * ***************************************************************
 *  @file      BIT_MATH.h			
 *  @author    Eslam Shahin (eslamshahin552000@gmail.com)                          
 *  @version   v1.0                                            
 *  @date      8 Aug 2020, 19:37		                                   
 *  @brief     This file used to avoid the size change of the 
 *             variables in different compilers and arch	                                 
 *
 *  @attention This program is distributed in the hope  that it  
 * 	           will be useful,but WITHOUT ANY WARRANTY; without     
 *	           even the implied warranty of  MERCHANTABILITY or     
 *	           FITNESS FOR A PARTICULAR PURPOSE.  
 *                                                      
 * ***************************************************************                                                                
 */
#ifndef _STD_TYPES_
#define _STD_TYPES_

#include <stdio.h>

typedef signed char				s8;      /*!< @typedef s8  this typedef is signed char */
typedef unsigned char			u8;      /*!< @typedef u8  this typedef is unsigned char */
typedef short int				s16;     /*!< @typedef s16 this typedef is short int */
typedef unsigned short int		u16;     /*!< @typedef u16 this typedef is unsigned short int */
typedef long int				s32;     /*!< @typedef s32 this typedef is long int */
typedef unsigned long int		u32;     /*!< @typedef u32 this typedef is unsigned long int */
typedef long long 				s64;     /*!< @typedef s64 this typedef is long long  */
typedef unsigned long long		u64;     /*!< @typedef u64 this typedef is unsigned long long */

/*!< @def NULLPTR  this typedef is null pointer  */
#define NULLPTR ((void*)0)               
#endif
