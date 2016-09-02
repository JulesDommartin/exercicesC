#include <stdio.h>
#include <math.h>

int main() {
    unsigned int nb, resultat = 0;
    printf("Saisir la borne pour le calcul de la somme : ");
    scanf("%u", &nb);

    for (int i = 1; i <= nb; i++) {
        resultat += i;
    }

    printf("(Boucle for) La somme des entiers de 1 a %u est %u\n\n", nb, resultat);

    unsigned int i = 1;
    resultat = 0;

    while (i <= nb) {
        resultat += i;
        i++;
    }

    printf("(Boucle while) La somme des entiers de 1 a %u est %u", nb, resultat);

    return 0;
}
