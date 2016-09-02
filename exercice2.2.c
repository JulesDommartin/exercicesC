#include <stdio.h>
#include <math.h>

int main() {
    unsigned int x, y, res = 0;
    printf("Saisir la borne inf, puis la borne sup pour le calcul de la somme : ");
    scanf("%u %u", &x, &y);

    while (x > y) {
        printf("Attention, saisir la borne inf puis la borne sup : ");
        scanf("%u %u", &x, &y);
    }

    for (int i = x; i <= y; i++) {
        res += i;
    }

    printf("La somme des entiers de %u a %u est %u\n\n", x, y, res);

    return 0;
}

