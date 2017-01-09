/*

*/
#include<stdio.h>
#include<conio.h>
int main (){
int ASCII;
char a ;
printf("Enter the character");
scanf("%c",&a);
ASCII=a;
((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122)?printf(" is character"):printf("is not character"));
getch ();
return 0 ;
}
