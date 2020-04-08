#include <stdio.h>

int main()
{
  int a[15] = {1,5,12,15,23,30,34,45,50,56,67,70,78,89,90};
  int b;

  printf("添字を入力してください:");

  scanf("%d", &b);

  if( 0<=b && b<15 ){

    printf("dataset[%d]=%d \n",b,a[b]);
  }
  else{
    printf("範囲外です！\n");
  }
    
  return 0;
}
