#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	clrscr();
	goto dsd;
	dsd:
		if(a>=1)
		{
			printf("\n %d",a);
			a--;
			goto dsd;
		}
	getch();
}