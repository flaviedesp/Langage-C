#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define TAILLE 100

int main()
{
    int tab[TAILLE];
    int saisi  = 0; /* chiffre saisi*/
    int indice ; /*indice du tableau = case*/
    int trouver = 0;
    int t = 0;
    int L, I, J;
    int premier; //indice du premier element du sous tableau analysé
    int dernier; //indice du dernier element du sous tableau analysé
    int milieu; // indice de l'element du milieu
    int compteur = 0;



// creation du tableau avec des chiffres aléatoires
    srand(time(NULL));

    for(indice = 0; indice<= TAILLE - 1; indice++)
    {
        tab[indice] = rand() % 101;
        printf("%d  ", tab[indice]);
    }
//Permet de trier le tableau en ordre croissant
    /* for(K = 0; K < TAILLE; K++)
     {
         printf("%d ", tab[K]);
     }*/

    for (I = TAILLE - 2; I >= 0 ; I--)
    {
        for (J = 0; J <= I; J++)
        {
            if (tab[J + 1] < tab[J])
            {
                t = tab[J + 1];
                tab[J + 1] = tab[J];
                tab[J] = t;
            }
        }
    }

    printf("\n\nTableau apres le trie en ordre croissant :\n\n");
    for(L = 0; L < TAILLE; L++)
    {
        printf("%d  ", tab[L]);
    }

    //permet de demander l'ecriture d'un chiffre

    printf("\n\nEcrire un chiffre :\n", saisi);
    scanf("%d", &saisi);

    premier = 0;
    dernier = TAILLE-1;

    while((premier <= dernier) && (trouver == 0))
    {
        milieu = (premier + dernier)/2;

        if(tab[milieu] == saisi)
        {
            trouver = 1;
        }
        else if(tab[milieu] > saisi)
        {
            dernier = milieu - 1;

        }
        else
        {
            premier = milieu + 1;
        }
        compteur++;

    }
    if(!trouver)
    {
        printf("\nLe chiffre %d n'appartient pas au tableau\n", saisi);
    }
    else
    {
        printf("\nLe chiffre %d appartient au tableau\n", saisi);
    }
    printf("\ncompteur %d\n", compteur);


    /*
            //permet de savoir si le chiffre saisi est bien present dans le tableau ou non


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

    */
    return 0;

}


