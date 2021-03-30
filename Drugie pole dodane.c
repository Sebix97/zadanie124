#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

float pole_prostokata();
float pole_trojkata();

int main()
{
for(;;)
{

int c=68 ;

printf("Wybierz bryle\n");
printf("1.pole prostokata\n");
printf("2.pole trojkata\n");
printf("3. wyjscie\n");
c =getch();
switch (c)

{

case '1':
pole_prostokata();
for(int i= 0; i<=2;i++)
    {
        printf("\n");
    };
break;

case '2':
pole_trojkata();

    printf("\n");

break;

case '3':
exit(EXIT_SUCCESS);


default:
    printf("Wybierz cyfre od 1 do 3\n");
    printf("Aby powrocic do menu wcisnij dowolny przycisk\n");
    //exit(EXIT_SUCCESS);
    getch();

        printf("\n");

break;
}

}
    return 0;
};

float pole_prostokata()
{
    float a, b, wynik ;
    printf("wprowadz a\n");
    if(scanf("%f", &a) == 1)
    {
        printf("wprowadz b\n");
        if(scanf("%f", &b) == 1)
        {


            if ((a<=0) || (b<=0))
            {
            printf("a i b musza byc wieksze od 0\n");
            exit (EXIT_FAILURE);

            }

            else


            wynik = a*b;
            printf("wynik= ""%.4f", wynik);
            return wynik;
        }
        else
        printf("wprowadz cyfry, a nie znaki\n");
        exit (EXIT_FAILURE);

    }
    else

   printf("wprowadz cyfry, a nie znaki\n");
    exit (EXIT_FAILURE);


};




float pole_trojkata()
{
    float a, h, wynik;
    printf("wprowadz a\n");
    if(scanf("%f", &a) == 1)
    {
        printf("wprowadz b\n");
        if(scanf("%f", &h) == 1)
        {


            if ((a<=0) || (h<=0))
            {
            printf("a i h musza byc wieksze od 0\n");
            exit (EXIT_FAILURE);

            }

            else


            wynik =0.5*a*h;
            printf("wynik= ""%.4f", wynik);
            return wynik;
        }
        else
        printf("wprowadz cyfry, a nie znaki\n");
        exit (EXIT_FAILURE);

    }
    else

    printf("wprowadz cyfry, a nie znaki\n");
    exit (EXIT_FAILURE);


};

