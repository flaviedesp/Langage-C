/*---------------------------------*/
/* TP initEx structure Logique*/
/*---------------------------------*/

/*Exercice 4*/

#include <stdlib.h>
#include <math.h>

int main()
{
    int nombre, modulo, diviseur, compteur;
    nombre = 1;

    compteur= 0;


    for( nombre=&nombre ; compteur <5 ; compteur++)
    {
        printf("entrer un nombre : \n\n");
        scanf("%d",&nombre);

        if (nombre <=1)
        {
            printf("%d n'est pas un nombre premier\n\n", nombre);
        }
        else
        {
            diviseur=2;
            modulo = nombre% diviseur;

            while(modulo!=0)
            {
                diviseur++;
                modulo = nombre% diviseur;
            }
            if (diviseur==nombre)
            {
                printf("%d est un nombre premier\n\n", nombre);
            }
            else
            {
                printf("%d est divisible par %d\n\n", nombre, diviseur);
            }
        }





    }
    return 0;
}
