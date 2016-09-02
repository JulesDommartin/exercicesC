#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {

    char tab[16];
    int res = 0;

    printf("Saisir une suite de caracteres (et terminer par #)");
    scanf("%s", tab);

   for (int i = 0; i < strlen(tab); i++) {
        int val;
        if (tab[i] == '#')
            break;
        switch(tab[i]) {
            case '0':
                val = 0;
                break;
            case '1':
                val = 1;
                break;
            case '2':
                val = 2;
                break;
            case '3':
                val = 3;
                break;
            case '4':
                val = 4;
                break;
            case '5':
                val = 5;
                break;
            case '6':
                val = 6;
                break;
            case '7':
                val = 7;
                break;
            case '8':
                val = 8;
                break;
            case '9':
                val = 9;
                break;
        }
        res += pow(10, strlen(tab) - 2 - i) * val;
    }

    printf("Valeur lue : %d", res);

    return 0;
}
