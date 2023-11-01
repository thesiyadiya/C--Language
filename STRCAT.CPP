#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char src[50],dest[50];
	clrscr();
	strcpy(src,"Geetanjali");
	strcpy(dest,"college");
	strcat(src,dest);
	printf("final destination string :%s",src);
	getch();
}