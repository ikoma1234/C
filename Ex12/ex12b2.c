#include <stdio.h>
#include <math.h>
#define EPS 1.0e-6

double f(double);
double df(double);

int main()
{
  double x, fx, dfx;
  printf("x(k-1)\t\tfx\t\txdfx\t\tx(k)\t\tf(x)\n");
  x=0.0;
  
  while((fx = f(x)) > EPS ){
    dfx = df(x);
    printf("%f\t%f\t%f",x,fx,dfx);
    x = x - fx/dfx;
    printf("\t%f\t%12.10f\n",x,f(x));
  }

  printf("x = %f\n",x);
  return 0;
}

double f(double x)
{
  double fx;
  fx = exp(x) - 3*x;
  return fx;
}

double df(double x)
{
  double dfx;
  dfx = exp(x) - 3;
  return dfx;
}
