#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a,b: \n");
    scanf("%d%d", &a, &b);
    printf("value of a=%d and b= %d\n", a, b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("new value of a=%d and b= %d", a, b);
    return 0;
}
