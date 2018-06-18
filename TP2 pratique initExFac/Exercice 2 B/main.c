#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    /* char ch;
     ch = _getch();
     while(ch !='\r')
     {
         printf("'%c'  %d\n", ch, ch);
         ch =_getch();
     }
    */

    char Lettre1, Lettre2, Lettre3, Lettre4, Lettre5, Lettre6;


    Lettre1=0;
    Lettre2=0;
    Lettre3=0;
    Lettre4=0;
    Lettre5=0;
    Lettre6=0;



    while(Lettre1!=70 && Lettre2!=85 && Lettre3!=77 && Lettre4!=73 && Lettre5!=69 && Lettre6!=82)
    {
        printf("\nEntrer votre mot de passe :\n\n");
     //remplace les lettres par des x
        Lettre1=_getch();
        _putch(120);
        Lettre2=_getch();
        _putch(120);
        Lettre3=_getch();
        _putch(120);
        Lettre4=_getch();
        _putch(120);
        Lettre5=_getch();
        _putch(120);
        Lettre6=_getch();
        _putch(120);

        if (Lettre1!=70 && Lettre2!=85 && Lettre3!=77 && Lettre4!=73 && Lettre5!=69 && Lettre6!=82)
        {
            printf("\n\nErreur recommencer\n\n");
        }



    }
    printf("\n\n   BRAVO\n");
    return 0;
}



