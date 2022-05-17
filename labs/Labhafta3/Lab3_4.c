                    // What is the output?
#include <stdio.h>
int toplam(int n);

void main(void)
{
    int sayi=6;

    printf("Sonuc= %d", toplam(sayi));
}

int toplam(int n)
{
    if (n==1) return n;
    else return n+toplam(n-1);
}   