#include <stdio.h>

int main () {

  int input;
  int count = 0;

  while( count < 1 ){


  /* この部分に必要なプログラムを補う */
    printf("偶数は0回入力されています．正の整数を入力して下さい．");

  scanf("%d",&input);
  if (input %2 == 0)
    {
      count = count+1;
    }  
    
  }
    
  while( count < 2){
    printf("偶数は1回入力されています．正の整数を入力して下さい.");

  scanf("%d",&input);
  if (input %2 == 0)
    {
      count = count+1;
    }

  }

    printf("2回偶数が入力されました．プログラムを終了します．\n");
  return 0;
}
