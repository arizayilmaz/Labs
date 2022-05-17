                    // Dizinin adresini ve eleman sayisini parametre olarak alan ve dizinin icinde kac tane tek sayi oldugunu soyleyen.
#include <stdio.h>
int fun(int a[], int n);

int main()
{
    int c[]={1,2,16,98,17};

    printf("Dizideki tek sayi sayisi: %d", fun(c,4));

    return 0;
}

int fun(int a[], int n)
{
    if(n<0) return 0;
    
    if(a[n]%2!=0)
        {
            return 1 + fun(a, n-1);
        }
        else 
        {
            return 0 + fun(a,n-1);
        }  
}