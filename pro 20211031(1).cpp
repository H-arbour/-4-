#include <stdio.h>
#include <conio.h>
#include <math.h> 
double fun(float x)
{/**/
double y;
 if (x>1)
    y=10*sin(x);
 else if (x>=0)
    y=x*x;
 else 
    y=fabs(100-exp(x));
return y;
 /**/
}

int main()
{	float x;
	printf("Input x: ");
	scanf("%f",&x);
	printf("fun(%.3f) = %.3lf\n",x,fun(x));  
	return 0;
}
