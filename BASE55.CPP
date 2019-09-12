#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int year;
cout<<"\nEnter a year:=";
cin>>year;
if(year%4==0||(year%100==0&&year%400==0))
cout<<"\nIt is leap year";
else
cout<<"\nIt is not a leap year";
getch();
}