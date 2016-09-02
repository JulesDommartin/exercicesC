#include <stdio.h>
#include <math.h>

int main() {

    unsigned int nb, res = 1;
    printf("Saisir un nombre pour le calcul de sa factorielle : ");
    scanf("%u", &nb);

    for (unsigned int i = 1; i <= nb; i++) {
        res *= i;
    }

    printf("Le resultat de la factorielle est : %u\n", res);

    return 0;
}


