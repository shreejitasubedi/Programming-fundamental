#include<stdio.h>
int main () {
int n,rev,reverse=0;

	printf("enter the number:");
	scanf("%d",&n);
	
	while (n>0)
	{
		rev=n%10;
		reverse=reverse*10+rev;
	    n=n/10;
	}
	printf("the revese is :%d",reverse);
 
		return 0;
}
