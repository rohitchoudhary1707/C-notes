#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10];
int i,n,item,f=0;
cout<<"\nHow many elements required in array";
cin>>n;
cout<<"\nEnter elements in array :";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\nEnter value to be searched in array";
cin>>item;
for(i=0;i<n;i++)
{
if(a[i]==item)
{
cout<<"\nValue found in array at location "<<i+1;
f=1;
}
}
if(f==0)
cout<<"\nValue not found in array";
getch();
}