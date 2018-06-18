/*---------------------------------*/
/* TP initEx structure Logique*/
/*---------------------------------*/

/*Exercice 2*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nombre;
    double racineCarree;
    double cumul;
    cumul=0;
    nombre = 0;


    while (cumul<30)
        //do
    {

        racineCarree = sqrt(nombre);
        nombre++;
        cumul = cumul+racineCarree;
        printf("resultat %d is %f et le cumul est %f\n", nombre, racineCarree, cumul);
        //printf("le cumul est de %f\n\n", cumul);

    }
    //while (cumul<30);
    //printf("cumul total des racines : %f\n\n",cumul);

    return 0;
}

