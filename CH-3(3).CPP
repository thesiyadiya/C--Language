#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
	int ans;
	clrscr();
	ans=sum();
	printf("\n sum=%d",ans);
	getch();
}

int sum()
{
	int a,b;
	printf("\n Enter Value:");
	scanf("%d",&a);
	printf("\n Enter Value:");
	scanf("%d",&b);
	return a+b;
}