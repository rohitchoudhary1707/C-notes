#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[4][4]={4,5,6,7,
	     9,2,5,8,
	     9,2,3,4,
	     1,2,3,4};
int i,j,t;
cout<<"\nDiagonal elements are:=";
for(i=0;i<4;i++)
{
cout<<endl;
for(j=0;j<4;j++)
{
if(i==j)
cout<<a[i][j];
}
}
getch();
}