#include <stdio.h>
#include <stdlib.h>
#define N 250

int main(void) {
    char * tab1 = malloc(sizeof(char) * N);
    int i;
    int compteur = 0;
    for (i = 0; i < N; i++) {
        tab1[i] = 'k';
    }
    for (i = 0; i < N; i++) {
        printf("%c", tab1[i]);
        if (tab1[i] == 'k')
            compteur++;
    }

    // On s'attendait à avoir le nombre de valeur dans le tableau (N = 250), mais on obtient un chiffre d'environ 32000
    // pour corriger ce bug, il faut initialiser la valeur de compteur à 0
    printf("Compteur = %d\n", compteur);
    return 0;
}
