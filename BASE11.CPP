#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=10;
cout<<endl<<a++ + ++a;
//           10 +   12
cout<<endl<<a-- - --a;
//           12 - 10
cout<<endl<<a++ + a;
//           10 + 11
cout<<endl<<a + ++a;
//           12 + 12
cout<<endl<<a-- - --a;
//         12  -  10
cout<<endl<<a - --a;
//          10 - 10
getch();
}
