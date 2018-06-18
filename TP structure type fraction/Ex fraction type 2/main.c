/* ========================================================================== */
/* Projet : foncFractions : Fonctions - Fractions                             */
/* ========================================================================== */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int Num;
    int Den;
} FRACTION;

int saisie(FRACTION*);
FRACTION somme(FRACTION, FRACTION);
int pgcd(int, int);
void affiche(FRACTION);

int main()
{
    FRACTION f1;
    FRACTION f2;
    FRACTION f3;
    int codeRetour;

    /* -------------------------------------------------------------------------- */
    /* Saisie des fractions                                                       */
    /* -------------------------------------------------------------------------- */
    printf("Saisie fraction 1\n");
    codeRetour = saisie(&f1);

    while(codeRetour == -1)
    {
        printf("Denominateur fraction 1 nul !\n\n");
        codeRetour = saisie(&f1);
    }

    printf("\n\nSaisie fraction 2\n");
    codeRetour = saisie(&f2);

    while(codeRetour == -1)
    {
        printf("Denominateur fraction 2 nul !\n\n");
        codeRetour = saisie(&f2);
    }

    /* -------------------------------------------------------------------------- */
    /* Calcul de la somme (simplifiee)                                            */
    /* -------------------------------------------------------------------------- */
    f3 = somme(f1, f2);

    /* -------------------------------------------------------------------------- */
    /* Affichage de la somme                                                      */
    /* -------------------------------------------------------------------------- */
    printf("\nSomme des fractions : ");
    affiche(f3);

    return 0;
}

/* ========================================================================== */
/* Saisie de la fraction                                                      */
/* ========================================================================== */
int saisie(FRACTION* pF)
{
    char ligne[81];

    printf("Introduisez le numerateur : ");
    gets(ligne);
    pF->Num = atoi(ligne);

    printf("Introduisez le denominateur : ");
    gets(ligne);
    pF->Den = atoi(ligne);

    if (pF->Den == 0)
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
FRACTION somme(FRACTION frac1, FRACTION frac2)
{
    int diviseur;
    FRACTION fractot;

    fractot.Num = ((frac1.Num) *(frac2.Den)) + ((frac2.Num) * (frac1.Den));
    fractot.Den = (frac1.Den) * (frac2.Den);

    diviseur = pgcd(fractot.Num, fractot.Den);
    fractot.Num = fractot.Num / diviseur;
    fractot.Den = fractot.Den / diviseur;

    return fractot;
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
void affiche(FRACTION frac)
{
    if (frac.Den != 1)
    {
        printf("%d/%d\n", frac.Num, frac.Den);
    }
    else
    {
        printf("%d\n", frac.Num);
    }
}
