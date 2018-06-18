#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[81];
    int indice = 0; // indice de la chaine premier
    int nbrdernier = 0;

    printf("saisir une chaine de caractere : \n");
    gets(chaine);

    nbrdernier = strlen(chaine);

    while(chaine[nbrdernier] == ' ')
    {
        nbrdernier--;
    }

    while(chaine[indice] == ' ')
    {
        indice++;
    }

    printf("Position de la premiere lettre %d\n", indice+1);
    printf("Position de la derniere lettre %d\n", nbrdernier);
    // chaine[indiceB]= chaine[indice-1];

    return 0;
}
