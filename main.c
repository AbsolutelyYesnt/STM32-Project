/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/

#include <cmsis_gcc.h>
#include <stm32f1xx_hal_def.h>
#include <stm32f1xx_hal_flash.h>
#include <stm32f1xx_hal_rcc.h>
#include <stm32f1xx_hal_rcc_ex.h>
#include "main.h"


/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include <Wire.h>
#include <MCP23x17.h>
#include <MCP23017.h>//https://voltiq.ru/datasheets/MCP23x17.zip

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
CMCP23017 WRITEHERENAMEOFPROBLEM_1_0_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_1_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_2_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_3_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_4_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_5_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_6_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_7_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_8_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_9_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_10_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_11_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_12_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_13_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_14_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_1_15_PIN;
//Создаем объекты под пины первого расширителя

CMCP23017 WRITEHERENAMEOFPROBLEM_2_0_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_1_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_2_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_3_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_4_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_5_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_6_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_7_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_8_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_9_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_10_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_11_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_12_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_13_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_14_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_2_15_PIN;
//Создаем объекты под пины второго расширителя

CMCP23017 WRITEHERENAMEOFPROBLEM_3_0_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_1_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_2_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_3_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_4_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_5_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_6_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_7_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_8_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_9_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_10_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_11_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_12_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_13_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_14_PIN;
CMCP23017 WRITEHERENAMEOFPROBLEM_3_15_PIN;
//Создаем объекты под пины третьего расширителя

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */
void setup() {
	  Wire.begin();//Указываем адрессный номер расширителя? для первого 1?
	  for (int i=0; i<16; i++)//Конфигурируем пины с помощью цикла
	  {
		  WRITEHERENAMEOFPROBLEM_1_0_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_1_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_2_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_3_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_4_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_5_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_6_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_7_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_8_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_9_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_10_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_11_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_12_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_13_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_14_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_1_15_PIN.pinMode(i, OUTPUT);
	    };

}
void setup() {
	  Wire.begin(2);//Указываем адрессный номер расширителя? для вторго 2??
	  for (int i=0; i<16; i++) //Конфигурируем пины с помощью цикла
	  {
		  WRITEHERENAMEOFPROBLEM_2_0_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_1_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_2_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_3_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_4_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_5_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_6_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_7_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_8_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_9_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_10_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_11_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_12_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_13_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_14_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_2_15_PIN.pinMode(i, OUTPUT);
	    };

}
void setup() {
	  Wire.begin(3);//Указываем адрессный номер расширителя? для третьего 3???
	  for (int i=0; i<16; i++) //Конфигурируем пины с помощью цикла
	  {
		  WRITEHERENAMEOFPROBLEM_3_0_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_1_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_2_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_3_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_4_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_5_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_6_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_7_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_8_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_9_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_10_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_11_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_12_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_13_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_14_PIN.pinMode(i, OUTPUT);
		  WRITEHERENAMEOFPROBLEM_3_15_PIN.pinMode(i, OUTPUT);
	    };

}

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
	int i=0;
  /* USER CODE BEGIN 1 */
switch(i)
	{
case 0://В каждом кейсе будет опредленый набор неисправностей
	HAL_GPIO_WritePin(/*название порта*/, /*название пина*/, GPIO_PIN_RESET);

case 1:
	HAL_GPIO_WritePin(/*название порта*/, /*название пина*/, GPIO_PIN_RESET);

case 2:
	HAL_GPIO_WritePin(/*название порта*/, /*название пина*/, GPIO_PIN_RESET);

case 3:
	HAL_GPIO_WritePin(/*название порта*/, /*название пина*/, GPIO_PIN_RESET);

case 4:
	HAL_GPIO_WritePin(/*название порта*/, /*название пина*/, GPIO_PIN_RESET);

case 5:
	HAL_GPIO_WritePin(/*название порта*/, /*название пина*/, GPIO_PIN_RESET);

case 6:
	HAL_GPIO_WritePin(/*название порта*/, /*название пина*/, GPIO_PIN_RESET);

case 7:
	HAL_GPIO_WritePin(/*название порта*/, /*название пина*/, GPIO_PIN_RESET);

	//ДОБАВИТЬ КОЛИЧЕСТВО СЦЕНАРИЕВ И ОПРЕДЕЛИТЬ НЕИСПРАВНОСТИ ДЛЯ НИХ!!!!!!!!!!
	}
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
