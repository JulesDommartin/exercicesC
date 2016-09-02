#include <stdio.h>
#include <math.h>
#include <limits.h>

int somme(int x) {
    int res = 0;
    for (int i = 1; i <= x; i++)
        res += i;
    return res;
}

int exponentielle(int x) {
    int res = 1;
    for (int i = 1; i <= x; i++)
        res *= i;
    return res;
}

int main() {

    int x, som, exp;

    printf("Saisissez un entier : ");
    scanf("%u", &x);

    som = somme(x);
    exp = exponentielle(x);

    printf("La somme jusqu'a %i est : %i\n", x, som);
    printf("L'exponentielle de %i est : %i\n", x, exp);

    return 0;
}


