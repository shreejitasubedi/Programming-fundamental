/*
student :shreejita subedi
roll:
program :WAP to find root of quadratic eqn
labsheet :5
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float x=0,y=0,a,b,c,dis=0;
printf("enter the first number :\n");
scanf("%f",&a);
printf("enter the second number:\n");
scanf("%f",&b);
printf("enter the third number :\n");
scanf("%f",&c);
dis=(b*b)-(4*a*c);
x=(-b-pow(dis,0.5))/(2*a);
y=(-b+pow(dis,0.5))/(2*a);
printf("the quadratic equation are %f\n",x);
printf("the quadratic equation are %f",y);
getch();
return(0);
}
