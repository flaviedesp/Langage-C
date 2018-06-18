#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[81];
    char chaineRemplace[81];
    int position = 0; //position de remplacement dans la chaine
    int indice = 0; //indice de la chaine
    int indiceR = 0; //indice de la sous chaine
    int longchaine =0;
    int longchaineR = 0;
    int longchaineTotal = 0;

    printf("saisir une chaine de caractere : \n");
    gets(chaine);
    printf("saisir la chaine de remplacement : \n");
    gets(chaineRemplace);
    printf("saisir la position de la chaine de remplacement (entier): \n");
    scanf("%d", &position);

    /* do
     {
         indice++;
     }
     while (indice < position - 1);*/ //peut etre emplacer par:

    indice= position-1; //permet de connaitre la fin directement

    longchaine = strlen(chaine); //permet de connaitre la taille de la chaine de base
    longchaineR = strlen(chaineRemplace); //permet de connaitre la taille de la chaine de remplacement

    if(longchaine<longchaineR) //permet de remplacer par des ' ' les caracteres compris entre la chaine et la chaine de remplacement
    {                           // dans le cas on l'on met une position bien derriere la fin de la chaine
        for (indice= longchaine; indice< longchaineR; indice++)
        {
            chaine[indice] = ' ';
        }
    }

    while ( indiceR < longchaineR) // permet de remplacer les caractere dans la chaine
    {
        chaine[indice] = chaineRemplace[indiceR];
        indiceR++;
        indice++;
    }
    longchaineTotal = longchaineR + (position - 1); //permet de connaitre la longueur total de notre futur chaine

    if(longchaineTotal> longchaine)//permet de mettre la fin a la nouvelle chaine si elle dépasse l'ancienne
    {
        indice = 0;
    }

    puts(chaine);

    return 0;
}
