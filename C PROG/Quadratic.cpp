//14 Write a program to find out Quadratic Equation(ax2+bx+c=0) //
#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,x1,x2,d;
printf("Enter the value for a=");
scanf("%f",&a);
printf("\nEnter the value for b=");
scanf("%f",&b);
printf("\nEnter the value for c=");
scanf("%f",&c);
d=(b*b)-(4*a*c);
if (d>=0)
{
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
printf("\n Two roots are x1 = %f and  x2 = %f ",x1,x2);
}
else
printf("\nRoots are Imaginary");
}

