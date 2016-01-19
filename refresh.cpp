// This program provides a demo of ascii progress circle //
// Author: Deepak Sharma
// Date: 16 Jan 2015

#include<stdio.h>
int main()
{
	/* 	i,j are iteration variables.
	 	w_t is waiting time variable.
		speed is the progress speed
	*/
	int i,j,k,w_t=100,speed=50000,len=1000;
	printf("Please wait ... \n");
	for(i=0;i<w_t;i++)
	{
		printf("\b―");
		for(j=0;j<speed;j++){printf(" \b");}
		printf("\b\\");
		for(j=0;j<speed;j++){printf(" \b");}
		printf("\b|");
		for(j=0;j<speed;j++){printf(" \b");}
		printf("\b/");
		for(j=0;j<speed;j++){printf(" \b");}
                printf("  %d %% completed",i);
                printf("\r");

	}
	return 0;
}
