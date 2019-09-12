#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int choice,a,b,c;
cout<<"\n1. Addition";
cout<<"\n2. Substraction";
cout<<"\n3. multiplication";
cout<<"\n4. division";
cout<<"\nEnter your choice:-";
cin>>choice;
cout<<"\nenter two numbers:-";
cin>>a>>b;
switch(choice)
{
case 1:
       c=a+b;
       cout<<"sum="<<c;
       break;
case 2:
       c=a-b;
       cout<<"subtraction="<<c;
       break;
case 3:
       c=a*b;
       cout<<"multiplication="<<c;
       break;
case 4:
       c=a/b;
       cout<<"division="<<c;
       break;
default:
       cout<<"wrong choice";
}
getch();
}

