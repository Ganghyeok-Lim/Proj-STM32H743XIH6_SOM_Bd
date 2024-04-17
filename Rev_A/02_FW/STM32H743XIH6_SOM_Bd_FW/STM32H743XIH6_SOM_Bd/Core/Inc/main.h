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
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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
#define MCU_SPI1_MOSI_Pin GPIO_PIN_5
#define MCU_SPI1_MOSI_GPIO_Port GPIOB
#define MCU_SPI1_MISO_Pin GPIO_PIN_9
#define MCU_SPI1_MISO_GPIO_Port GPIOG
#define MCU_USART2_TX_Pin GPIO_PIN_5
#define MCU_USART2_TX_GPIO_Port GPIOD
#define MCU_SDMMC1_D2_Pin GPIO_PIN_10
#define MCU_SDMMC1_D2_GPIO_Port GPIOC
#define MCU_I2S2_CK_Pin GPIO_PIN_1
#define MCU_I2S2_CK_GPIO_Port GPIOI
#define MCU_I2S2_WS_Pin GPIO_PIN_0
#define MCU_I2S2_WS_GPIO_Port GPIOI
#define MCU_UART8_TX_Pin GPIO_PIN_1
#define MCU_UART8_TX_GPIO_Port GPIOE
#define MCU_I2C1_SCL_Pin GPIO_PIN_6
#define MCU_I2C1_SCL_GPIO_Port GPIOB
#define MCU_SPI1_SCK_Pin GPIO_PIN_11
#define MCU_SPI1_SCK_GPIO_Port GPIOG
#define MCU_SDMMC1_D3_Pin GPIO_PIN_11
#define MCU_SDMMC1_D3_GPIO_Port GPIOC
#define MCU_SWD_SWCLK_Pin GPIO_PIN_14
#define MCU_SWD_SWCLK_GPIO_Port GPIOA
#define MCU_I2S2_SDI_Pin GPIO_PIN_2
#define MCU_I2S2_SDI_GPIO_Port GPIOI
#define MCU_FDCAN1_RX_Pin GPIO_PIN_14
#define MCU_FDCAN1_RX_GPIO_Port GPIOH
#define MCU_RCC_OSC32_IN_Pin GPIO_PIN_14
#define MCU_RCC_OSC32_IN_GPIO_Port GPIOC
#define MCU_SPI4_SCK_Pin GPIO_PIN_2
#define MCU_SPI4_SCK_GPIO_Port GPIOE
#define MCU_UART8_RX_Pin GPIO_PIN_0
#define MCU_UART8_RX_GPIO_Port GPIOE
#define MCU_I2C1_SDA_Pin GPIO_PIN_7
#define MCU_I2C1_SDA_GPIO_Port GPIOB
#define MCU_SWD_TRACESWO_Pin GPIO_PIN_3
#define MCU_SWD_TRACESWO_GPIO_Port GPIOB
#define MCU_SDMMC1_CK_Pin GPIO_PIN_12
#define MCU_SDMMC1_CK_GPIO_Port GPIOC
#define MCU_I2S2_SDO_Pin GPIO_PIN_3
#define MCU_I2S2_SDO_GPIO_Port GPIOI
#define MCU_SWD_SWDIO_Pin GPIO_PIN_13
#define MCU_SWD_SWDIO_GPIO_Port GPIOA
#define MCU_SPI4_MISO_Pin GPIO_PIN_5
#define MCU_SPI4_MISO_GPIO_Port GPIOE
#define MCU_FDCAN1_TX_Pin GPIO_PIN_9
#define MCU_FDCAN1_TX_GPIO_Port GPIOB
#define MCU_SDMMC1_CMD_Pin GPIO_PIN_2
#define MCU_SDMMC1_CMD_GPIO_Port GPIOD
#define MCU_USART1_RX_Pin GPIO_PIN_10
#define MCU_USART1_RX_GPIO_Port GPIOA
#define MCU_USART1_TX_Pin GPIO_PIN_9
#define MCU_USART1_TX_GPIO_Port GPIOA
#define MCU_SPI4_MOSI_Pin GPIO_PIN_6
#define MCU_SPI4_MOSI_GPIO_Port GPIOE
#define MCU_SDMMC1_D0_Pin GPIO_PIN_8
#define MCU_SDMMC1_D0_GPIO_Port GPIOC
#define MCU_SDMMC1_D1_Pin GPIO_PIN_9
#define MCU_SDMMC1_D1_GPIO_Port GPIOC
#define MCU_RCC_MCO1_Pin GPIO_PIN_8
#define MCU_RCC_MCO1_GPIO_Port GPIOA
#define MCU_I2S2_MCK_Pin GPIO_PIN_6
#define MCU_I2S2_MCK_GPIO_Port GPIOC
#define MCU_I2C2_SCL_Pin GPIO_PIN_1
#define MCU_I2C2_SCL_GPIO_Port GPIOF
#define MCU_I2C2_SDA_Pin GPIO_PIN_0
#define MCU_I2C2_SDA_GPIO_Port GPIOF
#define MCU_RCC_OSC_IN_Pin GPIO_PIN_0
#define MCU_RCC_OSC_IN_GPIO_Port GPIOH
#define MCU_OPAMP2_VINP_Pin GPIO_PIN_9
#define MCU_OPAMP2_VINP_GPIO_Port GPIOE
#define MCU_OPAMP1_VINM_Pin GPIO_PIN_7
#define MCU_OPAMP1_VINM_GPIO_Port GPIOA
#define MCU_DAC1_OUT2_Pin GPIO_PIN_5
#define MCU_DAC1_OUT2_GPIO_Port GPIOA
#define MCU_OPAMP1_VOUT_Pin GPIO_PIN_4
#define MCU_OPAMP1_VOUT_GPIO_Port GPIOC
#define MCU_OPAMP2_VINM_Pin GPIO_PIN_8
#define MCU_OPAMP2_VINM_GPIO_Port GPIOE
#define MCU_I2C3_SDA_Pin GPIO_PIN_8
#define MCU_I2C3_SDA_GPIO_Port GPIOH
#define MCU_USART2_RX_Pin GPIO_PIN_3
#define MCU_USART2_RX_GPIO_Port GPIOA
#define MCU_DAC1_OUT1_Pin GPIO_PIN_4
#define MCU_DAC1_OUT1_GPIO_Port GPIOA
#define MCU_OPAMP1_VINP_Pin GPIO_PIN_0
#define MCU_OPAMP1_VINP_GPIO_Port GPIOB
#define MCU_OPAMP2_VOUT_Pin GPIO_PIN_7
#define MCU_OPAMP2_VOUT_GPIO_Port GPIOE
#define MCU_I2C3_SCL_Pin GPIO_PIN_7
#define MCU_I2C3_SCL_GPIO_Port GPIOH

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
