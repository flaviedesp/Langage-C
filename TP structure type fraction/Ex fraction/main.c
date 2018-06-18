/* ========================================================================== */
/* Projet : foncFractions : Fonctions - Fractions                             */
/* ========================================================================== */

#include <stdio.h>
#include <stdlib.h>

int saisie(int*, int*);
void somme(int, int, int, int, int*, int*);
int pgcd(int, int);
void affiche(int, int);

typedef struct
{
    int Num;
    int Den;
} FRACTION;

int main()
{
   // int n1, d1, n2, d2, n3, d3;
    FRACTION f1;
    FRACTION f2;
    FRACTION f3;
    int codeRetour;

/* -------------------------------------------------------------------------- */
/* Saisie des fractions                                                       */
/* -------------------------------------------------------------------------- */
    printf("Saisie fraction 1\n");
    codeRetour = saisie(&(f1.Num), &(f1.Den));

    while(codeRetour == -1)
    {
        printf("Denominateur fraction 1 nul !\n\n");
        codeRetour = saisie(&(f1.Num), &(f1.Den));
    }

    printf("\n\nSaisie fraction 2\n");
    codeRetour = saisie(&(f2.Num), &(f2.Den));

    while(codeRetour == -1)
    {
        printf("Denominateur fraction 2 nul !\n\n");
        codeRetour = saisie(&(f2.Num), &(f2.Den));
    }

/* -------------------------------------------------------------------------- */
/* Calcul de la somme (simplifiee)                                            */
/* -------------------------------------------------------------------------- */
    somme(f1.Num, f1.Den, f2.Num, f2.Den, &(f3.Num), &(f3.Den));

/* -------------------------------------------------------------------------- */
/* Affichage de la somme                                                      */
/* -------------------------------------------------------------------------- */
    printf("\nSomme des fractions : ");
    affiche(f3.Num, f3.Den);

    return 0;
}

/* ========================================================================== */
/* Saisie de la fraction                                                      */
/* ========================================================================== */
int saisie(int* pNum, int* pDen)
{
    char ligne[81];

    printf("Introduisez le numerateur : ");
    gets(ligne);
    *pNum = atoi(ligne);

    printf("Introduisez le denominateur : ");
    gets(ligne);
    *pDen = atoi(ligne);

    if (*pDen == 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

/* ========================================================================== */
/* Somme de deux fractions                                                    */
/* ========================================================================== */
void somme(int num1, int den1, int num2, int den2, int* pNum3, int* pDen3)
{
    int diviseur;

    *pNum3 = (num1 * den2) + (num2 * den1);
    *pDen3 = den1 * den2;

    diviseur = pgcd(*pNum3, *pDen3);
    *pNum3 = *pNum3 / diviseur;
    *pDen3 = *pDen3 / diviseur;
}

/* ========================================================================== */
/* pgcd de deux entiers                                                       */
/* ========================================================================== */
int pgcd(int n1, int n2)
{
    while (n1 != n2)
    {
        if (n1 > n2) n1 -= n2;
        else         n2 -= n1;
    }
    return n1;
}

/* ========================================================================== */
/* affichage d'une fraction precedee d'un texte                               */
/* ========================================================================== */
void affiche(int num, int den)
{
    if (den != 1)
    {
        printf("%d/%d\n", num, den);
    }
    else
    {
        printf("%d\n", num);
    }
}
