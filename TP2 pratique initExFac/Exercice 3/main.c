#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int nombre, a, b;
    char lettre;
    nombre=0;

    printf("entrée clavier :\n\n");
    lettre =_getch();

    while (lettre!='\r')
    {
        if (lettre>='0' && lettre<='9')
        {
            printf("%c\n",lettre);

            nombre=nombre+(lettre-48);
            nombre=nombre*10;

            lettre =_getch();
        }

        else
        {
            lettre =_getch();
        }
    }
    printf("nombre final : %d\n", nombre/10);

    return 0;

}
