#include<stdio.h>
#include<conio.h>

void main(){
int p,r,t,total;

clrscr();
printf("Principal amount=");
scanf("%d",&p);
printf("Rate per annum=");
scanf("%d",&r);
printf("Time in years=");
scanf("%d",&t);
total=(p*r*t)/100;
printf("Simple intrest is %d",total);

getch();
}