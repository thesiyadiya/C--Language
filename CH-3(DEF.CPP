#include<conio.h>
#include<stdio.h>
int add=0,sub=0,mul=0,div=0,v1;
int sum ();
int sub ();
int div ();
int mul ();
void main ()
{
	int i,n;
      	clrscr();
	printf("\n Enter Value: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf ("Enter value: ");
		sacnf ("%d",&v1);
		add+=sum();
		sub-=sub();
		mul*=mul();
		div/=div();
	}
}
getch();

int sum();
{
 return add+v1;
}
int sub();
{
	return sub+v1;
]
int mul();
{
	return mul+v1;
}
int div();
{
	return div+v1;
}