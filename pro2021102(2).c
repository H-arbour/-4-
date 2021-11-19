#include <stdio.h>
#define N 8

int main()
{
	int data[N];
	int mo,i,j;
	for(i=0;i<N;i++)
	   scanf("%d",&data[i]);
	   for(i=0;i<=N-2;i++)
	      for(j=0;j<=N-2-i;j++)
	         if(data[j]<data[j+1])
	         {
	         	mo=data[j+1];
	         	data[j+1]=data[j];
	         	data[j]=mo;
			 }
	for(i=0;i<N;i++)		 
	printf("%4d",data[i]);		 
	return 0;
}
