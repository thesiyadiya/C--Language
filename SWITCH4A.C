#include<stdio.h>
#include<conio.h>
void main()
{
	float amt=0,v=0;
	int ch=0;
	clrscr();
	printf("\n Enter Your Opening Amount:");
	scanf("%f",&amt);
	while(ch!=999)
	{
		clrscr();
		printf("\n 1.Crd(+)");
		printf("\n 2.Dbt(-)");
		printf("\n 3.Show Amount");
		printf("\n 0.Exit");
		printf("\n Select Your Option:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
				exit(0);
				break;
			case 1:
				printf("\n Enter Amount For CRD:");
				scanf("%f",&v);
				amt=amt+v;
				break;
			case 2:
				printf("\n Enter Amount For DBT:");
				scanf("%f",&v);
				amt=amt-v;
				break;
			case 3:
				printf("\n AMOUNT=%f",amt);
				break;
			default:
				printf("\n Not valid");
				break;
		 }
		 getch();
	}
	getch();

}
