#include <stdio.h>
#include <conio.h>

double fun(float x)
{/**/
double y;
 if (x<3)
    y=1.5;
 if (x=3)
    y=10;
 else 
    y=2*x-2.8;
return y;
 /**/
}

int main()
{
  float x;
  printf("Input x: ");
  scanf("%f",&x);
  printf("fun(%.3f) = %.3lf\n",x,fun(x));
  getch();
  return 0;
}
