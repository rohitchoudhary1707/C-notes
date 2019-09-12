#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
cout<<"\nenter the value:=";
cin>>a;
if(a>0)
cout<<"\nvalue is positive";
else if(a<0)
cout<<"\nvalue is negative";
else
cout<<"\nvalue is zero";
getch();
}