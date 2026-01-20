#include <stdio.h>

int factorial(int);

int main()
{
    int a;
    printf("Enter number for factorial : ");
    scanf("%d", &a);

    printf("Factorial is %d", factorial(a));

    return 0;
}

int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}
