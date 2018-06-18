#include <stdio.h>
#include <stdlib.h>

#define TAILLE_LIGNE 16
#define TAILLE_COLONNE 16
int main()
{
    int tab [TAILLE_LIGNE][TAILLE_LIGNE];
    int ligneSaisi = 0; //nombre de ligne a saisir
    int colonne = 0;
    int ligne = 0;

    printf("entrez le nombre de ligne(s) du tableau (max 16) : ");
    scanf("%d", &ligneSaisi);

    if (ligneSaisi <= TAILLE_LIGNE -1 || ligneSaisi >= 0)
    {
        for(ligne = 0; ligne < ligneSaisi; ligne++)
        {
            tab[ligne][ligne] = 1; //permet de mettre le chiffre 1 a chaque debut de ligne
            tab[ligne][0] = 1; //permet de mettre 1 a chaque 1er ligne de chaque colonne

            for (colonne = 1; colonne < ligne ; colonne++)
            {
                tab[ligne][colonne] = tab[ligne - 1][colonne] + tab[ligne - 1][colonne - 1]; //permet de faire le calcul en zig zag
                // poste(ligne, colonne) = poste (ligne -1 , colonne) + poste(ligne-1, colonne-1);
            }
        }
        for (ligne=0; ligne < ligneSaisi; ligne++) //permet l'impression en triangle
        {
            for (colonne=0; colonne <= ligne; colonne++)
            {
                printf("%-5d", tab[ligne][colonne]); //laisse un espace de 5 entre chaque colonne
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nVotre nombre n'est pas compris entre 0 et 16, veuillez respecter les consignes!\n");
    }

    return 0;
}
