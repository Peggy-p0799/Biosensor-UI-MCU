################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/PP0799/STM32Cube/Repository/STM32Cube_FW_F4_V1.25.0/Drivers/CMSIS/DSP/Source/TransformFunctions/arm_cfft_f32.c \
C:/Users/PP0799/STM32Cube/Repository/STM32Cube_FW_F4_V1.25.0/Drivers/CMSIS/DSP/Source/TransformFunctions/arm_cfft_radix8_f32.c \
C:/Users/PP0799/STM32Cube/Repository/STM32Cube_FW_F4_V1.25.0/Drivers/CMSIS/DSP/Source/TransformFunctions/arm_rfft_fast_f32.c 

C_DEPS += \
./Drivers/CMSIS/DSP/Include/arm_cfft_f32.d \
./Drivers/CMSIS/DSP/Include/arm_cfft_radix8_f32.d \
./Drivers/CMSIS/DSP/Include/arm_rfft_fast_f32.d 

OBJS += \
./Drivers/CMSIS/DSP/Include/arm_cfft_f32.o \
./Drivers/CMSIS/DSP/Include/arm_cfft_radix8_f32.o \
./Drivers/CMSIS/DSP/Include/arm_rfft_fast_f32.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/DSP/Include/arm_cfft_f32.o: C:/Users/PP0799/STM32Cube/Repository/STM32Cube_FW_F4_V1.25.0/Drivers/CMSIS/DSP/Source/TransformFunctions/arm_cfft_f32.c Drivers/CMSIS/DSP/Include/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../../Core/Inc -I"C:/Users/PP0799/STM32Cube/Repository/STM32Cube_FW_F4_V1.25.0/Drivers/CMSIS/DSP/Source/TransformFunctions" -I../../Drivers/CMSIS/Include -I../../Drivers/BSP -I../../TouchGFX/target -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/CMSIS/DSP/Include/arm_cfft_radix8_f32.o: C:/Users/PP0799/STM32Cube/Repository/STM32Cube_FW_F4_V1.25.0/Drivers/CMSIS/DSP/Source/TransformFunctions/arm_cfft_radix8_f32.c Drivers/CMSIS/DSP/Include/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../../Core/Inc -I"C:/Users/PP0799/STM32Cube/Repository/STM32Cube_FW_F4_V1.25.0/Drivers/CMSIS/DSP/Source/TransformFunctions" -I../../Drivers/CMSIS/Include -I../../Drivers/BSP -I../../TouchGFX/target -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/CMSIS/DSP/Include/arm_rfft_fast_f32.o: C:/Users/PP0799/STM32Cube/Repository/STM32Cube_FW_F4_V1.25.0/Drivers/CMSIS/DSP/Source/TransformFunctions/arm_rfft_fast_f32.c Drivers/CMSIS/DSP/Include/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I../../Core/Inc -I"C:/Users/PP0799/STM32Cube/Repository/STM32Cube_FW_F4_V1.25.0/Drivers/CMSIS/DSP/Source/TransformFunctions" -I../../Drivers/CMSIS/Include -I../../Drivers/BSP -I../../TouchGFX/target -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS-2f-DSP-2f-Include

clean-Drivers-2f-CMSIS-2f-DSP-2f-Include:
	-$(RM) ./Drivers/CMSIS/DSP/Include/arm_cfft_f32.d ./Drivers/CMSIS/DSP/Include/arm_cfft_f32.o ./Drivers/CMSIS/DSP/Include/arm_cfft_f32.su ./Drivers/CMSIS/DSP/Include/arm_cfft_radix8_f32.d ./Drivers/CMSIS/DSP/Include/arm_cfft_radix8_f32.o ./Drivers/CMSIS/DSP/Include/arm_cfft_radix8_f32.su ./Drivers/CMSIS/DSP/Include/arm_rfft_fast_f32.d ./Drivers/CMSIS/DSP/Include/arm_rfft_fast_f32.o ./Drivers/CMSIS/DSP/Include/arm_rfft_fast_f32.su

.PHONY: clean-Drivers-2f-CMSIS-2f-DSP-2f-Include

