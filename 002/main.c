#include <stdio.h>


int getSum(int num1, int num2);

int main(){
	
	int firstNum, secondNum, sum;
	
	printf("Enter first number: ");
	scanf("%d", &firstNum);
	printf("Enter second number: ");
	scanf("%d", &secondNum);
	
	sum = getSum(firstNum, secondNum);
	printf("Sum of %d and %d is %d", firstNum, secondNum, sum);
	
	
	
	// -------------------------------------------------------------------------------------
	
	
	return 0;
}

int getSum(int num1, int num2){
	int sum;
	sum = num1 + num2;
	return sum;
}
