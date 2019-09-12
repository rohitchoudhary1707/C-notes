#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[4][4]={4,5,6,7,
	     9,2,5,8,
	     9,2,3,4,
	     1,2,3,4};
int i,j;
cout<<"\nElements are=";
for(i=0;i<4;i++)
{
cout<<"\n";
for(j=0;j<4-i-1;j++)
cout<<" ";
for(j=3-i;j<4;j++)
cout<<a[i][j];
}
getch();
}