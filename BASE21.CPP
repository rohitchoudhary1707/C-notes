#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\nenter value of a");
scanf("%d",&a);    /*10*/
printf("\nenter value of b");
scanf("%d",&b);    /*15*/
printf("\nenter value of c");
scanf("%d",&c);    /*7*/
printf("\na>b && a>c=%d",(a>b && a>c));
//			  0   &&  1
printf("\na<b && a>c=%d",(a<b && a>c));
printf("\na>b || a>c=%d",(a>b || a>c));
printf("\na<b || a>c)=%d",(a<b || a>c));
printf("\n!(a<b || a>>c)=%d",!(a<b || a>c));
printf("\n!(a>b)=%d",!(a>b));
printf("\n!a=%d",!a);
printf("\n(a=b)=%d",(a=b));
getch();
}
