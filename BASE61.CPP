#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
cout<<"\nenter first value:=";
cin>>a;
cout<<"\nenter second value:=";
cin>>b;
if(a>b)
cout<<"\na>b";
else if(b>a)
cout<<"\nb>a";
else
cout<<"\na & b are equal";
getch();
}