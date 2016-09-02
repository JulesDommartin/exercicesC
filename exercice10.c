#include <stdio.h>
#include <string.h>
#include <math.h>

int getBinLength (int x) {
    int i = 0;
    while (pow(2,i) < x) {
        i++;
    }
    return i - 1;
}

int main(void) {

    int x, res = 0, length = 8;
    char y[16];

    printf("-- Essai de conversion decimal -> binaire --\n");
    printf("Saisir la valeur a convertir en binaire : ");
    scanf("%d", &x);

    int remainder;
    long binary = 0, i = pow(10, getBinLength(x));

    while(x != 0) {
        remainder = x%2;
        x = x/2;
        binary += (remainder*i);
        i = i/10;
    }

    printf("Conversion en binaire (a partir du bit de poids faible) : \n%d\n\n", binary);

    printf("-- Essai de conversion binaire --> decimal --");
    printf("Saisir a partir du bit de poids fort (et terminer par #) : ");
    scanf("%s", y);

    for (int i = 0; i < strlen(y); i++) {
        if (y[i] == '#')
            break;
        (y[i] == '1') ? res += pow(2, strlen(y) - 2 - i) : 0;
    }

    printf("Valeur lue : %d", res);

    return 0;
}
