#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define TAILLE 10

int main()
{
    int tab[TAILLE];
    int saisi  = 0; /* chiffre saisi*/
    int indice ; /*indice du tableau = case*/
    int trouver = 0;


/* creation du tableau avec des chiffres aléatoires*/
    srand(time(NULL));

    for(indice = 0; indice<= TAILLE - 1; indice++)
    {
        tab[indice] = rand() % 11;
        printf("%d   ", tab[indice]);
    }

    /*permet de demander l'écriture d'un chiffre*/

    printf("\nEcrire un chiffre :\n", saisi);
    scanf("%d", &saisi);


    /*permet de savoir si le chiffre saisi est bien present dans le tableau ou non*/


    for(indice = 0; indice<= TAILLE - 1; indice++)
    {
        if (saisi == tab[indice])
        {
            trouver = 1;
        }
    }

    if (trouver == 1)
    {
        printf("Le chiffre %d est present dans ce tableau\n", saisi);
    }
    else
    {
        printf("Le chiffre %d n'est pas present dans ce tableau\n", saisi);
    }


    return 0;

}


