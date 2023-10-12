#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	a=1;
	goto l1;
	l1:
		if(a<=10)
		{
			printf("\n DIYA");
			a++;
			goto l1;
		}
	getch();
}