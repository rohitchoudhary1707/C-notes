#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int per;
cout<<"\nenter your percentage:=";
cin>>per;
if(per>=80)
cout<<"\nexcellent";
if(per>=60 && per<80)
cout<<"\nvery good";
if(per>=35 && per<60)
cout<<"\nwork hard";
if(per<35)
cout<<"\npoor";
getch();
}

