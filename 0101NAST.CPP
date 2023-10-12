#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k=1;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			if(k==1)
			{
				k--;
			}
			else
			{
				k++;
			}
		}
		printf("\n");
	}
	 getch();
}