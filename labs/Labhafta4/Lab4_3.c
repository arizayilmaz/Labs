                    // Calculate the length of the string using a pointer.
#include <stdio.h>
int main()
{
    char str[111]="1234567890", *ptr; int i=0;
    ptr=str;

    while(*ptr!='\0')
    {
        ptr++;
        i++;
    }

    printf("Uzunluk: %d",i);

    return 0;
}