################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/PP0799/STM32CubeIDE/Integration/UI_New/USB_HOST/App/usb_host.c 

C_DEPS += \
./Application/User/USB_HOST/App/usb_host.d 

OBJS += \
./Application/User/USB_HOST/App/usb_host.o 


# Each subdirectory must supply rules for building sources it contributes
Application/User/USB_HOST/App/usb_host.o: C:/Users/PP0799/STM32CubeIDE/Integration/UI_New/USB_HOST/App/usb_host.c Application/User/USB_HOST/App/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32F429xx -c -I"C:/Users/PP0799/STM32CubeIDE/workspace_1.9.0/F429_rtos_fft/Drivers/CMSIS/DSP" -I"C:/Users/PP0799/STM32Cube/Repository/STM32Cube_FW_F4_V1.25.0/Drivers/CMSIS/DSP/Include" -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../Drivers/BSP -I../../TouchGFX/target -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../TouchGFX/App -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I"C:/Users/PP0799/STM32Cube/Repository/STM32Cube_FW_F4_V1.25.0/Middlewares/Third_Party/FreeRTOS/Source/include" -I../../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/generated/videos/include -I../../TouchGFX/gui/include -I../../FATFS/Target -I../../FATFS/App -I../../USB_HOST/App -I../../USB_HOST/Target -I../../Middlewares/Third_Party/FatFs/src -I../../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-User-2f-USB_HOST-2f-App

clean-Application-2f-User-2f-USB_HOST-2f-App:
	-$(RM) ./Application/User/USB_HOST/App/usb_host.d ./Application/User/USB_HOST/App/usb_host.o ./Application/User/USB_HOST/App/usb_host.su

.PHONY: clean-Application-2f-User-2f-USB_HOST-2f-App

