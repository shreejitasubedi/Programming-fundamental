#include<stdio.h>
#include<conio.h>
int main(){
float cen,far,c;
printf("enter the fahrenhet");
scanf("%f",&far);
c=0.569*(far-32);
printf("the centigrade is :%f",c);
getch();
return(0);
}
