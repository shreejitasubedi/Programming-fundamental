#include<stdio.h>
void function (int num);
int main ()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	
	function1(num);
	
	return 0 ;

} 
void function1(int num)
{
	printf("The number is :%d",num);
	
}
