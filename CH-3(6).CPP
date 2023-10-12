#include<stdio.h>
#include<conio.h>
int fact (int c );
void main()
{
	int a;
	clrscr();
	a=fact(3);
	printf("\n RESULT %d",a);
	getch();
}

int fact (int x)
{
	int r;
	if(x==0)
	{
		r=1;
	}
	else
	{
		r=x*fact(x-1);
	}
	return r;
}