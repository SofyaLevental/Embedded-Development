#include <stdio.h>
#include "fibonacci.h"

void print(int digit){
	printf("%d ", digit);
}

int fibonacci(int n) {
	if (n == 1 || n == 2) {
		return 1;
	} else if (n > 2) {
		return fibonacci(n-2) + fibonacci(n-1);
	} else {
		return 0;
	}
}
//
//int main(){
//	for(int i=1; i<=6; i++){
//		print(fibonacci(i));
//	}
//}
