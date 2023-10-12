#include<stdio.h>
#include<conio.h>
void main()
{
	int v1,v2,ch;
	clrscr();
	printf("\n Enter 2 values: ");
	scanf("%d %d",&v1,&v2);
	printf("\n1.Add \n2.Sub");
	printf("\n3.Mul \n4.Div");
	printf("\n Enter Your Value");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\n Add=%d",v1+v2);
			break;
		case 2:
			printf("\n sub=%d",v1-v2);
			break;
		case 3:
			printf("\n Mul=%d",v1*v2);
			break;
		case 4:
			printf("\n Div=%d",v1/v2);
			break;
		default:
			printf("\n NOT IN LIST");
			break;
	}
	getch();
}