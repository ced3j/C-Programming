// Counting the number of a value in an array


#include <stdio.h>

int count(int array[], int n, int target);


int main(void){
	int myArray[] = {4,9,7,6,5,8,3,2,1,5,4,4,4,4,3,3,3};
	int size = sizeof(myArray)/sizeof(myArray[0]);
	int target = 3;
	
	printf("Numbers of %ds found: %d", target, count(myArray, size, target));
	
	return 0;
	
}


int count(int array[], int n, int target){
	int i;
	int count = 0;
	for(i = 0; i<n; i++){
		if(array[i] == target){
			count++;
		}
	}
	
	return count;
}




/*
	int myArray[] = {4,9,7,6,5,8,3,2,1,5,4,4,4,4};
	int count = 0;
	int to_find = 4;
	int size = sizeof(myArray)/sizeof(myArray[0]);
	int i;
	
	for(i=0; i<size; i++){
		if(myArray[i] == to_find){
			count++;
		}
	}
	
	printf("Numbers of %ds found: %d", to_find, count);
	return 0;

*/
