#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"\nenter first value:=";
cin>>a;                //2
cout<<"\nenter second value:=";
cin>>b;                //3
cout<<"\nenter third value:=";
cin>>c;               //4
if(a>b)
{
	if(a>c)
	cout<<endl<<a<<" is largest";
	else
	cout<<endl<<c<<" is largest";
}
else
{
	  if(b>c)
	  cout<<endl<<b<<" is largest";
	  else
	  cout<<endl<<c<<" is largest";
}
getch();
}
