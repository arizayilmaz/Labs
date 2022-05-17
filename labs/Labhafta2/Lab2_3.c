                            // Girilen sayinin basamaklarinin toplami
#include <stdio.h>
int BasamakFonk(int a);

int main()
{
    int Sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &Sayi);
    printf("Toplam = %d", BasamakFonk(Sayi));

    return 0;
}

int BasamakFonk(int a)
{
    

    if(a!=0)
    {
        return (a%10) + BasamakFonk(a/10);
    }
    else return a;
}