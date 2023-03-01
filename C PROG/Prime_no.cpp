//10 Write a Program to find out Prime Number//
#include<stdio.h>
main()
{
int i,j,n;
printf("Enter the last  number:");
scanf("%d",&n);
printf("Prime Numbers are below:\n" );
for(i=2;i<=n;i++)
{
for(j=2;j<=n;j++)
{
if(i%j==0)
break;
}
if(i==j)
printf("%d\n",i);
}
} 


