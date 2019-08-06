################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../spec/FibonacciSpec.c 

OBJS += \
./spec/FibonacciSpec.o 

C_DEPS += \
./spec/FibonacciSpec.d 


# Each subdirectory must supply rules for building sources it contributes
spec/FibonacciSpec.o: ../spec/FibonacciSpec.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -I"C:\Program Files (x86)\cmocka\include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"spec/FibonacciSpec.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


