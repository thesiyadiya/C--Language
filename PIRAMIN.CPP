#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k=1;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}