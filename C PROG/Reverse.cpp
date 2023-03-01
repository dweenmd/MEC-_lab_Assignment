//3 Reverse Number//
#include<stdio.h>
main()
{
int x,y,i;
printf("Enter Any number ");
scanf("%d",&x);
for(i=1;i<=20;i++)
{
printf("-");
}
printf("\nReverse Number \n");
while(x!=0)
{
y=x % 10;
printf("%d",y);
x=x/10;
}
}

