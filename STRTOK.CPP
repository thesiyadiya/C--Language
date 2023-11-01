#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char a[25], *b;
	clrscr();
	strcpy(a,"BCA & BSCIT sem-1");
	b=strtok(a," ");
	printf("\n %s",b);
	while(b!=NULL)
	{
		printf("\n %s",b);
		b=strtok(NULL," ");
	}
	getch();
}
