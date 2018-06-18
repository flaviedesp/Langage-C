#include <stdio.h>
#include <stdlib.h>

#define TAILLE 8

/* Methode de tri a bulles*/
int main()
{
    int tableau [TAILLE] = {5, 15, 10, 12, 3, 1, 6, 2};
    int indice =0; /*indice du tableau = case*/
    int t = 0; // permet de verifier qu'il n'y a plus de nombre mal placé
    int L, I, J;//permet de travailler sur les differentes cases du tableau

    for(indice = 0; indice<= TAILLE - 1; indice++)
    {
        printf("%d  ", tableau[indice]);
    }

    for (I = TAILLE - 2; I >= 0 ; I--)
    {
        for (J = 0; J <= I; J++)
        {
            if (tableau[J + 1] < tableau[J])
            {
                int t = tableau[J + 1];
                tableau[J + 1] = tableau[J];
                tableau[J] = t;
            }
        }
    }

    printf("\n\nTableau apres le trie en ordre croissant :\n\n");
    for(L = 0; L < TAILLE; L++)
    {
        printf("%d  ", tableau[L]);
    }
    printf("\n");




    return 0;
}
