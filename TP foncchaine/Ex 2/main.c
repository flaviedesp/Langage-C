#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int suprE(char*,char);

int main()
{
    char chaine[81];
    char lettre ='e';


    printf("saisir une chaine de caractere : \n");
    gets(chaine);


    suprE(chaine, lettre);
    puts(chaine);


    return 0;

}

int suprE(char* chaine, char lettre)
{
    char chainefinale[81];
    int indice = 0; // indice de la chaine
    int indiceB = 0; //indice de la chaine finale

    do
    {
        if(chaine[indice]!= lettre && chaine[indice] != lettre)
        {
            chainefinale[indiceB]=chaine[indice];
            indiceB++;
        }
        indice++;
    }
    while(chaine[indice]!= 0);

    chainefinale[indiceB]=0;
    *chaine = chainefinale;
    puts(chainefinale);

}
