// Kabarcik siralamsini kullan.
#include <stdio.h>
void bubbleSort(int array2[], int n);
int main()
{
    int array[]={9,15,20,1,7,4};

    bubbleSort(array, 6);
    for(int a=0 ; a<6 ; a++) printf("%d ",array[a]);

    return 0;
}

void bubbleSort(int array2[], int n)
{
    int save;
    
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int c=0 ; c<n-1-i ; c++)
        {
            
            if(array2[c]>array2[c+1])
            {
                save=array2[c];
                array2[c]=array2[c+1];
                array2[c+1]=save;
            }
        }
    }
    
}