#include <stdio.h>

int main(){
  double x, xm, dx=0.1;

  printf("範囲の上限を入力: ");
  scanf("%lf", &xm);

  for( x=0.0; x<=xm+0.09; x+=dx ) printf("x=%f   y=%f\n", x, x*x);
  return 0;
}
