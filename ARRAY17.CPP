#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[20],even[20],odd[20],i,j=0,k=0,n;
clrscr();
cout<<"Enter the no of elements";
cin>>n;
cout<<"enter "<<n<<" elements in array";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
even[j]=a[i];
j++;
}
else
{
odd[k]=a[i];
k++;
}
}

cout<<"\nEven elements are";
for(i=0;i<j;i++)
cout<<endl<<even[i];

cout<<"\nOdd elements are";
for(i=0;i<k;i++)
cout<<endl<<odd[i];

getch();
}