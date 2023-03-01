
//2 Write a Program to Find Out Factorial  Numbers//
#include<stdio.h>
main()
{
int f,n,i;
f=1;
printf("Enter the Number:\n");
scanf("%d",&n);
for(i=n; i>=1; i--)
f=f*i;   // f*=i;
printf("The Factorial %d is equal to =%d",n,f);
}

