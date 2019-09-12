#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,c;
cout<<"enter value of a=";
cin>>a;
cout<<"\nenter value of b=";
cin>>b;
c=pow(a,3)+pow(b,3)+3*a*b*(a+b);
cout<<"\a="<<a;
cout<<"\b="<<b;
cout<<"\c="<<c;
getch ();
}