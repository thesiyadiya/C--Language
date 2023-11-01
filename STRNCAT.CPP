#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char source[]="Geetanjali";
	char target[]="college";
	clrscr();
	printf("\n Source string=%s",source);
	printf("\n Target string=%s",target);
	strncpy(source,target,5);
	printf("\n string after strncat()=%s",source);
	getch();
}