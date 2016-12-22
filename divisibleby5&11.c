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
int a;
printf("Enter the first number :");
scanf("%d",&a);
if(a%5==0&&a%11==0)
{
    printf("The number is divisible by 5&&11 %d",a);

}
else
{
    printf("The number is not divisible by 5&&11 %d",a);
}
getch();
return(0);
}
