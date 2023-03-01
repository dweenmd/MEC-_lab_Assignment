//12 Write a program to find out Greatest number//
#include<stdio.h>
main()
{
int x,y,z;
printf("Enter three number=");
scanf("%d%d%d",&x,&y,&z);
if((x>y)&&(x>z))
printf("%d Is the Greatest Number",x);
else if((y>x)&&(y>z))
printf("%d is the Greatest number",y);
else
printf("%d is the Greatest number",z);
}

