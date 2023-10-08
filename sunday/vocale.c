//Scrie un program care sa numere si sa afișeze numărul de vocale dintr-un sir de caractere dat.
#include <stdio.h>

int main() {
    char s[100];
    int count = 0;

    printf("Introdu un sir de caractere: ");
    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
           || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            count++;
        }
    }

    printf("Numarul de vocale este: %d", count);

    return 0;
}

