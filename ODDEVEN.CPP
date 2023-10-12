#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=1;i<=10;i++)
 {
 if(i%2==0)
  {
	printf("0");
  }
 else
  {
	printf("1");
  }
 }
 getch();
}