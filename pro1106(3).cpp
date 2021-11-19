#include <stdio.h>
#include <conio.h>

void print_fun(int n)
{ int i,j,k;
  for(i=1; i<=n; /**/  i++   /**/ )
  { k=i;
    for(j=1;j<=n;j++)
    { printf("%2d  ",k);         
      k=k+/**/ 5 /**/;
    }
    printf("\n");
  }
}

int main()
{ int n;
  do
  { printf("Input n(2<=n And n<=10):");
    scanf("%d",&n);
  }while(n<2 ||/**/  n>10  /**/);
  print_fun(n);  
  getch();
  return 0;
}
