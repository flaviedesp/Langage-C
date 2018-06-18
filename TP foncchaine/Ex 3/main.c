/* ========================================================================== */
/* Projet : "chaines" : exercice 3                                            */
/* -------------------------------------------------------------------------- */
/* Inverser une chaine saisie au clavier                                      */
/* ========================================================================== */

#include <stdio.h>
#include <string.h>

void inverse(char*, char*);

int main()
{
    char ligne1[81];
    char ligne2[81];

    printf("Entrer une ligne (max 80 caracteres) :\n");
    gets(ligne1);

    inverse(ligne1, ligne2);
    printf("\n\n%s\n", ligne2);

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
    chaine2[i2] = 0;                            /* N'oublions pas le 0 final ! */
  }

