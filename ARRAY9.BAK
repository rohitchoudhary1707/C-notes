#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int a[10];
int i,n,item;
cout<<"\nHow many elements required in array";
cin>>n;
cout<<"\nEnter elements in Array :";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\nEnter value to be searched in array";
cin>>item;
for(i=0;i<n;i++)
{
if(a[i]==item)
{
cout<<"\nValue found in array at location "<<i+1;
getch();
exit(0);  //header file process.h is required for using this function
}
}
cout<<"\nValue not found in array";
getch();
}