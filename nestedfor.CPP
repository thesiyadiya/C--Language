#include<conio.h>
#include<stdio.h>
void main()
{
	int i,a,b;
	clrscr();
	printf("\n Enter Value");
	scanf("%d",&a);
	printf("\Enter value");
	scanf("%d",&b);
	if(a<b)
	{
		for(i=a;i<=b;i++)
		{
			printf("%d",i);
		}
	}
	else
	{
		for(i=a;i>=b;i--)
		{
			printf(" %d",i);
		}
	}
	getch();
}

