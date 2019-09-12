#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int qty;
cout<<"\nenter your qty";
cin>>qty;
if(qty<=50)
cout<<"\noffer is zero";
if(qty>50 && qty<=100)
cout<<"\noffer is five";
if(qty>100)
cout<<"\noffer is 10";
getch();
}
