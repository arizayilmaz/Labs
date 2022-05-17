                    // iki pozitif tam sayinin en buyuk ortak boleni
#include <stdio.h>
int BolenFonk(int a, int b);

int main()
{
    int Sayi1, Sayi2;
    printf("Aralarinda bosluk birakarak iki sayi giriniz: ");
    scanf("%d %d",&Sayi1,&Sayi2);

    printf("Cevap = %d",BolenFonk(Sayi1,Sayi2));

    return 0;
}

BolenFonk(int a, int b)
{
    if (b!=0)
        return BolenFonk(b, a%b);
    else return a;
}