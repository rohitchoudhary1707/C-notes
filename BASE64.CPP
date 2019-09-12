#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
cout<<"\nenter a value:=";
cin>>a;
if(a>=0)
{
   if(a<=10)
   cout<<"\n value lie between 0&10";
   else
   cout<<"\n value is larger than 10";
}
else
cout<<"\n value is smaller than 0";
getch();
}