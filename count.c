#include<stdio.h>
int main () {
int n,count=1;

	printf("enter the number:");
	scanf("%d",&n);
	
	while (n>0)
	{
	n=n/10;
	count=count+1;
	    n=n/10;
	}
	printf("the digit :%d",count);
 
		return 0;
}
