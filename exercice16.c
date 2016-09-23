#include <stdio.h>
#include <stdlib.h>

 typedef char ** grille;

 void affiche(grille g, int taille) {
    printf("Contenu de la grille :\n");
    int i, j;
    for (i = 0; i < taille; i++) {
        for (j = 0; j < taille; j++) {
            printf("%c ", g[i][j]);
        }
        printf("\n");
    }
 }

 void compte(grille g, int taille, int *nbv, int *nbc) {
    int i, j;
    for (i = 0; i < taille; i++) {
        for (j = 0; j < taille; j++) {
            switch (g[i][j]) {
                case 'a' :
                case 'e' :
                case 'i' :
                case 'o' :
                case 'u' :
                case 'y' :
                    nbv++;
                    break;
                case '*' :
                    break;
                default :
                    nbc++;
                    break;
            }
        }
    }
 }

 int compte_mots (grille g, int taille) {
    int compteur = 0, i, j;
    int nb_lettres_courant_vertical = 0, nb_lettres_courant_horizontal = 0;
    for (i = 0; i < taille; i++) {
        for (j = 0; j < taille; j++) {
            if (g[j][i] == '*') {
                if (nb_lettres_courant_vertical > 1) {
                    compteur++;
                }
                nb_lettres_courant_vertical = 0;
            }
            if (g[i][j] == '*') {
                if (nb_lettres_courant_horizontal > 1) {
                    compteur ++;
                }
                nb_lettres_courant_horizontal = 0;
            }
        }
    }
 }

 int compte_mots_finis (grille g, int taille) {
    int compteur = 0, i, j;
    int nb_lettres_courant_vertical = 0, nb_lettres_courant_horizontal = 0;

 }

 int main(int argc, char* argv[]) {

    if (argc < 2) {
        printf("Le programme n'a recu aucun argument en parametre");
    } else if (argc > 2) {
        printf("Le programme a recu trop d'arguments en parametre");
    } else {
        int taille = atoi(argv[1]);
        grille g = malloc(sizeof(grille[taille][taille]));
    }

    return 0;
 }
