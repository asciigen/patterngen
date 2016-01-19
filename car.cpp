#include<stdio.h>
int main()
{
	int len=100000,i;
	printf("*");
	for(i=0;i<len;i++){printf(" \b");}
	printf("\b");
	printf("|");
	for(i=0;i<len;i++){printf(" \b");}
	printf("\b");
	return 0;
}
