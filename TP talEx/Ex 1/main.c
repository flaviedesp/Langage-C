#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define TAILLE 10

int main()
{
    int tab[TAILLE];
    int saisi  = 0; /* chiffre saisi*/
    int indice = 0; /*indice du tableau = case*/
    int compteur = 0; /* compteur pour le nombre de fois que le chiffre apparait*/


    srand(time(NULL));

    //tab[0] = rand() % 11;


    for(indice = 0; indice<= TAILLE - 1; indice++)
    {
        tab[indice] = rand() % 11;
        printf("%d   ", tab[indice]);
    }

    printf("\n\necrire un chiffre : \n", saisi);
    scanf("%d", &saisi);

    for (indice = 0; indice<= TAILLE; indice++ )
    {

        if( tab[indice] == saisi)
        {
            compteur++;
            /*  printf("compteur %d\n", compteur);*/
        }
    }



    printf("le chiffre %d est present %d fois\n", saisi, compteur);
    printf("\n");
    return 0;

}
