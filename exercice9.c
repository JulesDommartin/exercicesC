#include <stdio.h>

int compte(int x) {
    int i;
    for (i = 1; i <= 4; i++) {
        x = x * i;
    }
    return x;
}

int main(void) {

    int k;
    printf("Saisir la valeur pour le calcul : ");
    scanf("%d", &k);
    printf("La fonction renvoie %d et k vaut maintenant %d\n", compte(k), k);
    return 0;

    // Le résultat affiché est le nombre entré à la puissance 4

}
