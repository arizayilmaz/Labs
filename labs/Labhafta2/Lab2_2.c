                                                // Girilen sayi dizisinden buyuk olan
#include <stdio.h>
int Buyuk(int a[],int Max);

int main()
{
    int dizi[]={5,8,6,10,9};

    printf("Cevap = %d",Buyuk(dizi,dizi[0]));

    return 0;
}

int Buyuk(int a[], int Max)
{
    static int k=1;

    while (k<5)
    {
        if(a[k]>Max)
        {
            Max=a[k];
            k++;
        }
        else if (a[k]<Max)
        {
            k++;
        }
        return Buyuk(a,Max);
    }

    return Max;
     


}