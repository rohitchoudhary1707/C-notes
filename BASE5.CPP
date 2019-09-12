#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,c,r;
cout<<"enter value of a=";
cin>>a;
cout<<"enter value of b=";
cin>>b;
cout<<"enter value of c=";
cin>>c;
r=-b+sqrt(b*b-4*a*c)/2*a;
cout<<"\na="<<a;
cout<<"\nb="<<b;
cout<<"\nc="<<c;
cout<<"\nr="<<r;
getch();
}



