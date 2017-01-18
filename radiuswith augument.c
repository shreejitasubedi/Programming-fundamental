#include<stdio.h>
void area (int r);
int main (){
	int r;
 printf("Enter the radius :");
 scanf("%d",&r);
	area(r);
	return 0;
}
void area (int r){
float a;
 a=3.14*r*r;

 printf("the radius is :%f",a);
}
 
