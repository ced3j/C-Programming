// Find the mininmum number in an Array

#include <stdio.h>

int main() {
    int arr[] = {5, 9, 10, 11, 4, 3, 8, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int min = arr[0]; 
    int i; 
    
    
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Minimum number is %d\n", min);
    
    return 0;
}




/*


#include <stdio.h>

int main(void){
	
	int myArray[] = {5,9,10,11,4,3,8,6,7};
	int minNum;
	int secondMin;
	int i;
	minNum = myArray[0];
	
	
	printf("First minNum: %d\n", minNum);
	for(i=1; i<9; i++){
		
		printf("Checking myArray[%d] = %d\n", i, myArray[i]);
		if(myArray[i] < minNum){
			minNum = myArray[i];
			printf("New min found: %d\n", minNum);
		} 
	}
	
	printf("Minimum number: %d\n", minNum);
	return 0;
	
}


*/


// Not: 

/*
sizeof(arr) verilen dizinin bellekte kaplad��� 
toplam byte boyutunu verir. sizeof(arr[0]) ise 
dizideki her bir eleman�n bellekte kaplad��� byte boyutunu verir.
Bu nedenle sizeof(arr) / sizeof(arr[0]) ifadesi, dizinin eleman say�s�n� verir.

Dizinin eleman say�s�n� hesaplamak i�in bu y�ntem kullan�l�r 
��nk� bir dizinin boyutu, program�n �al��ma zaman�nda 
de�i�tirilemez ve derleme zaman�nda belirlenir. 
Bu nedenle, kodun �al��mas� s�ras�nda, dizinin ka� 
elemana sahip oldu�unu bilemememiz gerekir.

sizeof(arr) / sizeof(arr[0]) ifadesi, dizinin eleman 
say�s�n� hesaplamak i�in g�venli bir y�ntemdir ve �al��ma 
zaman�nda do�ru sonucu verir.

	Yani:
		sizeof(arr) yukar�daki �rnek i�in
		i�erisinde 9 adet int de�er tutuyor her birinin bellekte kaplad��� alan 4byte ise
		9*4 = 36 olacakt�r
		
		sizeof(arr[0]) ile de ilk de�erin byte de�erine yani 4'e b�ld���m�zde
		36/4 = 9 
		Bu da bize eleman say�s�n� verdi k�sacas�

*/


