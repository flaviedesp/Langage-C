#include <stdio.h>
#include <stdlib.h>

#define TAILLE 8

/* Methode de tri par permutation*/

int main()
{
    int tableau [TAILLE] = {5, 15, 10, 12, 3, 1, 6, 2};
    int indicev = 0; // indice vrai
    int indice = 0; //Indice courant
    int indiceMini = 0; //indice minimum
    int permut = 0; //variable temporaire pour la permutation


    printf("tab avant trie : \n");

    for(indice = 0; indice<= TAILLE - 1; indice++)
    {
        printf("tab : %d  \n", tableau[indice]);
    }

    for(indice = 0; indice < TAILLE - 1; indice++)
    {
        indiceMini = indice;

        for (indicev = indice+1; indicev <= TAILLE - 1; indicev++)
        {
            if (tableau[indiceMini] > tableau[indicev])
            {
                indiceMini = indicev;
            }
        }
        permut = tableau[indice];
        tableau[indice] = tableau[indiceMini];
        tableau[indiceMini] = permut;

    }

    printf("\ntab apres trie : \n");

    for(indice = 0 ; indice < TAILLE ; indice++)
    {
        printf("tab : %d \n", tableau[indice]);
    }

    return 0;
}
