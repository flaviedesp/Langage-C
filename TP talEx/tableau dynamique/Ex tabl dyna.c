/* ========================================================================== */
/* Projet : tablPascal2                                                       */
/* -------------------------------------------------------------------------- */
/* Triangle de Pascal : Utilisation de deux tableaux à une dimension.         */
/* ========================================================================== */

#include <stdio.h>                            /* Pour scanf, printf...        */

int main()
{
    int* l1;                               /* ligne precedente             */
    int* l2;                               /* ligne courante               */
    int lig,col;                              /* indices de ligne,de colonne  */
    int nbl;                                  /* nombre de lignes a afficher  */
    int permut = 0;

    /* -------------------------------------------------------------------------- */
    /* Nombre de lignes du triangle de Pascal a afficher                          */
    /* -------------------------------------------------------------------------- */
    printf("Entrez le nombre de ligne(s) du tableau : ");
    scanf("%d", &nbl);

    //allocation dynamique du tableau en fonction de nbl qui sera saisi
    l1 = (int*) calloc (nbl, sizeof(int));
    l2 = (int*) calloc (nbl, sizeof(int));

    /* -------------------------------------------------------------------------- */
    /* Initialisation de la premiere ligne du triangle : premiere colonne a 1     */
    /* -------------------------------------------------------------------------- */
    l1[0] = 1;
    printf("%-5d\n", l1[0]);

    /* -------------------------------------------------------------------------- */
    /* Boucle de calcul et d'affichage des lignes suivantes                       */
    /* -------------------------------------------------------------------------- */
    for (lig = 1; lig < nbl; lig++)
    {

        /* -------------------------------------------------------------------------- */
        /* Affichage de la premiere colonne                                           */
        /* -------------------------------------------------------------------------- */
        l2[0] = 1;
        printf("%-5d", l2[0]);

        /* -------------------------------------------------------------------------- */
        /* Boucle sur les colonnes                                                    */
        /* -------------------------------------------------------------------------- */
        for (col = 1; col < lig; col++)
        {
            l2[col] = l1[col] + l1[col - 1];
            printf("%-5d", l2[col]);
        }

        /* -------------------------------------------------------------------------- */
        /* Affichage de la diagonale                                                  */
        /* -------------------------------------------------------------------------- */
        l2[lig] = 1;
        printf("%-5d\n", l2[lig]);

        /* -------------------------------------------------------------------------- */
        /* Transfert de l2 dans l1                                                    */
        /* -------------------------------------------------------------------------- */
      /*  for (col = 1; col <= lig + 1; col++)
        {
            l1[col] = l2[col];
        }*/
        permut = l2;
        l2 = l1;
        l1 = permut;


        return 0;
    }
