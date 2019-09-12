#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c;
cout<<"enter value of a";
cin>>a;
cout<<"enter value of b";
cin>>b;
c=sqrt(pow(a,7)+pow(b,7))/(a+b);
cout<<"\na="<<a;
cout<<"\nb="<<b;
cout<<"\nc="<<c;
getch();
}