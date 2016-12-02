/*
student name :shreejita subedi
roll:37
subject :progermming fundamental
date:2dec,2106
porgram:WAP for increment &decrement
*/
#include<stdio.h>
#include<conio.h>
int main (){
int n,post,pre;
printf("Enter the first number :");
scanf("%d",&n);
post=n++;
pre=++n;
printf("the  post increment of n is :%d \n",post);
printf("the pre increment of n is:%d \n",pre);
post=n--;
pre=--n;
printf("The post decrement is:%d \n",post);
printf("The pre decrement is :%d \n",pre);
getch();
return(0);
}
