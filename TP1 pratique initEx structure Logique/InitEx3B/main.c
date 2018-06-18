/*---------------------------------*/
/* TP initEx structure Logique*/
/*---------------------------------*/

/*Exercice 3B*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nombre, calcul;
    Nombre=0;
    calcul = 0;

    do
    {
        printf("entrer un nombre :\n\n");
        scanf("%d", &Nombre);
        Nombre= Nombre + calcul;
        calcul=Nombre;
        printf("total %d\n\n", calcul);

    }
    while (Nombre<=100);
    printf("votre total depasse 100, il est hors limite\n\n");


    return 0;
}
