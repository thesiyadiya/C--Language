#include<conio.h>
#include<stdio.h>
void main()
{
	int i=1,j;
	clrscr();
	do
	{
		j=5;
		do
		{
			printf(" ");
			j--;
		}while(j>=i);
		j=1;
		do
		{
			printf("* ");
			j++;
		}while(j<=i);
		i++;
		printf("\n");
	}while(i<=5);
	getch();
}