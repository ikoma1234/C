#include <stdio.h>
int main()
{
  int a = 1;
  int b = 0;
  int c = -1;

  if(a != 0) printf("条件式 1 は真\n");
  if(b == 1) printf("条件式 2 は真\n");
  if((a == 0 || b == 0)) printf("条件式 3 は真\n");
  if(a*b == 0) printf("条件式 4 は真\n");
  if(!(a != 1 || b == 0)) printf("条件式 5 は真\n");
  if((a == 0 && b == 0)) printf("条件式 6 は真\n");
  if(b*b+c*c == 0 ) printf("条件式 7 は真\n");
  if((a >= 0 && b >= 0)) printf("条件式 8 は真\n");
  if(!(a > 0 && c > 0)) printf("条件式 9 は真\n");
  if(!b) printf("条件式 10は真\n"); 

  return 0;
}
