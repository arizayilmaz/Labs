// Secim siralamasini kullan
#include <stdio.h>
void selectionSort(int dizi[], int n);
int main()
{
    int array[]={1,9,4,15,23};
    selectionSort(array, 5);

    for(int i=0 ; i<5 ; i++) printf("%d ",array[i]);

    return 0;
}
void selectionSort(int dizi[], int n)
{
    int i, j, index, enkucuk;
            
    for(i=0 ; i<n-1 ; i++)
    {
        enkucuk=dizi[n-1];
        index=n-1;
        for(j=i ; j<n-1 ; j++)
        {
            if(dizi[j]<enkucuk)
            {
                enkucuk=dizi[j];
                index=j;
            }
        }
            dizi[index]=dizi[i];
            dizi[i]=enkucuk;
    }
}