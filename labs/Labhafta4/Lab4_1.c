                    // Can you guess?
#include <stdio.h>
int main()
{
    int var=10;
    int *p;

    p=&var;

    printf("Address of var in: %p\n", &var);
    printf("Addres of var in: %p\n",p);

    printf("Value of var is: %d\n",var);
    printf("Value of var is: %d\n",*p);
    printf("Value of var is: %d\n",*(&var));

    printf("Value of pointer p is: %p\n",p);
    printf("Address of pointer p is: %p\n",&p);

    return 0;
}