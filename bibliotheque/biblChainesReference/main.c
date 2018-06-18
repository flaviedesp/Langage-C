#include <stdio.h>
#include <string.h>
#include "U:\TP\Utilitaire\entetes\BiblChaineReference\chainegeneral.h"

int main()
{
    char ligne[81];
    char chainefinale[81];
    int indice = 0;
    int compteur;
    int pc = 0;
    int dc = 0;
    char ligne2[81];
    char sousChaine[81];
    int pos;
    char lettre;

    printf("Entrer une ligne (maximum 80 caracteres) :\n");
    gets(ligne);

    printf("entrer une lettre a suprimer :\n");
    lettre = getchar();

    compteur = 0;
    compteur = compteE(ligne, lettre);
    printf("\n\nNombre de 'e' : %d\n", compteur);

    printf("\nchaine sans les 'e' : ");
    chainefinale[indice] = suprE(ligne, lettre);
    printf("%s\n", chainefinale);

    inverse(ligne, ligne2);
    printf("\n\n%s\n\n", ligne2);

    position(ligne, &pc, &dc);
    printf("Premier caractere : %d\n", pc);
    printf("Dernier caractere : %d\n", dc);

    printf("\nEntrer une sous chaine a inserer (max 80 caracteres) :\n");
    gets(sousChaine);

    printf("\nEntrer la position d'insertion (entier) :\n");
    scanf("%d", &pos);

    remplachaine(ligne, sousChaine, pos);
    puts(ligne);

    return 0;
}
