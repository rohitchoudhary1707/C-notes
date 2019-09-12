#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int p,r,c,t;
cout<<"enter value of p=";
cin>>p;
cout<<"enter value of r=";
cin>>r;
cout<<"enter value of t=";
cin>>t;
c=p *pow((1+r/100),t)-p;
cout<<"\np="<<p;
cout<<"\nr="<<r;
cout<<"\nt="<<t;
cout<<"\nc="<<c;
getch();
}

