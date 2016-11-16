/*
student name :shreejita subedi
labsheet :02
date:16/11/2016
program: WAP to print sum and product of three number
*/
#include<stdio.h>
#include<conio.h>
int main(){
float a,b,c,sum,pro;
printf("Enter first number:\n");
scanf("%f",&a);
printf("Enter second name:\n");
scanf("%f",&b);
printf("Enter third number:\n");
scanf("%f",&c);
sum=a+b+c;
pro=a*b*c;
printf("the sum of number is :%f\n",sum);
printf("the product is:%f\n",pro);
getch();
return(0);
}
