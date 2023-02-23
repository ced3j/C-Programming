// Reverse an array

#include <stdio.h>

void reverseArray(int arr[], int n) {
	int i;
    for (i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, a;
    
    
    printf("Original array: ");
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, n);

    printf("\nReversed array: ");
    for (a = 0; a < n; a++) {
        printf("%d ", arr[a]);
    }

    return 0;
}
