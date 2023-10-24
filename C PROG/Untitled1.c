#include <stdio.h>
int factorial(int num)
{
    int fact = 1;
    while (num != 0)
    {
        fact = fact * num;
        num--;
    }
    return fact;
}
int main()
{
    intnum, fact;

    printf("Enter a positive integer number: ");
    scanf("%d", &num);

    fact = factorial(num);
    printf("Factorial of %d is: %d", num, fact);
    return 0;
}
