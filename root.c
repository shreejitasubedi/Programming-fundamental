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
float x,y,a,b,c,dis;
printf("enter the first number :\n");
scanf("%f",&a);
printf("enter the second number:\n");
scanf("%f",&b);
print("enter the third number :\n");
scanf("%f",&c);
dis=(b*b)-(4*a*c);
x=pow(dis,0.5)/(2*a);
y=-pow(dis,0.5)/(2*a);
printf("the quadratic equation are %f",x);
printf("the quadratic equatation are %f",y);
getch();
return(0);
}
