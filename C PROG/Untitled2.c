#include<stdio.h>
main(){
int a=20, b=5, *ptr;
ptr=&a;
b=*ptr;
printf("%d= %d= %d=", ++a,b++,*ptr);
}
