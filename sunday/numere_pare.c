//Scrie un program care să afiseze toate numerele pare intre 1 și 100 folosind o bucla for.
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
