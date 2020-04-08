
#include <stdio.h>

int main () {

  int input;

  while( input <= 0 ){
    printf("出席番号を入力して下さい>");
    scanf("%d",&input);

    if( input > 0 && input % 3 == 0)
      {
	printf("この人は青組です\n");
	input=0;
      }
    else if( input > 0 && input % 3 == 1)
      {
	printf("この人は赤組です\n");
	input=0;
      }
    else if( input > 0 && input % 3 == 2)
      {
	printf("この人は白組です\n");
	input=0;
      }
    else
      {
	input=1;
      }
  
  }

  printf("プログラムを終了します\n");
  return 0;
}
