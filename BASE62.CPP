#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"\nenter first value :=";
cin>>a;
cout<<"\nenter second value :=";
cin>>b;
cout<<"\nenter third value :=";
cin>>c;
if(a>b && a>c)
cout<<endl<<a<<" is largest";
else if(b>a && b>c)
cout<<endl<<b<<" is largest";
else if(c>a && c>b)
cout<<endl<<c<<" is largest";
else if(a==b && a>c)
cout<<endl<<"a,b are equal but largest than c";
else if(a==b && a>c)
cout<<endl<<"a,b are equal but larger than c";
else if(b==c && b>a)
cout<<endl<<"b,c are equal but larger than a";
else if(c==a && c>b)
cout<<endl<<"a,c are equal  but larger than b";
else
cout<<endl<<"a,b,c are equal";
getch();
}
