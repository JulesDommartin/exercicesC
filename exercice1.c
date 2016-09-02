#include <stdio.h>
#include <math.h>

#define PUISSANCE 3

int main() {
    float nb, resultat;
    printf("Saisir un nombre\n");
    scanf("%f", &nb);

    resultat = pow(nb, PUISSANCE);

    printf("Le res de l'elevation a la puissance est : %f\n", resultat);
    return 0;
}
