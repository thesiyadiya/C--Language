#include<conio.h>
#include<stdio.h>
void main()
{
	int a=10,b=30, c=20;
	clrscr();
	if(a>b && a>c)
	{
		printf("\n A is big");
	}
	if(b>a && b>c)
	{
		printf("\n B is big");
	}
	if (c>a && c>b)
	{
		printf("\n C is big");
	}
	getch();
}