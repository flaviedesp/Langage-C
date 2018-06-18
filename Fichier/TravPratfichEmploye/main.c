#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    EMPLOYE employe;
   // int codeRetour;
    char ligne[81];

    fichier = fopen("U:\\TP\\Fichier\\TravPratfichEmploye\\employe","ab");

    if(fichier==0)
    {
        printf("Erreur d'ouverture du fichier employe\n");
        exit(0);
    }
    printf("Numero d'employe :");
    gets(ligne);

    while(ligne[0]!=0)
    {
        employe.numero = atoi(ligne);

        printf("Nom de l'employe :");
        gets(employe.nom);

        printf("Prenom de l'employe :");
        gets(employe.prenom);

        printf("Numero d'agence de l'employe :");
        gets(ligne);
        employe.numeroAgence = atoi(ligne);

       /* codeRetour = */fwrite(&employe, sizeof(EMPLOYE), 1, fichier);
        //printf("Code retour = %d\n\n", codeRetour);

        printf("Numero d'employe :");
        gets(ligne);
    }
    printf("fin de l'enregistrement des employes\n\n");
    fclose(fichier);





    return 0;
}
