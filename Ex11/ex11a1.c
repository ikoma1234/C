#include <stdio.h>
double c2f(int);

int main(void){
  int sesi;
  double kasi;
  
  printf("摂氏(°C)	 華氏（°F)\n");
  
  for(sesi=0;sesi<=100;sesi++){
    if(sesi%5==0)
      printf("%d     %.2f\n",sesi,c2f(sesi));
	}

  return 0;
}

double c2f(int sesi){
    return 9*(double)sesi/5 + 32 ;
  }
