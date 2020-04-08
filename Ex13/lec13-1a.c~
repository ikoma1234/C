/***************************************
 * lec14-1a.c
 *
 * スタックのサンプルプログラム。
 ***************************************/
#include <stdio.h>
#include <stdlib.h>

#define STSIZE 100

void push(int);
int pop(void);

int stack[STSIZE];
int top = 0;

int main(){
  int data, status, i;

  while (1) {
    printf("input>> ");
    status = scanf("%d", &data);
    if (status != 1) break;
    /* 入力値が0の場合はデータ取り出し、それ以外ならデータを
       スタックに追加する */
    if (data == 0) printf("Data: %d\n", pop() );
    else push(data);
  }

  printf("\n");
  return 0;
}

void push(int num){
  if (top == STSIZE) {
    /* スタックがいっぱいの場合、エラー処理を行う */
    printf("Stack overflow!\n");
    exit (2);
  }
  stack[top] = num;
  top++;
}

int pop(void){
  if (top == 0) {
    /* スタックが空の場合、エラー処理を行う */
    printf("Stack is empty!\n");
    exit (3);
  }
  top--;
  return stack[top];
}
