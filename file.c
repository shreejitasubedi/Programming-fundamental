#include<stdio.h>
#include<conio.h>
int main ()
{
    FILE*fp;
    fp=fopen("e:/Sunway/test.txt","w");
    fprintf(fp,"The data is saved to file/n");
    fputs("This is another line in the file",fp);
    fclose(fp);
    return(0);

}
