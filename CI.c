/*
STUDENT NAME: Shreejita subedi
Roll:
Program : WAP to calculate the compound interest
Date: 25,nov2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (){
float P,T,R,CI,E;
printf("Enter the principal :\n");
scanf("%f",&P);
printf("Enter the time:\n");
scanf("%f",&T);
printf("Enter the rate:\n");
scanf("%f",&R);
E=1+R/100;
CI=(P*pow(E,T)-1);
printf("The compound interest is:%f ",CI);
getch();
return(0);
}
