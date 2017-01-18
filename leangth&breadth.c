#include<stdio.h>
void area ();
int main ()
{
	area ();
	return 0 ;
}
void area ()
{
	int l,b,a;
	printf("Enter the number ");
	scanf("%d",&l);
	printf("enter the breath");
	scanf("%d",&b);
	a=l*b;
	printf("the area of rectangle is :%d",a);
	
}
