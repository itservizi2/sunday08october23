//Scrie un program pentru a afisa numerele impare intre 1 și 100 folosind o bucla while.
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 100) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
