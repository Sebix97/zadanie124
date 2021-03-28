#include <stdio.h>
#include <stdlib.h>

int main()
{


for(;;)
{
int c=68 ;
float a;
float b;
float wynik;
float pods;
float h;
float wynik2;

printf("wybierz cos\n");
printf("1.pole prostokata\n");
printf("2.pole trojkata\n");
printf("3. wyjscie\n");
scanf("%d", &c);
switch (c)

{

case 1:

    printf("wprowadz a\n");
    scanf("%f", &a);
    printf("wprowadz b\n");
    scanf("%f", &b);
    if ((a>0) && (b>0))
    {
    wynik = a*b;
    printf("wynik=" "%f\n", wynik);
    }
else
    printf("liczby ujemne!!!\n");
    break;
case 2:


    break;
case 3:
    return 0;
}

 }

    return 0;

}
