// Klavyeden sifir girilene kadar girilen tam sayilari hafizayi verimli sekilde kullanarak tut.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i=0, c;
    ptr=(int*)malloc(1*sizeof(int));

    do
    {
        i++;
        printf("Sayi giriniz: ");
        scanf("%d",(ptr+i));
        ptr=realloc(ptr,i+1*sizeof(int));
        
        
    } while (*(ptr+i)!=0);

    for(c=1 ; c<i ; c++)
    {
        printf("%d\n",*(ptr+c));
    }

    free(ptr);
    
    return 0;
}