#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int percentage;
cout<<"\nenter the percentage:=";
cin>>percentage;
if(percentage>0 && percentage<45)
cout<<"\nresult is bad";
if(percentage>45 && percentage<65)
cout<<"\nresult is good";
if(percentage>65 && percentage<99)
cout<<"\nresult is very good";
else
cout<<"\nthank you";
getch();
}
