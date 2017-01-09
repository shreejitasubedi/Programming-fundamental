/*




*/
#include<stdio.h>
#include<conio.h>
int main (){
int n;
printf("Enter a year ");
scanf("%d",&n);
((n%4==0)?printf("%d is leap year",n):
 (n%400==0)?printf("%d is leap year",n):
 (n%100!=0)?printf("%d is not leap year",n):printf("%d is a year leap",n));
getch ();
return 0;
}
