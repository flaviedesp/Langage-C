#include <stdio.h>
#include <stdlib.h>

#define TAILLE 8
int main()
{
    int tableau [TAILLE] = {5, 15, 10, 12, 3, 1, 6, 2};
    int indicev = 0; // indice vrai
    int indice = 0; //Indice courant
    int indiceMini = 0; //indice minimum

    printf("tab avant trie : \n");

    for(indice = 0; indice<= TAILLE - 1; indice++)
    {
        printf("tab : %d  \n", tableau[indice]);
    }

    for (indice = 1; indice<= TAILLE-1; indice++)
    {
        if (tableau[indice-1] > tableau[indice])
        {
            indicev = indice;
        }
        do
        {
            indiceMini = tableau[indicev];
            tableau[indicev] = tableau[indicev - 1];
            tableau[indicev - 1] = indiceMini;
            indicev = indicev - 1;
        }
        while ((indicev != 0) && (tableau[indicev - 1] >= tableau[indicev]));


    }
/*
    for(indice = 0; indice < TAILLE; indice++)
    {
        indiceMini = tableau[indice];

        for (indicev = indice+1; indicev < TAILLE; indicev++)
        {
            if (indiceMini > tableau[indicev])
            {
                permut = tableau[indice];
                tableau[indice] = tableau[indicev];
                tableau[indicev] = permut;
                indiceMini = tableau[indice];
            }
        }

    }*/

printf("\ntab apres trie : \n");

for(indice = 0 ; indice < TAILLE ; indice++)
{
    printf("tab : %d \n", tableau[indice]);
}

return 0;
}
