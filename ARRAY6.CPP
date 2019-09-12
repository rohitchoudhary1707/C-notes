#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10];
int i,n;
cout<<"\nHow many elements required in array <=10 ---->";
cin>>n;
cout<<"\nEnter "<<n<<" elements in array :";
for(i=0;i<n;i++)
cin>>a[i];

cout<<"\nArray elements are:";
for(i=0;i<n;i++)
cout<<endl<<a[i];

getch();
}