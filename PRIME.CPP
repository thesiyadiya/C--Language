#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,flag=0;
	clrscr();
	printf("\n Enter value");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%2==0 || n%3==0 || n%5==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf
		("\n Not Prime");
	}
	else
	{
		printf("\n prime");
	}
	getch();
}