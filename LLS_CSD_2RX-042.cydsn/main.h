/*****************************************************************************
* File Name: main.h
*
* Version: 1.00
*
* Description: Demonstrates Liquid Level Sensing (LLS) using CapSense CSD with 2 sensors.
*
* Related Document: Code example CE202479
*
* Hardware Dependency: See code example CE202479
*
******************************************************************************
* Copyright (2015), Cypress Semiconductor Corporation.
******************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*****************************************************************************/
#include <project.h>
#include "CyFlash.h"


/* Function prototypes */


/* Project Constants */
/* CapSense tuning constants */
#define SENSOR_MODDAC       (15u)          /* Modulation DAC current setting */
#define SENSOR_CMPDAC       (0u)           /* Compensation DAC current setting */
#define SENSOR_SENDIV       (8u)           /* Sensor clock divider */
#define SENSOR_MODDIV       (8u)           /* Modulation clock divider */
#define SENSOR0_EMPTYCAL    (0u)           /* Empty counts value for sensor 0. Used to calculate diff counts. */
#define SENSOR1_EMPTYCAL    (0u)           /* Empty counts value for sensor 1. Used to calculate diff counts. */
/* Liquid Level constants */
#define NUMSENSORS          (2u)           /* Number of CapSense sensors */
#define DENOM_OFFSET        (100u)         /* Denominator offset counts */
#define LEVELMM_MAX         (153u)         /* Max sensor height in mm */
#define LEVELPERCENT_MAX    (0x6400)       /* Max sensor height in percent. 0x6400 = 100% in fixed precision 8.8 */
#define LEVELSLOPE          (0x0100u)      /* Slope adjustment of level measurement. 0x0100 = 1.0 in fixed precision 8.8 */
#define LEVELOFFSET         (0u)           /* Offset adjustment of level measurement */
/* General constants */
#define TRUE                (1u)
#define FALSE               (0u)
/* EEPROM constants */
#define Em_EEPROM_FLASH_BASE_ADDR        (CYDEV_FLASH_BASE)
#define Em_EEPROM_FLASH_SIZE             (CYDEV_FLASH_SIZE)
#define Em_EEPROM_FLASH_END_ADDR         (Em_EEPROM_FLASH_BASE_ADDR + Em_EEPROM_FLASH_SIZE)
#define Em_EEPROM_ROWS_IN_ARRAY          (CY_FLASH_SIZEOF_ARRAY/CY_FLASH_SIZEOF_ROW)



/* [] END OF FILE */
