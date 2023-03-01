//8 Write a Program to Calculate the Series//
#include<stdio.h>
main()
{
int i,k,n;
k=0;
printf("Enter Last Number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d\n",i);
k+=i;
}
printf("\nThe sum of the series is : %d",k);
}

