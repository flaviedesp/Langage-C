#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "U:\TP\Utilitaire\entetes\BiblChaineReference\chaines.h"

typedef struct
{
    int numero;
    char nom[21];
    char adresse[51];
    char codePostal[6];
    char ville[21];
    int codeSecteur;
} CONTACT;

int main()
{
    CONTACT contact;
    FILE* fichier;
    FILE* edition;
    int retour;
    char ligne[200];
    char imprim[81];

    fichier = fopen("U:\\TP\\Fichier\\contact\\contactsTries.txt","rt");
    if (fichier ==0)
    {
        printf("***Erreur d'ouverture du fichier contact trie***\n");
        exit(0);
    }

    edition = fopen("U:\\TP\\Fichier\\contact\\contacts.dat", "wb");
    if(edition ==0)
    {
        printf("***Erreur d'ouverture du fichier contact.dat***\n");
        exit(1);
    }

    printf("LISTE DE CONTACTS\n\n");

    fgets(imprim, 200, fichier);

    while(!feof(fichier))
    {
        retour = 0;

        while(retour==0)
        {
            puts(imprim);
            retour = isole(imprim, ligne);
            contact.numero = atoi(ligne);

            retour = isole(imprim, contact.nom);

            retour = isole(imprim, contact.adresse);

            retour = isole(imprim, contact.codePostal);

            retour = isole(imprim, contact.ville);

            retour = isole(imprim, ligne);
            contact.codeSecteur = atoi(ligne);

            fwrite(&contact,sizeof(CONTACT),1,edition);

            printf("%d  %s  %s  %s  %s  %d\n\n", contact.numero, contact.nom, contact.adresse, contact.codePostal, contact.ville, contact.codeSecteur);

        }
        fgets(imprim, 200, fichier);

    }

    fclose(fichier);
    fclose(edition);
    return 0;
}
