/* cirareaをint型からdouble型に修正、rを返すように記述　mensekiを出力する%gを%.3fに修正 */
#include <stdio.h>
#define PI 3.141592
double cirarea_r4(double);

int main()
{
  double x;
  double menseki;

  printf("円の半径を入力して下さい ");
  scanf("%lf",&x);
  menseki=cirarea_r4(x);
  printf("半径%gの円の面積は%.3fです\n",x, menseki);
  return 0;
}

double cirarea_r4(double r)
{
    r=PI*r*r;
    r=(r*1000+0.5)/1000;
    return r;
}
