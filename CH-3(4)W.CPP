#include<stdio.h>
#include<conio.h>
int sum (int,int);
void main()
{
	int ans;
	clrscr();
	ans=sum(10,20);
	printf("\n sum=%d",ans);
	getch();

}

int sum (int a,int b)
{
	return a+b;
}

