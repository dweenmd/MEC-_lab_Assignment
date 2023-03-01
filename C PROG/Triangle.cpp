//9 Write a program to find out Area of Triangle 
#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,s,area;
printf("Enter the value for a\n");
scanf("%f",&a);
printf("Enter the value for b\n");
scanf("%f",&b);
printf("Enter the value for c\n");
scanf("%f",&c);
if((a+b)>c && (b+c)>a && (c+a)>b)
{
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nThe Area of Triangle is =%f",area);
}
else 
printf("The Triangle is Not Possible");
}

