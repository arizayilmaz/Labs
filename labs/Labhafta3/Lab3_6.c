                                    // Asagidaki rekursifli kod hangi islemi yapar?
#include <stdio.h>
void my_recursive_function(int n);

void main()
{
    my_recursive_function(7);
}

void my_recursive_function(int n)
{
    if (n==0) return;
    printf("%d",n);
    my_recursive_function(n-1);
}
// Girilen sayidan 1e kadar olan dogal sayilari yazdirir.