#include<stdio.h>
#include<conio.h>

void main (){
int b,h,area;

clrscr();
printf("base=");
scanf("%d",&b);
printf("height=");
scanf("%d",&h);
area = (h*b)/2;
printf("Area of triangle is %d",area);
getch();
}