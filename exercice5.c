#include <stdio.h>
#include <math.h>

int main() {

    unsigned int i, j;

    printf("Saisir la borne inf puis la borne sup pour la recherche : ");
    scanf("%u %u", &i, &j);

    printf("On echange les valeurs des bornes pour que i < j");
    if (i > j) {
        unsigned int temp = i;
        i = j;
        j = temp;
    }

    printf("Voici les multiples de 3 :\n");

    unsigned int bornInf = i + (3 - i % 3);

    for (int x = bornInf; x <= j; x = x+3) {
        printf("%u ", x);
    }

    return 0;
}



