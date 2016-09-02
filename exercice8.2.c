#include <stdio.h>
#include <math.h>
#include <limits.h>

int suite(int n, int u0) {
    int res = u0;
    for (int i = 1; i <= n; i++) {
        res = 3 * res + 2;
    }
    return res;
}

int main() {

    int x, u0;

    printf("Saisissez un nombre de depart : ");
    scanf("%u", &u0);

    printf("Saisissez un entier : ");
    scanf("%u", &x);

    printf("Le resultat de la suite u%i est : %i\n", x, suite(x, u0));

    return 0;
}



