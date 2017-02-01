#include<stdio.h>
int main()
{
    int num[10],i,max=0;
    for (i=0;i<10;i++)
    {
        printf("Enter the number ");
        scanf("%d",&num[i]);

    }
    for(i=0;i<10;i++)
    {
        if (max<num[i])
        {
            max=num[i];
        }

    }
    printf("The greater number is %d",max);
    return 0;
}
