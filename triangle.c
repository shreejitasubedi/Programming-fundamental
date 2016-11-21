/*
student name :shreejita subedi
Roll:
Subject:programming fundamental
Program:To print the area of triangle
Lab sheet :4
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (){
int a,b,c;float s,area,e;
printf("Enter the first side of triangle:\n");
scanf("%d",&a);
printf("Enter the second side of triangle:\n");
scanf("%d",&b);
printf("Enter the third side of triangle:\n");
scanf("%d",&c);
s=a+b+c/2;
e=s*(s-a)*(s-b)*(s-c);
area=pow(e,0.5);
printf("the area of triangle is:%f",area);
getch();
return 0;

}
