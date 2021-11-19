#include <stdio.h>
#include <conio.h>
#include <string.h>

void inverse(char a[])
{
  int i,j,len;
  char /**/ temp /**/;
  len=strlen(a);
  j=/**/ len-1 /**/;
  for(i=0; i<len/2; i++,j--)
  {
    temp=a[i];
  /**/
    a[j]=a[i];
    a[j]=temp;
  /**/
  }
}

int main()
{
  char a[20]="qwer123yu";
  int len;
  printf("Original string a: \n");
  puts(a);
  inverse(a);
  printf("Now string a: \n");
  puts(a);
  getch();
  return 0;
}

