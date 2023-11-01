#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[]="fresh";
	char str2[]="refresh";
	int i,j,k;
	clrscr();
	j=strcmp(str1,"fresh");
	i=strcmp(str1,str2);
	k=strcmp(str1,"f");
	printf("\n %d \n %d \n %d",i,j,k);
	getch();
}