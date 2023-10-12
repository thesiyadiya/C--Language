#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j;
	clrscr();
	while(i<=5)
	{
		j=5;
		while(j>=i)
		{
			printf(" ");
			j--;
		}
		j=1;
		while(j<=i)
		{
			printf(" *");
			j++;
		}
		i++;
		printf("\n");
	}
	i=4;
	while(i>=1)
	{
		j=5;
		while(j>=i)
		{
			printf(" ");
			j--;
		}
		j=1;
		while(j<=i)
		{
			printf(" *");
			j++;
		}
		printf("\n");
		i--;
	}
	getch();
}