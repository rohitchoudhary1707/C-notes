#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int noofunits;
float bill;
cout<<"\nenter number of units:=";
cin>>noofunits;
if(noofunits<=100)
bill=1*noofunits;
else if(noofunits<=300)
bill=100+1.25*(noofunits-100);
else
bill=100+250+1.5*(noofunits-300);
cout<<"\nbill="<<bill;
getch();
}