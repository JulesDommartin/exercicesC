#include <stdio.h>
#include <math.h>
#include <limits.h>

int somme(int n) {
    if (n == 1) {
        return(1);
    } else {
        return(n + somme(n - 1));
    }
}

int factorielle(int n)
{
    if (n == 1) {
        return(1);
    } else {
        return(n * factorielle(n - 1));
    }
}

int main() {

    int x, som, exp;

    printf("Saisissez un entier : ");
    scanf("%u", &x);

    printf("La somme jusqu'a %i est : %i\n", x, somme(x));
    printf("L'exponentielle de %i est : %i\n", x, factorielle(x));

    return 0;
}

