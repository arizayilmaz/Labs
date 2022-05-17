                                // n=0, a=5 ve b=7 için çıktıyı bul.
#include <stdio.h>
void fun(int n, int a, int b);

int main()
{
    fun(0,5,7);

    return 0;
}



void fun(int n, int a, int b)
{
    if (n>=10) return 0;
    fun(n+2, a, b+n);
    printf("%d %d %d\n", n, a, b);
}