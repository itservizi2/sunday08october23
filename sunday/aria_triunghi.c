//Creeaza o functie care să calculeze aria unui triunghi pe baza datelor introduse de la tastatura.
#include <stdio.h>

float ariaTriunghi(float baza, float inaltime) {
    return 0.5 * baza * inaltime;
}

int main() {
    float b, h;

    printf("Introdu baza: ");
    scanf("%f", &b);

    printf("Introdu inaltimea: ");
    scanf("%f", &h);

    printf("Aria triunghiului este: %f", ariaTriunghi(b, h));

    return 0;
}

