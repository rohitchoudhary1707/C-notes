#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int i,j,k,n,m,p,q;
int a[5][5],b[5][5],c[5][5];
cout<<"\nHow many rows are required in first matrix;=";
cin>>m;
cout<<"\nHow many columns are required in first matrix:=";
cin>>n;
cout<<"\nHow many rows are required in second matrix:=";
cin>>p;
cout<<"\nhow many columns are required second matrix:=";
cin>>q;
if(n!=p)
{
cout<<"\nMatrix multiplication not possible";
getch();
exit(0);
}
cout<<"\nEnter values in first matrix :=";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\nEnter values in second matrix :=";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
cin>>b[i][j];
}
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
cout<<"\nProduct of matrices is:=";
for(i=0;i<m;i++)
{
cout<<endl;
for(j=0;j<q;j++)
cout<<"\t"<<c[i][j];
}
getch();
}