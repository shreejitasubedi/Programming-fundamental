
#include<stdio.h>
#include<conio.h>
int main (){
int n,last,i;
printf("Enter the number :");
scanf("%d",&n);
last=n%10;
printf("the last number is: %d",last);
for(i=1;i<n;i++)
{
    n=n/10;
}
printf("The first number is %d",n);
getch ();
return 0;
}
