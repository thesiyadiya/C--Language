#include<stdio.h>
#include<conio.h>
void main()
{
	auto int a;
	a=20;
	clrscr();
	{
		auto int a;
		a=10;
		printf("\n A=%d",a);
	}
	printf("\n A=%d",a);
	getch();
}