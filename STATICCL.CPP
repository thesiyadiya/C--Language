#include<conio.h>
#include<stdio.h>
void main()
{
	static int a;
	a=576;
	clrscr();
	printf("\n a=%d",a);
	{
		static int a=622;
		printf("\n A=%d",a);
	}
	getch();
}