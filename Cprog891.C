#include <stdio.h>
#include <conio.h>

double fun(float x)
{/**/
double y;
 if (x<=500)
    y=5.5;
 else if(x<=2000)
    y=0.02*x;
 else if(x<=5000)
    y=0.08*(x-2000)+40;
 else
    y=75;
return y;
 /**/
}

int main()
{
  float x;
  printf("Input x: ");
  scanf("%f",&x);
  printf("fun(%.3f) = %.4lf\n",x,fun(x));
  getch();
  return 0;
}
