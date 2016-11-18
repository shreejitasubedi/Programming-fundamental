/*
name :Shreejita subedi
roll:19
lab sheet :3
program:WAP to print area of circle  & circumference
*/
#include<stdio.h>
#include<conio.h>

int main (){
float r,area,cir,PI=3.14;
printf("enter the number:\n");
scanf("%f",&r);
area=PI*r*r;
cir=2*PI*r;
printf("the area of circle is:%f\n",area);
printf("the area of circumference is :%f",cir);
getch();
return(0);
}
