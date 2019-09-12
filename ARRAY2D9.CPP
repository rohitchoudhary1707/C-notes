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
 for(i=0;i<3;i+=2)
 {
 for(j=0;j<4;j++)
 {
 t=a[i][j];
 a[i][j]=a[i+1][j];
 a[i+1][j]=t;
 }
 }
 cout<<"\nMatrix is:=";
 for(i=0;i<4;i++)
 {
 cout<<endl;
 for(j=0;j<4;j++)
 cout<<"\t"<<a[i][j];
 }

 getch();
 }
