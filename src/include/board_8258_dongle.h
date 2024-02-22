/********************************************************************************************************
 * @file    board_8258_dongle.h
 *
 * @brief   This is the header file for board_8258_dongle
 *
 * @author  Zigbee Group
 * @date    2021
 *
 * @par     Copyright (c) 2021, Telink Semiconductor (Shanghai) Co., Ltd. ("TELINK")
 *			All rights reserved.
 *
 *          Licensed under the Apache License, Version 2.0 (the "License");
 *          you may not use this file except in compliance with the License.
 *          You may obtain a copy of the License at
 *
 *              http://www.apache.org/licenses/LICENSE-2.0
 *
 *          Unless required by applicable law or agreed to in writing, software
 *          distributed under the License is distributed on an "AS IS" BASIS,
 *          WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *          See the License for the specific language governing permissions and
 *          limitations under the License.
 *
 *******************************************************************************************************/

#pragma once

/* Enable C linkage for C++ Compilers: */
#if defined(__cplusplus)
extern "C" {
#endif


#define DONGLE_8258_32				0
#define	DONGLE_8258_48				1

#if defined DONGLE_8258_32 && (DONGLE_8258_32 == 1)
/*******************************************************************************************************
*********************8258Dongle with 32 Pins: Start*****************************************************
*******************************************************************************************************/
//KEY
#define	BUTTON1 					GPIO_PD7
#define PD7_FUNC					AS_GPIO
#define PD7_OUTPUT_ENABLE			0
#define PD7_INPUT_ENABLE			1
#define	PULL_WAKEUP_SRC_PD7			PM_PIN_PULLUP_10K

#define	BUTTON2 					GPIO_PA1
#define PA1_FUNC					AS_GPIO
#define PA1_OUTPUT_ENABLE			0
#define PA1_INPUT_ENABLE			1
#define	PULL_WAKEUP_SRC_PA1			PM_PIN_PULLUP_10K

//LED
#define LED1						GPIO_PA0
#define PA0_FUNC					AS_GPIO
#define PA0_OUTPUT_ENABLE			1
#define PA0_INPUT_ENABLE			0

#define LED3						GPIO_PD4
#define PD4_FUNC					AS_GPIO
#define PD4_OUTPUT_ENABLE			1
#define PD4_INPUT_ENABLE			0

#define	PM_WAKEUP_LEVEL		  		PM_WAKEUP_LEVEL_LOW

// UART
#if ZBHCI_UART
	#error please configurate uart PIN!!!!!!
#endif

// DEBUG
#if UART_PRINTF_MODE
	#define	DEBUG_INFO_TX_PIN	    GPIO_PC4//print
#endif
/*******************************************************************************************************
*********************8258Dongle with 32 Pins: End*****************************************************
*******************************************************************************************************/
#elif defined DONGLE_8258_48 && (DONGLE_8258_48 == 1)
/*******************************************************************************************************
*********************8258Dongle with 48 Pins: Start*****************************************************
*******************************************************************************************************/
//KEY
#define	BUTTON 					    GPIO_PD6
#define PD6_FUNC					AS_GPIO
#define PD6_OUTPUT_ENABLE			0
#define PD6_INPUT_ENABLE			1
#define	PULL_WAKEUP_SRC_PD6			PM_PIN_PULLUP_1M //PM_PIN_PULLUP_10K

//#define BUTTON  BUTTON1

#define	BUTTON2 					GPIO_PD5
#define PD5_FUNC					AS_GPIO
#define PD5_OUTPUT_ENABLE			0
#define PD5_INPUT_ENABLE			1
#define	PULL_WAKEUP_SRC_PD5			PM_PIN_PULLUP_1M //PM_PIN_PULLUP_10K

/************************* Configure counters ***************************************/
#define LITERS_PER_PULSE        10              /* How many liters per one pulse */
#define COUNTERS_OVERFLOW       100000000       /* counters overflow             */

/************************* Configure HOT GPIO ***************************************/
#define HOT_GPIO                GPIO_PB2
#define PB2_INPUT_ENABLE        ON
#define PB2_DATA_OUT            OFF
#define PB2_OUTPUT_ENABLE       OFF
#define PB2_FUNC                AS_GPIO
#define PULL_WAKEUP_SRC_PB2     PM_PIN_PULLUP_1M

/************************* Configure COLD GPIO **************************************/
#define COLD_GPIO               GPIO_PB3
#define PB3_INPUT_ENABLE        ON
#define PB3_DATA_OUT            OFF
#define PB3_OUTPUT_ENABLE       OFF
#define PB3_FUNC                AS_GPIO
#define PULL_WAKEUP_SRC_PB3     PM_PIN_PULLUP_1M

/************************* Configure WATER_LEAK GPIO **************************************/
#define WLEAK1_GPIO             GPIO_PB4
#define PB4_INPUT_ENABLE        ON
#define PB4_DATA_OUT            OFF
#define PB4_OUTPUT_ENABLE       OFF
#define PB4_FUNC                AS_GPIO
#define PULL_WAKEUP_SRC_PB4     PM_PIN_PULLUP_1M

#define WLEAK2_GPIO             GPIO_PB5
#define PB5_INPUT_ENABLE        ON
#define PB5_DATA_OUT            OFF
#define PB5_OUTPUT_ENABLE       OFF
#define PB5_FUNC                AS_GPIO
#define PULL_WAKEUP_SRC_PB5     PM_PIN_PULLUP_1M

//LED
#define LED1						GPIO_PA2
#define PA2_FUNC					AS_GPIO
#define PA2_OUTPUT_ENABLE			1
#define PA2_INPUT_ENABLE			0

#define LED3						GPIO_PA3
#define PA3_FUNC					AS_GPIO
#define PA3_OUTPUT_ENABLE			1
#define PA3_INPUT_ENABLE			0

#define	PM_WAKEUP_LEVEL		  		PM_WAKEUP_LEVEL_LOW

// UART
#if ZBHCI_UART
	#error please configurate uart PIN!!!!!!
#endif

// DEBUG
#if UART_PRINTF_MODE
	#define	DEBUG_INFO_TX_PIN	    GPIO_PC6//print
    #define BAUDRATE                115200
#endif
/*******************************************************************************************************
*********************8258Dongle with 48 Pins: End*****************************************************
*******************************************************************************************************/
#else
	#error "Board defined error!"
#endif


//enum{
//	VK_SW1 = 0x01,
//	VK_SW2 = 0x02
//};
//
/*#define	KB_MAP_NORMAL	{\
		{VK_SW1,}, \
		{VK_SW2,}, }*/

//#define	KB_MAP_NUM		KB_MAP_NORMAL
//#define	KB_MAP_FN		KB_MAP_NORMAL
//
//#define KB_DRIVE_PINS  {NULL }
//#define KB_SCAN_PINS   {BUTTON1,  BUTTON2}

/* Disable C linkage for C++ Compilers: */
#if defined(__cplusplus)
}
#endif
