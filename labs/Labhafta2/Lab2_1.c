                              // Girilen sayiya kadar olan dogal sayilarin toplami
#include <stdio.h>
int ToplamFonk(int a);

int main()
{
    int Sayi;

    printf("Sayi giriniz: ");
    scanf("%d",&Sayi);

    printf("Toplam = %d",ToplamFonk(Sayi));


    return 0;
}

int ToplamFonk(int a)
{
    if (a!=0)
        return a+ToplamFonk(a-1);
    else return a; 
}