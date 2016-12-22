/*
Name : shreejita subedi
Section:B
lab sheet :12
program :WAP to swap two number using temporary variable
subject
*/
#include<stdio.h>
#include<conio.h>
int main (){
int a,b;
printf("Enter the first number :");
scanf("%d",&a);
printf("Enter the second number :");
scanf("%d",&b);
printf("The before swap is %d %d\n ",a,b);
a=a-b;
b=a+b;
a=b-a;
printf("The after swap is : %d %d",a,b);
getch();
return(0);
}

