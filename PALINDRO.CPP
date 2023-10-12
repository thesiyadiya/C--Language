#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,r=0,s=0;
	clrscr ();
	printf("\n Enter Any Number=");
	scanf("%d",&n);
	a=n;
	r=n%10;
	s=(s*10)+r;
	n=n/10;
	printf("\n R=%d \t s=%d \t n=%d",r,s,n);
	r=n%10;
	s=(s*10)+r;
	n=n/10;
	printf("\n R=%d \t s=%d \t n=%d",r,s,n);
	r=n%10;
	s=(s*10)+r;
	n=n/10;
	printf("\n R=%d \t s=%d \t n=%d",r,s,n);
		if(a==s)
		{
			printf("\n PALINDROME");
		}
		else
		{
			printf("\n NO PALINDROME");
		}
	getch();
}





