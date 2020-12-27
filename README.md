# PIC16F877A Device Drivers 

### Contentes
* Brief 
* Required Softwares
* PIC16F877A Pinout Diagram
* Pickit3 Connections
* Installtion instructions 
* How to use  ?
* Copy Rights  
* Bugs
* change log
* Contact informations

### Brief
This is the frist verstion of PIC16F877A device drivers 
the repo includes almost all internal prephral of PIC16F877A 
the code designed to be porable with a separated file that includes the registers defintions and bits number 
there is some file to make code clean and organized like 


##### BIT_MATH.h
    This file has some macro that helping you to deal with individul     bits ex. SET_BIT(REGISTER,BITNUMBER) , this macro enable you to set the value of bit 'BITNUMBER' to 1 without affecting to other bits in register
##### STD_TYPES.h
    This file has some user defined 'typedef' to make the size of the variables fixed when moving from compiler to another compiler like 
    u8 , s8 -> the 'u' represent 'unsigned' word and '8' represent the size in bits , and 's' represend 'signed' word
    so we hve "u8 x =0" is equal to "unsigned char x =0"  
##### Mem_Map16f877a.h
    This file has the register defintions and bit number on each register and some macro
        
###  Required Softwares
- *[Download](https://www.microchip.com/mplab/mplab-x-ide) and Install Mplab X IDE*
- *[Download](https://www.microchip.com/mplab/compilers) and Install XC8 compiler*

###  PIC16F877A Pinout Diagram
PIC16F877a has a powerful 35 single word instructions , 8-bit microcontroller packs Microchip's powerful PIC® architecture into an 40- or 44-pin package and is upwards compatible with the PIC16C5X, PIC12CXXX and PIC16C7X devices.
The PIC16F877A features 256 bytes of EEPROM , self programming, an ICD, 2 Comparators, 8 channels of 10-bit Analog-to-Digital (A/D) converter, 2 capture/compare/PWM functions, the synchronous serial port, Asynchronous Receiver Transmitter (USART). 

![](https://components101.com/sites/default/files/component_pin/PIC16F877A-Pinout.png)

###  Pickit3 Connections
Microchip’s PICkit 3 In-Circuit Debugger/Programmer

![](https://components101.com/sites/default/files/component_pin/PICKit3-Pinout.png)

### Installtion instructions 
* These files does not requre any installion you only need to put them into your project file
* I used xc8 compiler v2.05 and MPLAP X v5.2
### How to use  ?
* To use this code you just put it on the project file and include whatever you want of XXXX_interface.h into your main to be able to use the APIs
thin you can change the configuration of each module in XXX.config.h file if avilable , but you will need to recompile your code *
* Running a project:
- Open a project in MPLAB X IDE
- Create `main.c` inside source
- Copy the modules you want to project 
- Include XXXX.interface.h into main 
- Click on the build icon on the top
- A `XXXX.hex` file will be generated inside `Project Folder > dist > default > production > `


### Copy Rights  
> This program is distributed in the hope  that it  
will be useful, you can use it for eductional purpose , you are not allowed to use it in a company or any commercial purpose without a written permission from me.
### Bugs
 Bugs will be listed here .
### Change log

> there is no change log till now 

#### Development
Want to contribute? Great!
Just contact me 

### Contact informations
Hello , I'm Eslam Ebrahim Shahin 
I'm an Embedded Software Engneer , I study in faculty of Navigation Sceince and Space Technology ,from Egypt
you can contact my through 
* [Linked in](https://www.linkedin.com/in/eslamshahin0/)
* Mail eslamshahin552000@gmail.com
