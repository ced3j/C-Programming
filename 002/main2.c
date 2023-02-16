#include <stdio.h>

int main(){
	int firstNum, secondNum, sum;
	
	int *firstNumPtr, *secondNumPtr;
	printf("Enter two numbers\n");
	scanf("%d %d", &firstNum, &secondNum);
	
	firstNumPtr = &firstNum;
	secondNumPtr = &secondNum;
	
	sum = *firstNumPtr + *secondNumPtr;
	printf("Sum = %d", sum);
	return 0;
}
