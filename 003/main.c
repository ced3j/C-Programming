#include <stdio.h>

int main(){
	int firstNum, secondNum;
	int sum, difference, product, modulo;
	float quotient;
	
	printf("Enter first number: ");
	scanf("%d", &firstNum);
	printf("Enter second number: ");
	scanf("%d", &secondNum);
	
	sum = firstNum + secondNum;
	difference = firstNum - secondNum;
	product = firstNum * secondNum;
	quotient = (float)firstNum / secondNum;
	modulo = firstNum % secondNum;
	
	printf("\nSum = %d", sum);
	printf("\nDifference = %d", difference);
	printf("\nMultiplication = %d", product);
	printf("\nDivision = %.3f", quotient);
	printf("\nRemainder = %d", modulo);
}
