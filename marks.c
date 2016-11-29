/*
student name :shreejita subedi
roll:
program :WAP to print the marks
lab sheet: 6
*/
	#include<stdio.h>
	#include<conio.h>
	int main(){
	float CA,OM,A,IS,PF,SE,total,average,percentage;
	printf("Enter the marks in computer architecture:");
	scanf("%f",&CA);
	printf("Enter the marks in organization management:");
	scanf("%F",&OM);
	printf("Enter the marks in algebra:");
	scanf("%f",&A);
	printf("Enter the marks in interactive skill:");
	scanf("%f",&IS);
	printf("Enter the marks in programming fundamental:");
	scanf("%f",&PF);
	printf("Enter the marks in software engineering:");
	scanf("%f",&SE);
	total=CA+OM+A+IS+PF+SE;
	average=total/6;
	percentage=total/600*100;
	printf("The total marks is :%f\n",total);
	printf("The average marks is :%f\n",average);
	printf("The percentage is :%f\n",percentage);
	getch();
	return(0);
	}
