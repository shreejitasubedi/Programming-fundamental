/*
name :shreejita subedi
roll:37
program :To use logical operator
*/
#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
if(n>=80)
{
    printf("distinction");
}

else if(n>=60&&n<80)

{
    printf("First");
}
else if (n>=50&&n<80)
    {
        printf("second");
    }
else
    {
    printf("third");
}
getch();
return(0);
}

