#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char a [25],*b;
	clrscr();
	strcpy(a,"Geetanjali College");
	b=strpbrk(a,"t");
	printf("\n %s",b);
	getch();
}
