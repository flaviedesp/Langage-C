#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[81];
    int indice = 0;
    int nbrE = 0;


    printf("saisir une chaine de caractere : \n");
    gets(chaine);

    do
    {
        if(chaine[indice]== 'e' || chaine[indice] == 'E')
        nbrE++;
        indice++;
    }
    while(chaine[indice]!= 0);
    printf("\nnbre de 'e' et de'E' recherche = %d\n", nbrE);

    return 0;
}
