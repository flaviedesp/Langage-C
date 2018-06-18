#include <stdio.h>
#include <string.h>
#include "U:\TP\Utilitaire\entetes\BiblChaineReference\chainegeneral.h"

int compteE(char* chaine, char lettre)
{
    char* debut;
    int nbrE= 0;

    debut=strchr(chaine, lettre);

    while (debut!= 0)
    {
        nbrE++;
        debut++;
        debut = strchr(debut, lettre);
    }
    return nbrE;
}

int suprE(char* chaine, char L)
{
    char chainefinale[81];
    int indice = 0; // indice de la chaine
    int indiceB = 0; //indice de la chaine finale

    do
    {
        if(chaine[indice]!= L && chaine[indice] != L)
        {
            chainefinale[indiceB]=chaine[indice];
            indiceB++;
        }
        indice++;
    }
    while(chaine[indice]!= 0);

    chainefinale[indiceB]=0;
    puts(chainefinale);
    return 0;
}

void inverse(char* chaine, char* chaine2)
{
    int i1 =0;
    int i2 = 0;
    int longueurLigne = 0;

    longueurLigne = strlen(chaine);

    i1 = longueurLigne - 1;

    for (i2 = 0; i2 < longueurLigne; i2++)
    {
        chaine2[i2] = chaine[i1];
        i1--;
    }
    chaine2[i2] = 0;

}
void position(char* chaine, int* nbreP, int* nbreD)
{
    int longueurLigne;
    int c1 ;
    int c2 ;

    longueurLigne = strlen(chaine);
    if (longueurLigne == 0)
    {
        printf("La chaine saisie est vide !\n");
    }
    else
    {
        c1 = 0;

        while ((chaine[c1] == ' ') && (c1 < longueurLigne))
        {
            c1++;
        }
        if (c1 == longueurLigne)
        {
            printf("La chaine saisie est entierement a blanc !\n");
        }
        else
        {
            c2 = longueurLigne - 1 ;

            while (chaine[c2] == ' ')
            {
                c2--;
            }
        }
    }
    *nbreP = c1 + 1 ;
    *nbreD = c2 + 1;
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


