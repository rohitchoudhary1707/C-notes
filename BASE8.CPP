#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,s,area;
cout<<"enter value of a";
cin>>a;
cout<<"enter value of b";
cin>>b;
cout<<"enter value of c";
cin>>c;
cout<<"enter value of s";
cin>>s;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"\na="<<a;
cout<<"\nb="<<b;
cout<<"\nc="<<c;
cout<<"\ns="<<s;
cout<<"\narea="<<area;
getch();
}