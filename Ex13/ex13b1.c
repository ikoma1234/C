
#include <stdio.h>
#include <stdlib.h>

#define STSIZE 100

void push(int);
int pop(void);
void kensaku(int);

int stack[STSIZE];
int top = 0;

int main(){
  int status,i;
  int data;

  while (1) {
    printf("挿入:1, 取り出し:2, 検索:3 >> ");

    scanf("%d",&status);
  
    if (status == 1){
      scanf("%d",&data);
      push(data);
      printf("[Stack] ");
      for(i=0;i<top;i++){
	printf("%d ",stack[i]);
      }
       printf("\n");
    }
    if (status == 2){
      printf("データ: %d\n", pop() );
      printf("[Stack] ");
      for(i=0;i<top;i++){
	printf("%d ",stack[i]);
      }
      printf("\n");
    }
    if (status == 3){
      scanf("%d",&data);
      kensaku(data);
      printf("[Stack] ");
      for(i=0;i<top;i++){
	printf("%d ",stack[i]);
      }
      printf("\n");
    }
    else if(status!=1&&status!=2&&status!=3)
      break;
  }

  printf("\n");
  return 0;
}

void push(int num){
  if (top == STSIZE) {
    printf("Stack overflow!\n");
    exit (2);
  }
  stack[top] = num;
  top++;
}

int pop(void){
  if (top == 0) {
    printf("Stack is empty!\n");
    exit (3);
  }
  top--;
  return stack[top];
}

void kensaku(int num){
  int i,x;
  x=1;
  for(i=0;i<top;i++){
    if(stack[i]==num){
      printf("%dはスタック[%d]に存在します\n",num,i);
      x=0;
    }
  }
  if(x==1)
    printf("%dはスタックにありません\n",num);
}

