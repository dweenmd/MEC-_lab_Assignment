// 25 Write a Program to Create a Flag of Bangladesh
#include<stdio.h>
#include<graphics.h>
main()
{
int driver,mode;
driver=DETECT;
mode=0;
initgraph(&driver,&mode,"c:\\tc\\bgi ");
rectangle(100,100,300,220);
setfillstyle(SOLID_FILL,GREEN);
floodfill(102,102,15);
circle(200,160,35);
setfillstyle(SOLID_FILL,RED);
floodfill(200,160,15);
}

