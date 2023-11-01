#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char a[20]="This is Demo",*b;
	clrscr();
	b=strstr(a,"Demo");
	if(b)
		printf("\n %s",b);
	else
		printf("\n string is No AValilable");
	getch();
}