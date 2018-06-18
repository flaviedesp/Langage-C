/*---------------------------------*/
/* TP initEx structure Logique*/
/*---------------------------------*/

/*Exercice 1*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nombre;
    double racineCarree;
    double cumul;
    cumul=0;


    for(nombre = 1; nombre <= 10; nombre++)
    {
        racineCarree = sqrt(nombre);
        printf("resultat %d is %f\n", nombre, racineCarree);
        cumul = cumul+racineCarree;
        printf("cumul en cours : %f\n\n", cumul);
    }

    printf("cumul total des racines : %f\n\n ",cumul);


    return 0;
}
