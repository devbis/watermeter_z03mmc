/********************************************************************************************************
 * @file    board_8258_03mmc.h
 *
 * @brief   This is the header file for board_8258_lywsd03mmc
 *
 *******************************************************************************************************/

#pragma once

/* Enable C linkage for C++ Compilers: */
#if defined(__cplusplus)
extern "C" {
#endif

#define I2C_CLOCK					100000
#define I2C_GPIO_GROUP				I2C_GPIO_GROUP_C2C3

#define	PM_WAKEUP_LEVEL		  		PM_WAKEUP_LEVEL_LOW

/************************* Configure KEY GPIO ***************************************/
#define BUTTON               		GPIO_PA5  // reset test point
#define PA5_FUNC			  		AS_GPIO
#define PA5_OUTPUT_ENABLE	  		0
#define PA5_INPUT_ENABLE	  		1
#define	PULL_WAKEUP_SRC_PA5	  		PM_PIN_PULLUP_10K

#define PM_WAKEUP_LEVEL         PM_WAKEUP_LEVEL_LOW // only for KEY

/************************* Configure counters ***************************************/
#define LITERS_PER_PULSE        10              /* How many liters per one pulse */
#define COUNTERS_OVERFLOW       100000000       /* counters overflow             */

/************************* Configure HOT GPIO ***************************************/
#define HOT_GPIO                GPIO_PB7  // B1 point
#define PB7_INPUT_ENABLE        1
#define PB7_DATA_OUT            0
#define PB7_OUTPUT_ENABLE       0
#define PB7_FUNC                AS_GPIO
#define PULL_WAKEUP_SRC_PB7     PM_PIN_PULLUP_1M

/************************* Configure COLD GPIO **************************************/
#define COLD_GPIO               GPIO_PD7  // P7 point
#define PD7_INPUT_ENABLE        1
#define PD7_DATA_OUT            0
#define PD7_OUTPUT_ENABLE       0
#define PD7_FUNC                AS_GPIO
#define PULL_WAKEUP_SRC_PD7     PM_PIN_PULLUP_1M

// UART
#if ZBHCI_UART
	#error please configurate uart PIN!!!!!!
#endif

// DEBUG
#if UART_PRINTF_MODE
	#define	DEBUG_INFO_TX_PIN	    GPIO_SWS //print
	#define BAUDRATE                115200
#endif


enum{
	VK_SW1 = 0x01,
	// VK_SW2 = 0x02
};

#define	KB_MAP_NORMAL	{\
		{VK_SW1,}, \
		}

#define	KB_MAP_NUM		KB_MAP_NORMAL
#define	KB_MAP_FN		KB_MAP_NORMAL

#define KB_DRIVE_PINS  {NULL }
#define KB_SCAN_PINS   {BUTTON }


/* Disable C linkage for C++ Compilers: */
#if defined(__cplusplus)
}
#endif
