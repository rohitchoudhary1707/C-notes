#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int choice,a,b,c;
cout<<"\n1. addition";
cout<<"\n2. substraction";
cout<<"\n3. multiplication";
cout<<"\n4. division";
cout<<"\nenter your choice=";
cin>>choice;
if(choice==1)
{
cout<<"\nenter two value to be added";
cin>>a>>b;
c=a+b;
cout<<"\nsum="<<c;
}
else if(choice==2)
{
cout<<"\nenter the two value to be substracted";
cin>>a>>b;
c=a-b;
cout<<"\nsubstraction="<<c;
}
else if(choice==3)
{
cout<<"enter two values to be multiplied";
cin>>a>>b;
c=a*b;
cout<<"\nmultiplication="<<c;
}
else if(choice==4)
{
cout<<"\nenter two values to be divided";
cin>>a>>b;
c=a/b;
cout<<"\ndivision="<<c;
}
else
cout<<"\nwrong choice";
getch();
}