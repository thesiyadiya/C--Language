#include<conio.h>
#include<stdio.h>
#include<string.h>
int main(){
	char src[40];
	char dest[40];
	clrscr();
	strcpy(src,"Geetanjali college");
	strncpy(dest,src,10);
	printf("final copied string:%s\n",dest);
	getch();
	return(0);
}


