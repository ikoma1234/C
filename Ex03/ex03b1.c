#include <stdio.h>
int main()
{
  double a,b;
  
  printf("三角形の底辺の長さと高さをcmで入力してください :");
  
  scanf("%lf%lf" , &a , &b);
  
  printf("三角形の面積は%f平方cmです\n",(a*b)/2);

  return 0;
}
