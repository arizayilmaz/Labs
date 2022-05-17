                // Compute the sum of all elements in array.
#include <stdio.h>
int main()
{
    int array[5]={1,2,3,4,5}, *ptr, i, sum=0;
    ptr=array;

    for (i=0 ; i<5 ; i++)
    {
        sum=sum+*(ptr+i);
    }

    printf("Dizinin toplami: %d",sum);

    return 0;
}