// Ogrenci numarasindaki tek sayilari int diziye, cift sayilari char diziye ata, dinamik bellek.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, numS, *ptr, i=0, t=0, j;
    char *ptr2;
    ptr=(int*)malloc(1*sizeof(int));
    ptr2=(char*)malloc(1*sizeof(char));

    printf("Ogrenci numarasini giriniz: ");
    scanf("%d",&num);

    while(num!=0)
    {
        numS=num%10;
        if (numS%2==0)
        {
            *(ptr2+i)=numS;
            i++;
            ptr2=realloc(ptr,i*sizeof(char));
        }
        else
        {
            *(ptr+t)=numS;
            t++;
            ptr=realloc(ptr,t*sizeof(int));
        }
        num=num/10;
        
    }

    free(ptr); free(ptr2);

    return 0;
}