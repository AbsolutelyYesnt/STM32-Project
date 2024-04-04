#include "stm32f1xx_hal.h" 
#include "mcp23017.h" 
#include "socket.h" 
#include "network_settings.h"

#define MY_PORT 5000 

uint8_t buffer[1024]; 

I2C_HandleTypeDef hi2c1; 

void MX_I2C1_Init(void)
{
  hi2c1.Instance = I2C1; 
  hi2c1.Init.ClockSpeed = 400000; 
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2; 
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT; 
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE; 
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE; 
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE; 
  if (HAL_I2C_Init(&hi2c1) != HAL_OK) 
  {
    Error_Handler(); 
  }
}

void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0}; 
  
  __HAL_RCC_GPIOB_CLK_ENABLE();  
  
  
  GPIO_InitStruct.Pin = GPIO_PIN_6 | GPIO_PIN_7; 
  GPIO_InitStruct.Mode = GPIO_MODE_AF_OD;  
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH; / 
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct); 
}

void init_MCP23017(void)
{
  uint8_t address[] = {0x20, 0x21, 0x22, 0x23, 0x24}; 
  uint8_t gpio_direction = 0x00; 
  uint8_t pull_ups = 0xFF;  
  
  
  for(int i = 0; i < 5; i++) {
      mcp23017_init(&hi2c1, address[i], gpio_direction, pull_ups); 
  }
}

void toggle_MCP23017_pin(uint8_t address, uint8_t pin)
{
    
    mcp23017_write_pin(&hi2c1, address, pin, !mcp23017_read_pin(&hi2c1, address, pin)); 
}

void init_ethernet(void)
{
  SPI_init();

    W5500_init(); 

    set_network_settings(IP_ADDRESS, SUBNET_MASK, GATEWAY); 

    Ethernet_start();
}

int main(void)
{
  HAL_Init(); 
  MX_GPIO_Init(); 
  MX_I2C1_Init(); 
  
  init_MCP23017(); 
  
  init_ethernet(); 

  int32_t ret; 
  uint8_t sock = 0; 
  
  socket(sock, Sn_MR_TCP, MY_PORT, 0);

  while (1) 
  { 
    if ((ret = listen(sock)) != SOCK_OK) {
      continue; 
    }

    if ((ret = recv(sock, buffer, sizeof(buffer))) <= 0) {
      continue; 
    }

    uint8_t pin_to_toggle = buffer[0] - '0'; 
    toggle_MCP23017_pin(0x20, pin_to_toggle); 

    send(sock, buffer, ret); 

    /* Переключаем каждый пин на всех расширителях ввода/вывода (кусок кода для проверки)
    for(int i = 0; i < 5; i++) { // Цикл по каждому расширителю
        for(int j = 0; j < 16; j++) { // Цикл по каждому пину на расширителе
            toggle_MCP23017_pin(0x20 + i, j); // Вызов функции для переключения состояния пина MCP23017
            HAL_Delay(500); // Задержка в 500 мс
        }
    }*/
  }
}