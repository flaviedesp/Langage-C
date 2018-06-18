#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "C:\Users\afpa1797\Documents\referenceC\entetes\agences.h"

typedef struct
{
    int numero;        //numero de l'employe
    char nom[51];      //nom de l'employe
    char prenom[41];   //prenom de l'employe
    int numeroAgence;  //numero d'agence de l'employe
} EMPLOYE;

int main()
{
    FILE* fichier;
    FILE* nomAgence;
    EMPLOYE employe;
    AGENCE agence;
    int retour = 0;

    /*------------------------------*/
    /*----Ouverture des fichiers----*/
    /*------------------------------*/

    fichier = fopen("U:\\TP\\Fichier\\TravPratfichEmploye\\employe", "rb");
    if(fichier == 0)
    {
        printf("Erreur d'ouverture du fichier employe");
        exit(0);
    }

    nomAgence = fopen("U:\\TP\\Fichier\\agence\\agences", "rb");

    if(nomAgence ==0)
    {
        printf("erreur de l'ouverture du fichier agence");
        exit (1);
    }

    /*-------------------------*/
    /*----Ecriture du titre----*/
    /*-------------------------*/
    printf("liste des employes \n\n");

    /*-------------------------------------------------*/
    /*---- boucle pour affichage des noms d'agences----*/
    /*-------------------------------------------------*/
    fread(&employe, sizeof(EMPLOYE), 1, fichier);

    while(!feof(fichier))
    {
        retour = chercheAgence(employe.numeroAgence,nomAgence);

        if(retour == -1 )
        {

            printf("employe :%d %s %s (%d: agence inconnue)\n\n", employe.numero, employe.prenom, employe.nom, agence.numero);
        }
        else
        {
            fseek(nomAgence, retour * sizeof(AGENCE),SEEK_SET);
            fread(&agence, sizeof(AGENCE), 1, nomAgence);
            printf("employe :%d %s %s %s\n\n", employe.numero,employe.prenom, employe.nom, agence.nom);
        }

        fread(&employe, sizeof(EMPLOYE), 1, fichier);
    }
    fclose(fichier);
    fclose(nomAgence);


    return 0;
}
