#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10];
int i,n;
cout<<"\nHow many elements required in array";
cin>>n;
cout<<"\nEnter elements in array :";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
if(a[i]%2==0)
a[i]=a[i]*2;
else
a[i]=a[i]*3;
}
cout<<"\nElements in array are:";
for(i=0;i<n;i++)
cout<<endl<<a[i];

getch();
}