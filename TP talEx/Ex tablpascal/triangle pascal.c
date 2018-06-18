#include <stdio.h>
#include <stdlib.h>


int main()
{
    int tab [16][16];
    int ligneSaisi = 0; //nombre de ligne a saisir
    int colonne = 0;
    int ligne = 0;

    printf("entrez le nombre de ligne(s) du tableau (max 16) : ");
    scanf("%d", &ligneSaisi);


    if (ligneSaisi <= 16 || ligneSaisi >= 0)
    {
        for(ligne = 0; ligne < ligneSaisi; ligne++)
        {
            tab[ligne][ligne] = 1;
            tab[ligne][0] = 1;

            for (colonne = 1; colonne < ligne ; colonne++)
            {
                tab[ligne][colonne] = tab[ligne - 1][colonne] + tab[ligne - 1][colonne - 1];
            }

        }

        for (ligne=0; ligne < ligneSaisi; ligne++)
        {
            for (colonne=0; colonne <= ligne; colonne++)
            {
                printf("%5d", tab[ligne][colonne]);
            }

            printf("\n");
        }

        // poste(ligne, colonne) = poste (ligne -1 , colonne) + poste(ligne-1, colonne-1);

    }
    else
    {
        printf("\n Votre nombre n'est pas compris entre 0 et 16\n");
    }

    return 0;
}
