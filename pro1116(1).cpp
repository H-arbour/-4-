#include <stdio.h>
#include <string.h>
#define N 20
int main()
{
	int i,Len,dc;
	char ch[N];
	gets(ch);
	Len=strlen(ch);
	dc=0;
	for(i=0;i<Len;i++)
	{
	if(ch[i]>=65 && ch[i]<=90)
	dc++;
	}
	
	printf("¹²%d¸ö´óÐ´×ÖÄ¸¡£\n",dc);
	return 0;
} 
