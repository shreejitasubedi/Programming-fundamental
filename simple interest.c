/*
student :shreejita subedi
roll:19
program :to pirnt simple  intrest
*/
#include<stdio.h>
#include<conio.h>
int main (){
float p,t,r,intrest;
printf("enter thr first number");
scanf("%f",&p);
printf("enter second number ");
scanf("%f",&t);
printf("enter the number");
scanf("%f",&r);
intrest=p*t*r/100;
printf("the simple intrest is :%f",intrest);
getch();
return(0);
}

