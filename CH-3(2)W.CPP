/*
DEF:WITH ARG NO RET.UDF.
*/
#include<stdio.h>
#include<conio.h>
void name (char nm[30]);
void main()
{
	clrscr();
	name("THIS IS CHAR ARY DEMO");
	getch();
}

void name(char a[30])
{
	printf("\n %s",a);
}
