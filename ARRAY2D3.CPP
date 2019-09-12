#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
int a[3][2]={
	     3,4,
	     5,6,
	     8,9
	     };
int b[3][3]={
	    {6,9,8},
	    {2,6,8},
	    {4,9,3}
	    };
cout<<"\nMatrix a is:=";
for(i=0;i<3;i++)
{
cout<<"\n";
for(j=0;j<2;j++)
cout<<"\t"<<a[i][j];
}

cout<<"\nMatrix b is:=";
for(i=0;i<3;i++)
{
cout<<"\n";
for(j=0;j<3;j++)
cout<<"\t"<<b[i][j];
}
getch();
}