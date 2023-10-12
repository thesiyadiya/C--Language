#include<stdio.h>
#include<conio.h>
void main()
{
	int a,c=10;
	clrscr();
	a=1;
	goto l1;
	l1:
		if(a<=10)
		{
			printf("\n %d*%d=%d",c,a,c*a);
			a++;
			goto l1;
		}
	getch();
}