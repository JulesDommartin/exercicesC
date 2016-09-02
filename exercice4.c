#include <stdio.h>
#include <math.h>

int main() {

    unsigned int nbPairs = 0;

    for (int i = 0; i < 10; i++) {
        unsigned int x = 0;
        printf("Saisissez un nombre entier positif : ");
        scanf("%u", &x);
        if (x % 2 == 0) {
            nbPairs++;
        }
    }

    printf("Le nombre d'entiers pairs est : %u", nbPairs);

    return 0;
}


