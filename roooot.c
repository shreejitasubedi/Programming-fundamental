/*
name: shreejita subedi
Roll:
Subject:programming fundamental
Date :28,nov2016
labsheet:7
Program:WAP to calculate square root
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a,square,root;
printf("Enter the number :");
scanf("%f",&a);
square=pow(a,2);
root=sqrt(a);
printf("the square root is:%f",square);
printf("The square root is :%f",root);
getch();
return(0);

}
