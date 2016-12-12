/*
name :shreejita subedi
Roll: 37
Lab sheet:12
Date:12/12/2016
Program:witie a C program to find the largest of two usins ternary operator
*/
#include<stdio.h>
#include<conio.h>
int main (){
int a,b;
printf("Enter the first number :");
scanf("%d",&a);
printf("Enter the second number : ");
scanf("%d",&b);
a>b&&b<a?printf("%d is largest ",a):printf("%d is the largest",b);
getch();
return(0);
}
