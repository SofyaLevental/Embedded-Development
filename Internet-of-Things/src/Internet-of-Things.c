/*
 ============================================================================
 Name        : Internet-of-Things.c
 Author      : Sofya Levental
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void print(int digit){
	printf("%d ", digit);
}

void fibonacci(int numberOfDigits){
	if(numberOfDigits>0){
		int secondLastDigit = 0;
		print(secondLastDigit);
		if(numberOfDigits>1){
			int lastDigit = 1;
			print(lastDigit);
			if (numberOfDigits>2){
				int i = 2;
				int memoryDigit;
				while(i<numberOfDigits){
					memoryDigit=lastDigit;
					lastDigit=lastDigit+secondLastDigit;
					secondLastDigit=memoryDigit;
					print(lastDigit);
					i++;
				}
			}
		}
	}
}

int main(void) {
	fibonacci(6);
	return 0;
}
