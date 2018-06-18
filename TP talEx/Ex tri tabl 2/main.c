#include <stdio.h>
#include <stdlib.h>

#define TAILLE 8
int main()
{
    int tableau [TAILLE] = {5, 15, 10, 12, 3, 1, 6, 2};
    int indicev = 0; // indice vrai
    int indice = 0; //Indice courant
    int permut = 0; //indice de permutation


    printf("tab avant trie : \n");

    for(indice = 0; indice<= TAILLE - 1; indice++)
    {
        printf("tab : %d  \n", tableau[indice]);
    }

    for(indice = 0; indice < TAILLE; indice++)
    {
        for (indicev = indice + 1; indicev< TAILLE; indicev++)
        {
            if(tableau[indicev] < tableau[indice])
            {
                permut = tableau[indice];
                tableau[indice] = tableau[indicev];
                tableau[indicev] = permut;
            }
        }
    }

    printf("\ntab apres trie : \n");
    for(indice = 0 ; indice < TAILLE ; indice++)
    {
        printf("tab : %d \n", tableau[indice]);
    }


    return 0;
}
