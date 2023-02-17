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
sizeof(arr) verilen dizinin bellekte kapladığı 
toplam byte boyutunu verir. sizeof(arr[0]) ise 
dizideki her bir elemanın bellekte kapladığı byte boyutunu verir.
Bu nedenle sizeof(arr) / sizeof(arr[0]) ifadesi, dizinin eleman sayısını verir.

Dizinin eleman sayısını hesaplamak için bu yöntem kullanılır 
çünkü bir dizinin boyutu, programın çalışma zamanında 
değiştirilemez ve derleme zamanında belirlenir. 
Bu nedenle, kodun çalışması sırasında, dizinin kaç 
elemana sahip olduğunu bilemememiz gerekir.

sizeof(arr) / sizeof(arr[0]) ifadesi, dizinin eleman 
sayısını hesaplamak için güvenli bir yöntemdir ve çalışma 
zamanında doğru sonucu verir.

	Yani:
		sizeof(arr) yukarıdaki örnek için
		içerisinde 9 adet int değer tutuyor her birinin bellekte kapladığı alan 4byte ise
		9*4 = 36 olacaktır
		
		sizeof(arr[0]) ile de ilk değerin byte değerine yani 4'e böldüğümüzde
		36/4 = 9 
		Bu da bize eleman sayısını verdi kısacası

*/


