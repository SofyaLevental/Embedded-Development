################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../test/fibonacci_test.c 

OBJS += \
./test/fibonacci_test.o 

C_DEPS += \
./test/fibonacci_test.d 


# Each subdirectory must supply rules for building sources it contributes
test/fibonacci_test.o: ../test/fibonacci_test.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -I"C:\Program Files (x86)\cmocka\include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"test/fibonacci_test.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


