#include<conio.h>
#include<stdio.h>

void main()
{
	int a[5],i;
	clrscr();
	a[0]=10;
	a[1]=20;
	a[2]=50;
	a[3]=8;
	a[4]=0;
	for (i=0; i<5;i++)
	{
		printf("%d ",a[i]);
	}

	getch();
}