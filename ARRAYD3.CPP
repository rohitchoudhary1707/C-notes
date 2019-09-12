#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[4][4]={4,5,6,7, //a[0][0],a[0][1],a[0][2],a[0][3] i=0,j=0,1,2,3
	     9,2,5,8, //a[1][0],[1][1],a[1][2]          i=1,j=0,1,2
	     9,2,3,4, //a[2][0],a[2][1]                 i=2,j=0,1
	     1,2,3,4};//a[3][0]                         i=3,j=0
int i,j;
cout<<"\nElement are=";
for(i=0;i<4;i++)
{
cout<<"\n";
for(j=0;j<4-i;j++)
cout<<a[i][j];
}
getch();
}