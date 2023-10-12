#include<conio.h>
#include<stdio.h>
void main()
{
	register int a;
	a=20;
	clrscr();
	{
		register int a;
		a=10;
		printf("\n A=%d",a);
	}
	printf("\n A=%d",a);
	getch();
}