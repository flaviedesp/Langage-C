/*---------------------------------*/
/* TP initEx structure Logique*/
/*---------------------------------*/

/*Exercice 1*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


double main()
{
    double nombre = 1, answer;
    answer = sqrt(nombre)

    if (nombre < 0)
        printf("error sqrt, &.2f\n", nombre, answer);
    else
        printf("resultat &.2f is &.2f\n", nombre, answer)
    return 0;
}
