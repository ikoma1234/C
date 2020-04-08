#include <stdio.h>
double nijou(double);
double circle1(double);
double cylinder(double, double);

int main(void){
  double r,h;
  
  printf("円の半径を入力してください:\n");
  scanf("%lf",&r);
  
  printf("円の面積:%f\n",circle1(r));

  printf("この円を底面とする円柱の高さを入力してください:\n");
  scanf("%lf",&h);

  printf("円柱の体積:%f\n",cylinder(r,h));
  
  return 0;
}

double nijou(double x)
{
  double y;
  y=x*x;
  return y;
}

double circle1(double r)
{
  double area;
  area = 3.14*nijou(r);
  return area;
}

double cylinder(double r, double h)
{
  double volume;
  volume = circle1(r)*h;
  return volume;
}

