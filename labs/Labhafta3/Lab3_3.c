// What is the output?
#include <stdio.h>
int fun(int n);

int main()
{
    printf("%d", fun(2));

    return 0;
}

int fun(int n)
{
    if (n==4) return n;
    else return 2*fun(n+1);
}