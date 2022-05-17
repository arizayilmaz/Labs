// Klavyeden alinan iki tane karakter dizisini birlestirip ekrana yazdir.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *ptr, *ptr2, str[1000], str2[1000], *ptr3;
    int i, j, z, t, y;
    ptr=str; ptr2=str2;
    printf("Ilk karakter dizisini girin: ");
    gets(str);
    printf("Ikinci karakter dizisini girin: ");
    gets(str2);

    for(i=0;*(ptr+i)!='\0';i++);
    for(j=0;*(ptr2+j)!='\0';j++);

    ptr3 = (char*) calloc(i+j, sizeof(char));

    for(t=0 ; t<i ; t++) *(ptr3+t)=*(ptr+t);
    for(y=0 ; y<j ; y++) {*(ptr3+t)=*(ptr2+y); t++;}
    
    for(t=0 ; t<i+j ; t++) printf("%c",*(ptr3+t));

    return 0;
}