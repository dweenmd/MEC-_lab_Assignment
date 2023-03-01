//17 Write a Program to find out Leap Year//
#include<stdio.h>
main()
{
int r,r1,r2,year;
printf("Enter the Year");
scanf("%d",&year);
r=year%4;
if((r==0))
printf("\nThis year is Leap Year");
else
printf("\nThis year is not Leap Year");
}

