#include <stdio.h>
void d2btrans(int);

int main(void){

  int i;
  
  for(;;){
  printf("2進数に変換したい10進数の数値を入力してください\n");
  scanf("%d",&i);
  if(i<0)
    break;
  d2btrans(i);
  }

  return 0;
}

void d2btrans(decimal){
  int binary = 0;
  int base = 1;

  while(decimal>0){
    binary = binary + ( decimal % 2 ) * base;
    decimal = decimal / 2;
    base = base * 10;
  }
  
  printf("%08d\n", binary);
}

  
