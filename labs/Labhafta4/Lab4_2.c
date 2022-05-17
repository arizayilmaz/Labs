            // Add two numbers using pointers.
#include <stdio.h>
int main()
{
    int num, num2, *ptr, *ptr2;
    ptr=&num; ptr2=&num2;

    printf("Aralarinda bosluk birakarak iki sayi giriniz: ");
    scanf("%d %d",ptr, ptr2);

    printf("Girdiginiz sayilarin toplami: %d",*ptr+*ptr2);

    return 0;
}