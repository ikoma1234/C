#include <stdio.h>
int main(void){

  int i,j,x;

  for(i=1; i<=20 ; i++){
    for(j=1; j<=19 ; j++){
      if(2*i+4*j+6*(20-i-j)==88){
	printf("鶴=%d   亀=%d   てんとう虫=%d\n",i,j,20-i-j);
	x=1;
      }
    }
  }
  if(x!=1)
    printf("解なし");

  return 0;
}
