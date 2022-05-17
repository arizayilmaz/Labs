/*
   
    Bir dairenin alanini hesaplayan program yazin.
    Sartlar;

    - Dairenin yaricapi kullaniciya sorularak klavyeden girilmelidir ve fonksiyon main fonksiyonu icerisinde cagirilmalidir.

    - Fonksiyon prototipi: float area(const int r), yaricapi alip alani verecek.

    - Pi sayisi 3.14 alinacak ve program basinda sabit olarak tanimlanacak.

    - Sonuc ekrana yazdirilirken .2 kusurat olacak.

*/
#include <stdio.h>
#define PI 3.14
float area(int r);
int main()
{
    int a;

    printf("Yaricapi giriniz: ");
    scanf("%d",&a);

    printf("%d yaricapli dairenin alani: %.2f", a, area(a));

    return 0;
}

float area(int r)
{
    return PI*r*r;
}