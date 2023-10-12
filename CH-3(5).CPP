#include<stdio.h>
#include<conio.h>
int sum (int,int);
void mul (int,int);
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
	mul(a,b);
	return a+b;
}
void mul(int i, int j)
{

	printf("\n mul=%d",i*j);
}

