#include <stdio.h>
#include <conio.h>
#define N 4

int main()
{
  int a[N][N];
  int i,j,flag=1;
  printf("Input array a[4][4]: \n");
  for(i=0;i<N; i++)
  {
     for(j=0;j<N; j++)
        scanf("%d",&a[i][j]);
  }
  for(i=0; i<N && flag; i++)
  {
     for(j=0; j<i; j++)
        if( a[i][j] != /**/ a[j][i] /**/)
        {
           flag=0;
           /**/ break /**/;
        }
  }
  if(/**/ flag==1 /**/)
    printf("Array a is yes!\n");
  else
    printf("Array a is no!\n");
  getch();
  return 0;
}

