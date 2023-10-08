//Scrie un program în C care sa gasească si să afișeze valoarea maximă si pozitiile acesteia intr-un array.
#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15, 10, 20};
    int max = arr[0];
    int maxIndex[5];
    int count = 0;

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
            count = 0;
            maxIndex[count] = i;
            count++;
        } else if (arr[i] == max) {
            maxIndex[count] = i;
            count++;
        }
    }

    printf("Valoarea maxima este %d\n", max);
    printf("Pozitiile valorii maxime: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", maxIndex[i]);
    }

    return 0;
}

