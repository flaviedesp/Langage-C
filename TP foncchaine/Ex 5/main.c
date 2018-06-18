/* ========================================================================== */
/* Projet : "chaines" : exercice 5                                            */
/* -------------------------------------------------------------------------- */
/* Placer une sous chaine dans une chaine                                     */
/* ========================================================================== */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remplachaine(char*, char*, int);

int main()
{
    char chaine[81];       /* Chaine a modifier              */
    char sousChaine[81];   /* Sous chaine a inserer          */
    int pos;               /* Position de l'insertion        */

    printf("Entrer une chaine (max 80 caracteres) :\n");
    gets(chaine);

    printf("\nEntrer une sous chaine a inserer (max 80 caracteres) :\n");
    gets(sousChaine);

    printf("\nEntrer la position d'insertion (entier) :\n");
    scanf("%d", &pos);

    remplachaine(chaine, sousChaine, pos);
    puts(chaine);

    return 0;
}

void remplachaine (char* chaine, char* sousChaine, int position)
{
    int i;
    int longueurChaine;
    int longueurSousChaine;
    int posFinSousChaine;

    longueurChaine = strlen(chaine);

    longueurSousChaine = strlen(sousChaine);

    posFinSousChaine = position + longueurSousChaine;
    if (longueurChaine < posFinSousChaine)
    {
        for (i = longueurChaine; i < posFinSousChaine; i++)
        {
            chaine[i] = ' ';
        }
        chaine[i] = 0;
    }

    memcpy(chaine + position, sousChaine, longueurSousChaine);
}
