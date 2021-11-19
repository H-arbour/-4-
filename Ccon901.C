#include <stdio.h>
#include <conio.h>

int main()
{
  int n;
  for(/**/ n=300      /**/; n>=100; n--)
  {
    if(/**/ (n-5)%8==0      /**/ && (n-4)%7==0 && n%5==2)
    {
      printf("n=%d\n", n);
      /**/ break;      /**/
    }
  }
  getch();
  return 0;
}

