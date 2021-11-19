#include <stdio.h>
#include <conio.h>
#include <math.h>

double fun(float x)
{/**/
  double y;
    y=(cos(3*x)+log(x*x+1)-2.5)/(fabs(x)+4.5);
  return y;
 /**/
}

int main()
{	float x;
	printf("Input x :");
	scanf("%f",&x);
	printf("fun(%.3f) = %.4lf\n",x,fun(x));  
	return 0;
}
