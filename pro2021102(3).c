#include <stdio.h>
#define N 4

int main()
{
	int data[N][N];
	int mo,i,j;
	for(i=0;i<N;i++)
	   for(j=0;j<N;j++)
	    scanf("%d",&data[i][j]);
	    for(i=0;i<N;i++)
	       for(j=0;j<N;j++)
	    if(i<=1&&j<=0&&j<=1&&i<=0)
		 data[i][j] =data[i][j]+10;
		else
		 data[i][j] =data[i][j]+5;
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
		printf("%4d",data[i][j]);
		printf("\n");	
		 } 
	return 0;
}
