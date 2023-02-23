// Max number in an array

#include <stdio.h>

int findMax(int arr[], int n);
int main(void){
	int arr[] = {8, 7, 5, 3, 9, 10, 1, 2, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int max = findMax(arr, n);
	
	printf("The max number is: %d", max);
	
	return 0;

}


int findMax(int arr[], int n){
	int max = arr[0];
	int i;
	
	for(i=1; i<n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	return max;
}







/*

	int myArray[] = {8,7,5,3,9,10,1,2,4};
	int max = myArray[0];
	int size = sizeof(myArray) / sizeof(myArray[0]);
	int i;
	for(i=1; i<size; i++){
		if(myArray[i] > max){
			max = myArray[i];
		}
	}
	
	printf("Maximum number is : %d ", max);
	
	
	return 0;
	
	
	


*/
