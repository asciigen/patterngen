#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Please enter size of letter \t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf(".");
		}
		printf("\n");
	}
	for(i=n;i>=0;i--)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf(".");
		}
		printf("\n");
	}
	return 0;
}
