#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=10,b=6,c=9;
cout<<endl<<a++ + ++b<<","<<c-- - b--<<","<<b++ - --a;
//
cout<<endl<<b-- +c<<","<<++c + a<<","<<a++ - ++c;
//
getch();
}