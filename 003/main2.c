#include <stdio.h>


int getSum(int num1, int num2);
int getDifference(int num1, int num2);
int getProduct(int num1, int num2);
float getQuotient(int num1, int num2);
int getModulo(int num1, int num2);


int main(){
	int firstNum, secondNum;
	int sum, difference, product, modulo;
	float quotient;
	
	printf("Enter first number: ");
	scanf("%d", &firstNum);
	printf("Enter second number: ");
	scanf("%d", &secondNum);
	
	sum = getSum(firstNum, secondNum);
	difference = getDifference(firstNum, secondNum);
	product = getProduct(firstNum, secondNum);
	quotient = getQuotient(firstNum, secondNum);
	modulo = getModulo(firstNum, secondNum);
	
	printf("\nSum = %d", sum);
	printf("\nDifference = %d", difference);
	printf("\nMultiplication = %d", product);
	printf("\nDivision = %.3f", quotient);
	printf("\nRemainder = %d", modulo);
	
	return 0;	
}

int getSum(int num1, int num2){
	return num1+num2;
}

int getDifference(int num1, int num2){
	return num1-num2;
}

int getProduct(int num1, int num2){
	return num1*num2;
}

float getQuotient(int num1, int num2){
	return (float)num1 / num2;
}

int getModulo(int num1, int num2){
	return num1 % num2;
}
