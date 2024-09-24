/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "EX_1.h"
#include "EX_2.h"
#include "EX_3.h"
#include "EX_4.h"
#include "EX_5.h"
#include "EX_6.h"
#include "EX_7.h"
#include "EX_8.h"
#include "EX_9.h"
#include "EX_10.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_TEST_Pin GPIO_PIN_2
#define LED_RED_TEST_GPIO_Port GPIOA
#define LED_GREEN_TEST_Pin GPIO_PIN_3
#define LED_GREEN_TEST_GPIO_Port GPIOA
#define LED_YELLOW_TEST_Pin GPIO_PIN_4
#define LED_YELLOW_TEST_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_RED_1_Pin GPIO_PIN_7
#define LED_RED_1_GPIO_Port GPIOA
#define LED_YELLOW_1_Pin GPIO_PIN_0
#define LED_YELLOW_1_GPIO_Port GPIOB
#define LED_GREEN_1_Pin GPIO_PIN_1
#define LED_GREEN_1_GPIO_Port GPIOB
#define LED_RED_2_Pin GPIO_PIN_2
#define LED_RED_2_GPIO_Port GPIOB
#define LED_YELLOW_2_Pin GPIO_PIN_10
#define LED_YELLOW_2_GPIO_Port GPIOB
#define LED_GREEN_2_Pin GPIO_PIN_11
#define LED_GREEN_2_GPIO_Port GPIOB
#define LED_RED_3_Pin GPIO_PIN_12
#define LED_RED_3_GPIO_Port GPIOB
#define LED_YELLOW_3_Pin GPIO_PIN_13
#define LED_YELLOW_3_GPIO_Port GPIOB
#define LED_GREEN_3_Pin GPIO_PIN_14
#define LED_GREEN_3_GPIO_Port GPIOB
#define LED_RED_4_Pin GPIO_PIN_15
#define LED_RED_4_GPIO_Port GPIOB
#define LED_YELLOW_4_Pin GPIO_PIN_8
#define LED_YELLOW_4_GPIO_Port GPIOA
#define LED_GREEN_4_Pin GPIO_PIN_9
#define LED_GREEN_4_GPIO_Port GPIOA
#define a_SEG_Pin GPIO_PIN_10
#define a_SEG_GPIO_Port GPIOA
#define b_SEG_Pin GPIO_PIN_11
#define b_SEG_GPIO_Port GPIOA
#define c_SEG_Pin GPIO_PIN_12
#define c_SEG_GPIO_Port GPIOA
#define d_SEG_Pin GPIO_PIN_13
#define d_SEG_GPIO_Port GPIOA
#define e_SEG_Pin GPIO_PIN_14
#define e_SEG_GPIO_Port GPIOA
#define f_SEG_Pin GPIO_PIN_15
#define f_SEG_GPIO_Port GPIOA
#define g_SEG_Pin GPIO_PIN_3
#define g_SEG_GPIO_Port GPIOB
#define LED_10_Pin GPIO_PIN_7
#define LED_10_GPIO_Port GPIOA
#define LED_9_Pin GPIO_PIN_0
#define LED_9_GPIO_Port GPIOB
#define LED_8_Pin GPIO_PIN_1
#define LED_8_GPIO_Port GPIOB
#define LED_11_Pin GPIO_PIN_2
#define LED_11_GPIO_Port GPIOB
#define LED_12_Pin GPIO_PIN_10
#define LED_12_GPIO_Port GPIOB
#define LED_1_Pin GPIO_PIN_11
#define LED_1_GPIO_Port GPIOB
#define LED_2_Pin GPIO_PIN_12
#define LED_2_GPIO_Port GPIOB
#define LED_3_Pin GPIO_PIN_13
#define LED_3_GPIO_Port GPIOB
#define LED_4_Pin GPIO_PIN_14
#define LED_4_GPIO_Port GPIOB
#define LED_7_Pin GPIO_PIN_15
#define LED_7_GPIO_Port GPIOB
#define LED_6_Pin GPIO_PIN_8
#define LED_6_GPIO_Port GPIOA
#define LED_5_Pin GPIO_PIN_9
#define LED_5_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
