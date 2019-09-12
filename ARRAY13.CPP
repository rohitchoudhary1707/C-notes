//Deleted element in Array OR deletion in array
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int a[10],i,n,loc;
cout<<"\nHow many elements required in array";
cin>>n;
cout<<"\nEnter elements in array :";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\nEnter index position where element is to be deleted";
cin>>loc;
for(i=loc;i<n-1;i++)
{
a[i]=a[i+1];
}
n--;
cout<<"\nEnter in array are:=";
for(i=0;i<n;i++)
cout<<endl<<a[i];
getch();
}