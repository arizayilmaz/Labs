//Derste anlatilan tum string fonksiyonlari kullan
#include <stdio.h>
#include <string.h>
int main()
{
    char string[100], string2[100];

    strcpy(string,"Programlama");
    printf("String dizisi: %s\n",string);
    
    int a=strlen(string);
    printf("Uzunluk: %d\n",a);

    strcpy(string2,"Dilleri");
    strcat(string,string2);
    printf("Birlestirilmis diziler: %s\n",string);

    a=strlen(string);
    printf("Yeni Uzunluk: %d\n",a);    

    return 0;
}