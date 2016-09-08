#include <stdio.h>
#define N 50

char *tableau_rempli (char c) {
    // A local variable can't be used outside of a block, and here we need the adress of the local variable, so we need to create a pointer and allocate memory for its value
    char * tab1 = malloc(sizeof(char) * N);
    int i;
    for (i = 0; i < N; i++) {
        tab1[i] = c;
    }
    return tab1;
}

int main(void) {
    char x;
    char *t;
    int j;
    printf("Quel caractere met-on dans le tableau ?");
    scanf("%c", &x);
    t = tableau_rempli(x);
    printf("Voici le tableau rempli ! \n");
    printf(" [ ");
    for (j = 0; j < N; j++) {
        printf("%c", t[j]);
    }
    printf(" ] \n");
    return 0;
}
