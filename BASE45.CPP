#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"\nenter first number a=";
cin>>a;
cout<<"\nenter second number b=";
cin>>b;
cout<<"\nenter third number c=";
cin>>c;
if(a>b&&a>c)
cout<<endl<<a<<" is largest";
if(b>a&&b>c)
cout<<endl<<b<<" is largest";
if(c>a&&c>b)
cout<<endl<<c<<" is largest";
if(a==b&&a==c)
cout<<endl<<"values are same";
getch();
}