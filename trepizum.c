/*
STUDENT : SHREEJITA SUBEDI
ROLL:
Subject: programming fundamental
Lab sheet :4
*/
#include<stdio.h>
#include<conio.h>
int main (){
float a,b,h,area;
printf("Enter the first number:\n");
scanf("%f",&a);
printf("Enter the second number;\n");
scanf("%f",&b);
printf("Enter the height;\n");
scanf("%f",&h);
area=0.5*(a+b)*h;
printf("The area of trapezium is:%f",area);
getch();
return(0);
}


