/* ========================================================================== */
/* Projet : "chaines" : exercice 4                                            */
/* -------------------------------------------------------------------------- */
/* Premier et dernier caractere non blanc d'une chaine                        */
/* ========================================================================== */

#include <stdio.h>
#include <string.h>
void position (char*, int*, int*);

int main()
{
    char ligne[81];
    int pc = 0;
    int dc = 0;
    int longueurLigne;

    printf("Entrer une ligne (max 80 caracteres) :\n");
    gets(ligne);

    position(ligne, &pc, &dc);
    printf("Premier caractere : %d\n", pc);
    printf("Dernier caractere : %d\n", dc);
    return 0;
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
