/*
name :Shreejita subedi
roll:19
lab sheet :3
program:WAP to print area of circle  & circumference
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main (){
float r,area,cir;
printf("enter the number:\n");
scanf("%f",&r);
area=PI*pow(r,2);
cir=2*PI*r;
printf("the area of circle is:%f\n",area);
printf("the area of circumference is :%f",cir);
getch();
return(0);
}
