#include <stdio.h>
#define N 7

int main()   
 {
 	int data[N];
 	int mo,i;
 	for(i=0;i<N;i++)
 	   scanf("%d",&data[i]);
 	mo=data[N-1];
	for(i=N-2;i>=0;i--)
	   data[i+1]=data[i];
	data[0]=mo;
	for(i=0;i<N;i++)
	   printf("%4d",data[i]);   
 	return 0;
 }
