#include<stdio.h>
int main ()
{
    int num[10],i;
    for (i=0;i<10;i++)
    {
        printf("enter the number ");
        scanf("%d",&num[i]);
    }
    for (i=0;i<10;i++)
    {
        printf("num[%d] contains %d data \n",i,num[i]);
    }
    return 0;
}
