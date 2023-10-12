#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[20];
	char *res;
	strcpy(a,"BSCIT SEM-1");
	res=strchr(a,'B');
	printf("\n A=%s",res);
	getch();
}