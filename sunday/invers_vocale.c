//Extinde programul de la punctul 4 pentru a inversa șirul de caractere.


#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    int i;
    char temp;

    for(i=0; i < len/2; i++) {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main() {
    char s[100];

    printf("Introdu un sir de caractere: ");
    scanf("%s", s);

    reverseString(s);

    printf("Sirul inversat este: %s", s);

    return 0;
}