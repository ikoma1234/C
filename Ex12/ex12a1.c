

#include <stdio.h>

int function1(int);
int function2(int);
void print_value(int,int);

int main(void)
{
  int n=3;

  print_value(0,n);
  function1(n);
  print_value(1,n);
  function2(n);
  print_value(2,n);
  return 0;
}

int function1(int n)
{
  print_value(3,n);
  n=n*n;
  print_value(4,n);
  return n;
}

int function2(int m)
{
  int n=0;
  print_value(5,n);
  n=m*m;
  print_value(6,n);
  return n;
}

void print_value(int m, int n)
{
  printf("No.%d, n:%d\n",m,n);
}
