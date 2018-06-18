#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[81];
    char chainefinale[81];
    int indice = 0; // indice de la chaine
    int indiceB = 0; //indice de la chaine finale


    printf("saisir une chaine de caractere : \n");
    gets(chaine);

    do
    {
        if(chaine[indice]!= 'e' && chaine[indice] != 'E')
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
