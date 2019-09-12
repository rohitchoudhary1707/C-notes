#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10];
int i,n,m,k,l;
cout<<"\nHow many elements required in array <=10 --->";
cin>>n;
cout<<"\nEnter "<<n<<" elements in Array :";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
k=0;
l=a[i];
while(l>0)
{
m=l%10;
k=k*10+m;
l/=10;
}
a[i]=k;
}
cout<<endl<<n<<" elements in Array :";
for(i=0;i<n;i++)
cout<<endl<<a[i];
getch();
}