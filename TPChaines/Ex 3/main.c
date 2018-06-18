#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[81];
    char chaineinverse[81];
    int indice = 0; // indice de la chaine
    int indiceB = 0; //indice de la chaine inverse

    printf("saisir une chaine de caractere : \n");
    gets(chaine);

    indice = strlen(chaine);


     for(indiceB = 0; indiceB = indice; indiceB++)
    {
        chaineinverse[indiceB] = chaine[indice - 1];

        printf("%c", chaineinverse[indiceB]);
        //printf("%c", indiceB);
        indice--;
    }

    chaineinverse[indiceB]=0;


    return 0;

}
