//5 Write a Program to Convert Fahrenheit to celcious //
#include<stdio.h>
main()
{
float f,c;
printf("Enter the value for Fahrenheit\n");
scanf("%f",&f);
c=((f-32)*5)/9;
printf("%fFahrenheit is equal to %f Celcious",f,c);
}

