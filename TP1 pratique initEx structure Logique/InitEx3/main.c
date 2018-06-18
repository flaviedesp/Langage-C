/*---------------------------------*/
/* TP initEx structure Logique*/
/*---------------------------------*/

/*Exercice 3*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nombre;
    int cumul;
    cumul=1;
    nombre = 1;
    do
    {

       printf("resultat %d\n   %d\n", nombre, cumul);
       nombre++;
       cumul = cumul+nombre;

    }
    while (cumul<100);
     printf("cumul total : %5d\n\n ",cumul);

    return 0;
}
