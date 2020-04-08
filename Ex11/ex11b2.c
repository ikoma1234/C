#include <stdio.h>
#define INIT_CREDIT 100000 

int payment(double, int);
int fee(int);

int main() {
  int balance = INIT_CREDIT;
  int activity, debit_yen, payment_yen, fee_yen;
  double rate = 0.0;

  while (1) {
    printf("\nBalance: %d yen\n", balance);
    printf("Input payment(- local currency) or income(+ yen) >> ");
    scanf("%d", &activity);
    if (activity == 0) {
      break;
    } else if (activity > 0) {
        debit_yen = activity;
    } else {
        printf("Input exchange rate (yen/local) >> ");
        scanf("%lf", &rate);
        payment_yen = payment(rate, -activity);
        fee_yen = fee(payment_yen);
        debit_yen = - (payment_yen + fee_yen);
        printf("fee: %d yen\n", fee_yen);
      }
    balance = balance + debit_yen;
  }
  printf("\nBalance: %d yen\n", balance);

  return 0;
}

int payment(double rate, int activity){
  return activity*rate;
}
  
int fee(int payment_yen){
  int x;
  x=(payment_yen/100)*3;
  if(x>=10)
    x=x-(x%10);
  else
    x=10;
  
  return x;
}
