#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,l;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i%2==0)
		{
			for(l=1;l<=i+2;l++)
			{
				printf(" ");
			}
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}