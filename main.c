/*
    File Name:        :  main.c
    Device            :  PIC32MM0256GPM048
    Compiler          :  XC32 2.05
    MPLAB             :  MPLAB X 4.15
    Created by        :  http://strefapic.blogspot.com
*/
#include "mcu_config_files/mcc.h"
#include "delay.h"
#include "dogm162.h"
#include "si4432.h"

uint8_t ItStatus1, ItStatus2 ;
char napis[] = "TEST SI4432 TX";
int main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    lcd_Initialize();
    SPI2_Initialize(); /*Master*/
    PORTCbits.RC6 = 1; /*nSEL set High*/
    SI4432_Initialize();
    // When using interrupts, you need to set the Global Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalDisable();
    lcd_Locate(1,1);
    lcd_String(napis);
    delayMs(1000);
   
    /*Read interrupt status registers. It clear all pending interrupts and the nIRQ pin goes back to high*/
    ItStatus1 = SpiReadRegister(SI4432_REG_03_INTERRUPT_STATUS1);/*read the Interrupt Status1 register*/
    ItStatus2 = SpiReadRegister(SI4432_REG_04_INTERRUPT_STATUS2);/*read the Interrupt Status2 register*/ 
    
    /*enable transmitter
     * Ready Mode - ON,
     * TX on in Manual Transmit Mode. (Automatically cleared in FIFO mode once the packet is sent.)
     */
    /*The radio forms the packet and send it automatically*/
    SpiWriteRegister(SI4432_REG_07_OPERATING_MODE1, 0x09); 
       
    while (1)
    {
         if(!Timer1_Programowy) {
              Timer1_Programowy = 10 ; /*Timer1 sprzetowy x Timer1_Programowy = 100ms x 10 = 1 s*/
              lcd_Locate(2,1);
              lcd_String("           ");
              /*Read interrupt status registers. It clear all pending interrupts and the nIRQ pin goes back to high*/
                ItStatus1 = SpiReadRegister(SI4432_REG_03_INTERRUPT_STATUS1);/*read the Interrupt Status1 register*/
                ItStatus2 = SpiReadRegister(SI4432_REG_04_INTERRUPT_STATUS2);/*read the Interrupt Status2 register*/ 
              /*The radio forms the packet and send it automatically*/
               SpiWriteRegister(SI4432_REG_07_OPERATING_MODE1, 0x09); 
               
              }    
       
        if(nIRQ_flag){
        /*read interrupt status registers*/
        ItStatus1 = SpiReadRegister(SI4432_REG_03_INTERRUPT_STATUS1);/*read the Interrupt Status1 register*/
        ItStatus2 = SpiReadRegister(SI4432_REG_04_INTERRUPT_STATUS2);/*read the Interrupt Status2 register*/        
        /*Valid Packet Received ?*/
        if( (ItStatus1 & SI4432_IPKSENT) == SI4432_IPKSENT){
                lcd_Locate(2,1);
                lcd_String("Send Packet");
            }
        nIRQ_flag = 0;
       }
      
    
    }
}

