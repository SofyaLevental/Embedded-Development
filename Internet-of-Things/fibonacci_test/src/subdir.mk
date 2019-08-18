################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/fibonacci_test.c 

OBJS += \
./src/fibonacci_test.o 

C_DEPS += \
./src/fibonacci_test.d 


# Each subdirectory must supply rules for building sources it contributes
src/fibonacci_test.o: ../src/fibonacci_test.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -I"C:\Program Files (x86)\cmocka\include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/fibonacci_test.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


