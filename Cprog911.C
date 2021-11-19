#include <stdio.h>
#include <conio.h>
#include <math.h>

double fun(float x)
{/**/
double y;
 if (x>10)
    y=x-5.7;
 else if (x>=1)
    y=sqrt (2*x-1.3);
 else
    y=abs(x);
return y;
 /**/
}

int main()
{
   float x;
   printf("Input x: ");
   scanf("%f",&x);
   printf("fun(%.3f) = %lf\n",x,fun(x));
   getch();
   return 0;
}

