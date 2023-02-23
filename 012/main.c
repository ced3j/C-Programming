// Compute the Average of an Array

#include <stdio.h>

double avg(double array[], int length);

int main(void)
{
  // example arrays
  double arr1[] = {5.2,9.3,6.5,4.1,7.8};
  double arr2[] = {10.0};
  double arr3[] = {9.8,9.6};
  double arr4[] = {-50,50,-100,100,-2,2};

  // call the average function to calculate the average, print the results
  printf("arr1 avg: %.2lf\n", avg(arr1,5));
  printf("arr2 avg: %.2lf\n", avg(arr2,1));
  printf("arr3 avg: %.2lf\n", avg(arr3,2));
  printf("arr4 avg: %.2lf\n", avg(arr4,6));

  return 0;
}

// computes the average of the array with the given length
double avg(double array[], int length)
{
  // sum the array elements & divide the sum by the length (i.e. # of elements)
  double sum = 0;
  int i;
  for (i = 0; i < length; i++){
    sum = sum + array[i];
  }
  return sum / length;
}






/*

#include <stdio.h>

double sum(double arr[], double length);

int main(void){
	double arr1[] = {1,2,3,4,5};
	double arr2[] = {5,-2,4,-1};
	double arr3[] = {1.2,4.1,6.9,10.2};
	
	printf("sum1: %.2lf\n", sum(arr1, sizeof(arr1)/sizeof(arr1[0])));
	printf("sum2: %.2lf\n", sum(arr2, sizeof(arr2)/sizeof(arr2[0])));
	printf("sum3: %.2lf\n", sum(arr3, sizeof(arr3)/sizeof(arr3[0])));
}


double sum(double arr[], double length){
	int i;
	double sum = 0;
	
	for(i = 0; i < length; i++){
		sum += arr[i];
	}
	return sum;
}


*/



/*

	int arr[] = {1,2,3,4,5,6};
	int sum = 0;
	int size = sizeof(arr)/sizeof(arr[0]);
	int i;
	
	for(i = 0; i < size; i++){
		sum+= arr[i];
	}
	
	printf("sum of arr[] = %d", sum);
	
	
	return 0;


*/
