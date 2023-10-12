#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	clrscr();
	if(a==0)
	{
		printf("\n ZERO");
	}
	else if (a%2==0)
	{
		printf("\n EVEN");
	}
	else
	{
		printf("\n ODD");
	}
	getch();
}