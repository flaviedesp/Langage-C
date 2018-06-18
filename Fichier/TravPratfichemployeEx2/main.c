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
   // FILE* edition;
    EMPLOYE employe;

    fichier = fopen("U:\\TP\\Fichier\\TravPratfichEmploye\\employe", "rb");
    if(fichier == 0)
    {
        printf("Erreur d'ouverture du fichier employe");
        exit(0);
    }

   /* edition =fopen("U:\\TP\\Fichier\\TravPratfichemployeEx2\\editemploye2.txt", "wt");
    if(edition == 0)
    {
        printf("Erreur d'ouverture du fichier edition");
        exit(1);
    }*/
    printf("LISTE DES EMPLOYES \n\n");
   // fprintf(edition, "LISTE DES EMPLOYES\n\n");

    fread(&employe, sizeof(EMPLOYE), 1, fichier);

    while(!feof(fichier))
    {
        printf("%3d   %8s   %8s   %3d\n", employe.numero, employe.nom, employe.prenom, employe.numeroAgence);
       // fprintf(edition, "%3d   %8s   %8s   %3d\n", employe.numero, employe.nom, employe.prenom, employe.numeroAgence);
        fread(&employe, sizeof(EMPLOYE), 1, fichier);
    }
    fclose(fichier);
   // fclose(edition);


    return 0;
}
