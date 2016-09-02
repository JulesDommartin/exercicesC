#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {

    unsigned int min = INT_MAX, max = 0;

    for (int i = 0; i < 10; i++) {
        unsigned int x;
        printf("Saisir un entier positif\n");
        scanf("%u", &x);
        (x < min) ? min = x : 0;
        (x > max) ? max = x : 0;
    }

    printf("Le nombre min saisi est : %u\n", min);
    printf("Le nombre max saisi est : %u", max);

    return 0;
}




