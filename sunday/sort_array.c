//Extinde programul de la punctul 3 pentru a sorta array-ul în ordine crescatoare.
#include <stdio.h>

void sortArray(int arr[], int n) {
    int i, j, tmp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 10, 15, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, n);

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
