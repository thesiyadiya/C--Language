#include<conio.h>
#include<stdio.h>
int a,b;
void swap(int,int);
void main( )
{
	clrscr();
	printf("\n Enter value");
	scanf("%d",&a);
	printf("\n Enter value");
	scanf("%d",&b);
	printf("\n A= %d \t B=%d",a,b);
	swap(a,b);
	printf("\n A= %d \t B=%d",a,b);
	getch();
}

void swap(int x,int y)
{
	a=y;
	b=x;
}