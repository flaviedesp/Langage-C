/* ========================================================================== */
/* Projet : "chaines" : exercice 1                                            */
/* -------------------------------------------------------------------------- */
/* Compter le nombre de 'e' contenus dans une chaine saisie au clavier        */
/* (maximum 80 caracteres)                                                    */
/* -------------------------------------------------------------------------- */
/* Version utilisant la fonction strchr()                                     */
/* ========================================================================== */

#include <stdio.h>
#include <string.h>

int compteE(char*, char);

int main()
{
    char ligne[81];       /* Ligne saisie au clavier                           */
    char lettre;

    printf("Entrer une ligne (maximum 80 caracteres) :\n");
    gets(ligne);
    lettre ='e';

    //compteur = 0;

   // compteur = compteE(ligne, lettre);
    printf("\n\nNombre de %c : %d\n", lettre, compteE(ligne, lettre));

    return 0;
}

int compteE(char* chaine, char lettre)
{
    char* debut;
    int nbrE= 0;

    debut=strchr(chaine, lettre);

    while (debut!= 0)
    {
        nbrE++;
        debut++;                          /* Positionnement APRES le 'e' trouve */
        debut = strchr(debut, lettre);
    }
    return nbrE;
}
