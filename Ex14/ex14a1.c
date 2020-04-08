#include <stdio.h>
int bmi_hantei(double);
int main(void){

  double BMI[12][2];
  double bmi[12];
  int i,j;
  int k=0;
  
  printf("身長(cm)と体重(kg)を空白で区切って 12 人分入力してください。\n");

  for(i=0;i<12;i++){
    for(j=0;j<2;j++){
      scanf("%lf",&BMI[i][j]);
    }
  }

  for(i=0;i<12;i++){
    bmi[i]=BMI[i][1]/((BMI[i][0]/100.00)*(BMI[i][0]/100.00));
  }

  printf("               BMI     状態\n");

  for(i=0;i<12;i++){
    printf("%d人目     %4.1f    ",i+1,bmi[i]);
    if(bmi_hantei(bmi[i])==-1) printf("やせている\n");
    else if(bmi_hantei(bmi[i])==0) {
      printf("正常\n");
      k++;
    }
    else printf("太っている\n");
  }
  if(k==0) printf("BMI 値が正常な人の割合は 0パーセントです。\n");
  else  printf("BMI 値が正常な人の割合は%dパーセントです。\n",(int)(((double)k/12.00)*100+0.5));

  return 0;
}


int bmi_hantei(double x){
  int hantei;
  
  if(x<18.5) hantei=-1;
  else if(x>=18.5 && x<25) hantei=0;
  else if(x>25) hantei=1;

  return hantei;
}
