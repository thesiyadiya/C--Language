#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	a=3;
	switch(a)
	{
		case 1:
			printf("\n THIS IS ONE");
			break;
		case 2:
			printf("\n THIS IS TWO");
			break;
		case 3:
			printf("\n THIS IS NOT ONE OR TWO");
			break;
		default:
			printf("\n NOT ONE");
			break;
	}
	getch();
}