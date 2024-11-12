/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
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

#include <stdint.h>
#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


void task1_handler(void);
void task2_handler(void);
void task3_handler(void);
void task4_handler(void);

int main(void)
{
    /* Loop forever */
	for(;;);
}

void task1_handler(void)
{
	while(1)
	{
		printf("this is task 1\n");
	}
}
void task2_handler(void)
{
	while(1)
	{
		printf("this is task 2\n");
	}
}
void task3_handler(void)
{
	while(1)
	{
		printf("this is task 3\n");
	}
}
void task4_handler(void)
{
	while(1)
	{
		printf("this is task 4\n");
	}
}


