// Sum the values in an Array

#include <stdio.h>

int sum(int array[], int length);

int main(void){
	
	int a1[] = {1,2,6,9,8,7,6,5};
	int a2[] = {100};
	int a3[] = {99,99};
	int a4[] = {50, -50, 100, -100, 200, -200};
	
	
	printf("a1 sum: %d\n", sum(a1, 8));
	printf("a2 sum: %d\n", sum(a2, sizeof(a2)/sizeof(a2[0])));
	printf("a3 sum: %d\n", sum(a3, sizeof(a3)/sizeof(a3[0])));
	printf("a4 sum: %d\n", sum(a4, sizeof(a4)/sizeof(a4[0])));
,
	return 0;
}

// sums the values in array with the provided length
int sum(int array[], int length){
	// iterate over each array element and add the value to the sum
	int sum_value = 0;
	int i;
	
	for(i = 0; i < length; i++){
		sum_value += array[i];
	}
	
	return sum_value;
}









/*
#include <stdio.h>

int main(void){
	int myArray[] = {1,2,6,9,8,7,6,5};
	int sum = 0, i;
	int length = sizeof(myArray)/sizeof(myArray[0]);
	
	for(i = 0; i < length; i++){
		sum += myArray[i];
	}
	
	printf("%d", sum);
	return 0;
}


*/
