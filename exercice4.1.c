#include <stdio.h>
#include <math.h>

int main() {

    unsigned int nbPairs = 0;
    int continuer = 1;

    while (continuer) {
        unsigned int x = 0;
        printf("Saisissez un nombre entier positif : ");
        scanf("%u", &x);
        if (x % 2 == 0) {
            nbPairs++;
        }
        printf("\nContinuer ? ");
        scanf("%i", &continuer);
    }

    printf("Le nombre d'entiers pairs est : %u", nbPairs);

    return 0;
}


