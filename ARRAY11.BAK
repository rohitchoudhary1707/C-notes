//sorted Array OR elements are stored in Array in ASSCENDING ORDER
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10];
int i,n,j,t;
cout<<"\nHow many elements required in array";
cin>>n;
cout<<"\nEnter elements in Array :";
for(i=0;i<n;i++)
cin>>a[i];

for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
cout<<"\nSorted array is:=";
for(i=0;i<n;i++)
cout<<endl<<a[i];
getch();
}
