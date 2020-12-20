 /**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.167.0
        Device            :  PIC24FJ128GA204
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.50
        MPLAB 	          :  MPLAB X v5.35
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/**
  Section: Included Files
*/
#define    FCY    4000000UL
#include "mcc_generated_files/system.h"
#include "mcc_generated_files/pin_manager.h"
#include <libpic30.h>


/*
                         Main application
 */
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    while (1)
    {
        
           
         
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
         __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP");
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W0"); //1bits change
        __asm__("NOP"); 
        __asm__("MOV #0x0, W1"); //2bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W1"); //3bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W3"); //4bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W7"); //5bits change
        __asm__("NOP");
        __asm__("MOV #0x1, W15"); //6bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W3"); //7bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W7"); //8bits change
        __asm__("NOP");
        __asm__("MOV #0xF, W15"); //9bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W1"); //10bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W3"); //11bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W7"); //12bits change
        __asm__("NOP");
        __asm__("MOV #0xFF, W15"); //13bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W1"); //14bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W3"); //15bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W7"); //16bits change
        __asm__("NOP");
        __asm__("MOV #0xFFF, W15"); //17bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W1"); //18bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W3"); //19bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W7"); //20bits change
        __asm__("NOP");
        __asm__("MOV #0xFFFF, W15"); //21bits change
        __asm__("NOP");  
          }

    return 1;
}
/**
 End of File
*/

