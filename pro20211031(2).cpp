#include <stdio.h>
#include <conio.h>
#include <math.h>

double fun(float x)
{/**/
	double y;
 if(x>2)
    y=sin(1.2+3*x);
 if(x==2)
    y=log(2);
 if(x<2)
    y=2.5*cos(x);
    return y;
 /**/
}

int main()
{	float x;
	printf("Input x: ");
	scanf("%f",&x);
	printf("fun(%.3f) = %.4lf\n",x,fun(x));  
	return 0;
}

