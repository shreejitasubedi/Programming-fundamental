#include<stdio.h>
int main () {
int i,n,rev=0,reverse=0;

	printf("enter the number:");
	scanf("%d",&n);
	i=n;
	while (n>0)
	{
		rev=n%10;
		reverse=reverse*10+rev;
	    n=n/10;
	    
    }
    
		 
	if(i==reverse)
	{
		printf("palidome");
		}
		else
		{
			printf("not palidrome ");
			}
		return 0;
	}
	
