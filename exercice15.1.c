#include <stdio.h>

void g (void) {
    int n;
    n = 22;
}

void f (void) {
    // La valeur prise par le compteur est la dernière valeur de la pile car elle n'est pas initialisée
    int compteur;
    compteur++;
    printf("%d\n", compteur);
}

int main(void) {
    f();
    g();
    f();
    return 0;
}
