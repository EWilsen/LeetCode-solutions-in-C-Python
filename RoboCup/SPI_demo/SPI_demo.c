
/******************************************************************************
*
* Freescale Semiconductor Inc.
* (c) Copyright 2011-2012 Freescale Semiconductor, Inc.
* ALL RIGHTS RESERVED.
*
*******************************************************************************
*
* @file SPI_demo.c
*
* @author a13984
*
* @version 0.0.1
*
* @date Jul-15-2011
*
* @brief providing framework of test cases for MCU. 
*
*******************************************************************************/

#include "common.h"
#include "rtc.h"
#include "spi.h"

/******************************************************************************
* Global variables
******************************************************************************/

/******************************************************************************
* Constants and macros
******************************************************************************/

/******************************************************************************
* Local types
******************************************************************************/

/******************************************************************************
* Local function prototypes
******************************************************************************/

/******************************************************************************
* Local variables
******************************************************************************/

/******************************************************************************
* Local functions
******************************************************************************/
int main (void);
void RTC_Task(void);


/******************************************************************************
* Global functions
******************************************************************************/


/********************************************************************/
int main (void)
{
    
  	printf("\nRunning the SPI_demo project.\n");
    LED1_Init();

	/* enable SPI clocks */
	SIM_SCGC |= (SIM_SCGC_SPI0_MASK | SIM_SCGC_SPI1_MASK);

	//SPI0_Init();
	//SPI1_Init();

    RTC_SetupTimerCallback(RTC_Task);
    RTC_Init(RTC_CLKSRC_1KHZ,3, RTC_CLK_PRESCALER_100);
	
	Test_SPI();

	while(1)
	{
	} 
}

/*****************************************************************************//*!
+FUNCTION----------------------------------------------------------------
* @function name: RTC_Task
*
* @brief callback routine of RTC driver which does what you want to do at 
*        every RTC period.
*        
* @param  none
*
* @return none
*
* @ Pass/ Fail criteria: none
*****************************************************************************/

void RTC_Task(void)
{
    /* toggle LED1 */
    //LED4_Toggle();
}
/********************************************************************/
