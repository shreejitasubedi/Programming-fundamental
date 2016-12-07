#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
printf("Enter a number :\n");
scanf("%d",&a);
printf("Enter second number:\n");
scanf("%d",&b);
printf("Enter third number :\n");
scanf("%d",&c);
if (a>=b&&a>=c)
{
    printf("The largest is :%d",a);
}
else if(b>=a&&b>=c)
{
    printf("The largest is  :%d",b);

}
else
{
    printf("The largest is:%d",c);
}
getch();
return(0);
}
