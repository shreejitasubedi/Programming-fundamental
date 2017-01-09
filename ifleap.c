#include<stdio.h>
#include<conio.h>
int main (){
int n;
printf("Enter a year ");
scanf("%d",&n);
if (n%4==0)
{
    printf("%d is leap year\n",n);
}
else if (n%400==0)
{
    printf("%d is leap year",n);
}
else if (n%100!=0)
{
    printf("%d is not leap year ",n);
}
getch ();
return 0;
}
