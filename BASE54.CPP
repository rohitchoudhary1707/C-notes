#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,c,d;
float r1,r2;
cout<<"\nenter the value of a:=";
cin>>a;
cout<<"\nenter the value of b:=";
cin>>b;
cout<<"\nenter the value of c:=";
cin>>c;
d=b*b-4*a*c;
if(d>=0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
cout<<"\nRoot1="<<r1;
cout<<"\nRoot2="<<r2;
}
else
cout<<"\nroots are imaginary";
getch();
}