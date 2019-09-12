#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,m;
int a[5][5];
cout<<"\nHow many rows are required:=";
cin>>m;
cout<<"\nHow many columns are required:=";
cin>>n;

cout<<"\nEnter values in matrix :=";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\nMatrix are"<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}
getch();
}