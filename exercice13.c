#include <stdio.h>
#include <stdlib.h>
#define N 30
#define BORNEINF 100
#define BORNESUP 150

void init (int *tab1, int taille) {
    int i;
    for (i = 0; i < taille; i++) {
        int random = (rand() % (BORNESUP - BORNEINF)) + BORNEINF;
        tab1[i] = random;
    }
}

int recherche (int x, int *tab1, int taille) {
    int i;
    for (i = 0; i < taille; i++) {
        if (tab1[i] == x) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    printf("On crée un tableau de %d élément\n", N);
    int *tab = malloc(sizeof(int) * N);
    int j;
    init(tab, N);
    printf("Voici le tableau rempli ! \n");
    printf(" [ ");
    for (j = 0; j < N; j++) {
        printf("%d", tab[j]);
    }
    printf(" ] \n");
    int cherche = (rand() % (BORNESUP - BORNEINF)) + BORNEINF;
    printf("On cherche l'élément %d\n", cherche);
    if (recherche(cherche, tab, N)) {
        printf("L'élement se trouve à l'index : %d\n", recherche(cherche, tab, N));
    } else {
        printf("L'élément ne se trouve pas dans le tableau\n");
    }
    return 0;
}
