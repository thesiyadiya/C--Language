#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char a[20],*s;
	clrscr();
	strcpy(a,"BCA & BSCIT SEM-1");
	s=strrchr(a,' ');
	printf("\n %s",s);
	getch();
}