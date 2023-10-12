#include<stdio.h>
#include<conio.h>
void draw();
void main()
{
	clrscr();
	draw();
	getch();
}
void draw()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}