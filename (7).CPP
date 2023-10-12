#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n Enter value= ");
	scanf("%d",&a);
	printf("\n Enter value= ");
	scanf("%d",&b);
	a>b?printf("\n A is >"):
	a==b?printf("\n a=b"):printf("\n b is >");
	getch();
}