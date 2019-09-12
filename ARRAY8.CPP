#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10];
int i,n,sum=0;
cout<<"\nHow many elements are required in array";
cin>>n;
cout<<"\nEnter elements in array :";
for(i=0;i<n;i++)
{
cin>>a[i];
sum=sum+a[i]*a[i];
}
cout<<"\nsum="<<sum;
getch();
}