/*
name :shreejita subedi
Roll: 37
Lab sheet:12
Date:12/12/2016
Program:witie a C program to find the largest of three ternary operator
*/
#include<stdio.h>
#include<conio.h>
int main (){
int a,b,c;
printf("Enter the first number :");
scanf("%d",&a);
printf("Enter the second number :");
scanf("%d",&b);
printf("Enter the third number :");
scanf("%d",&c);
(a>b&&a>c)?printf("%d largest is ",a):
(b>a&&b>c)?printf("%d is the largest ",b):printf("%d is the largest ",c);
getch();
return(0);
}
