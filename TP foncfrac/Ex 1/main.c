#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Declaration de la fonction
int saisiDivision (int*, int*);
void calculsommefrac (int, int, int, int, int*, int*);
void affichefraction (int, int);

int main()
{
    int numerateur = 0;
    int numerateur2 = 0;
    int diviseur = 0;
    int diviseur2 = 0;
    int retour = 0;
    int numerateur3 = 0;
    int denominateur3 = 0;

    retour = saisiDivision(&numerateur, &diviseur);
    printf("le retour de la premiere est : %d\n\n", retour);
    if (retour == 0)
    {
        retour = saisiDivision(&numerateur2, &diviseur2);
        printf("le retour de la deuxieme est : %d\n\n", retour);
        if (retour == 0)
        {
            calculsommefrac(numerateur, diviseur, numerateur2, diviseur2, &numerateur3, &denominateur3);

            affichefraction(numerateur3, denominateur3);
        }
        else
        {
            printf("le denominateur est 0 donc le calcul ne peux se faire\n");
        }
    }
    else
    {
        printf("le denominateur est 0 donc le calcul ne peux se faire\n");
    }


    return 0;

}
//FONCTION saisidivision

int saisiDivision( int* pnumera, int* pdivis)
//Declaration de la fonction

{
    printf("rentrer le numerateur :");
    scanf("%d", pnumera);
    printf("rentrer le denominateur :");
    scanf("%d", pdivis);

    if(*pdivis == 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

//FONCTION calculsommefrac

void calculsommefrac(int num1, int denom1, int num2, int denom2, int* pnumfinal, int* pdenomfinal)
{

    /* printf("rentrer le numerateur 1 :");
     scanf("%d", num1);
     printf("rentrer le denominateur 1 :");
     scanf("%d", denom1);
     printf("rentrer le numerateur 2 :");
     scanf("%d", num2);
     printf("rentrer le denominateur 2 :");
     scanf("%d", denom2);*/

    *pnumfinal = (num1 * denom2)+(num2 * denom1);
    *pdenomfinal = denom1 * denom2;

    /*  printf("le numerateur de la somme est : %d\n", numfinal);
      printf("le denominateur de la somme est : %d\n", denomfinal);*/

}

//FONCTION affichefraction

void affichefraction(int nume, int denomi)
{
   /* printf("le numerateur est : %d\n", nume);
    printf("le denominateur est : %d\n", denomi);*/
    printf("la somme des fraction est : %d / %d\n", nume, denomi);

}
