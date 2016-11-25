/*
name :shreejita subedi
subject : programming fundamental
program:WAP to print arithmetic operation
lab sheet :6
date: 25, nov 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,add,sub,div,multi,mod;
printf("enter the first number :\n");
scanf("%d",&a);
printf("enter the second number :\n");
scanf("%d",&b);
add=a+b;
sub=a-b;
multi=a*b;
div=a/b;
mod=a%b;
printf("the addition is:%d\n",add);
printf("the subtraction is :%d\n",sub);
printf("the multiplication is :%d\n",multi);

printf("the divide is :%d\n",div);
printf("the modulus is :%d\n",mod);
getch();
return(0);
}
