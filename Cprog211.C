#include <stdio.h>
#include <conio.h>
#include <math.h>

double fun(float x,float y)
{/**/
  double z;
  if (x>10 && y>8)
  y=x-5.7*y;
  if (x>=1 && x<=10 && y<8)
  y=sqrt(2*x-1.3)*y;
  if (x<1 && y==8)
  y=abs(x)*y;

  return z;
 /**/
}

int main()
{
   float x,y;
   printf("Input x,y: ");
   scanf("%f,%f",&x,&y);
   printf("fun(%.3f,%.3f) = %lf\n",x,y,fun(x,y));
   getch();
   return 0;
}

