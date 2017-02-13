#include<stdio.h>
int main()
{
    FILE*fp;
    char data[255];
    fp=fopen("e:/Sunway/test.txt","r");
    fscanf(fp,"%s",data);
    printf("%s",data);
    printf("\n");
    fclose(fp);
    return 0;


}
