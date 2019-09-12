#include<stdio.h>
#include<conio.h>
void main()
{
int a=15,b=5,c;
clrscr();
c=a>b?a:b;
printf("\nc=%d",c);
c=a<b?a+b:a-b;
printf("\nc=%d",c);
getch();
}