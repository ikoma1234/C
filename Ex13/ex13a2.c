#include <stdio.h>
#include <stdlib.h>

#define STSIZE 100

void push(double);
double pop(void);

int stack[STSIZE];
int top = 0;

int main(){
#include <stdio.h>
#include <stdlib.h>

#define STSIZE 100

void push(double);
double pop(void);

int stack[STSIZE];
int top = 0;

int main(){
  int status;
  double data;

  while (1) {
    printf("挿入:1, 取り出し:2>> ");

    scanf("%d",&status);
    if (status == 1){
      scanf("%lf",&data);
      push(data);
    }
    if (status == 2)
      printf("データ: %.3f\n", pop() );
  }

  printf("\n");
  return 0;
}

void push(double num){
  if (top == STSIZE) {
    printf("Stack overflow!\n");
    exit (2);
  }
  stack[top] = num;
  top++;
}

double pop(void){
  if (top == 0) {
    printf("Stack is empty!\n");
    exit (3);
  }
  top--;
  return stack[top];
}#include <stdio.h>
#include <stdlib.h>

#define STSIZE 100

void push(double);
double pop(void);

int stack[STSIZE];
int top = 0;

int main(){
  int status;
  double data;

  while (1) {
    printf("挿入:1, 取り出し:2>> ");

    scanf("%d",&status);
    if (status == 1){
      scanf("%lf",&data);
      push(data);
    }
    if (status == 2)
      printf("データ: %.3f\n", pop() );
  }

  printf("\n");
  return 0;
}

void push(double num){
  if (top == STSIZE) {
    printf("Stack overflow!\n");
    exit (2);
  }
  stack[top] = num;
  top++;
}

double pop(void){
  if (top == 0) {
    printf("Stack is empty!\n");
    exit (3);
  }
  top--;
  return stack[top];
}#include <stdio.h>
#include <stdlib.h>

#define STSIZE 100

void push(double);
double pop(void);

int stack[STSIZE];
int top = 0;

int main(){
  int status;
  double data;

  while (1) {
    printf("挿入:1, 取り出し:2>> ");

    scanf("%d",&status);
    if (status == 1){
      scanf("%lf",&data);
      push(data);
    }
    if (status == 2)
      printf("データ: %.3f\n", pop() );
  }

  printf("\n");
  return 0;
}

void push(double num){
  if (top == STSIZE) {
    printf("Stack overflow!\n");
    exit (2);
  }
  stack[top] = num;
  top++;
}

double pop(void){
  if (top == 0) {
    printf("Stack is empty!\n");
    exit (3);
  }
  top--;
  return stack[top];
}#include <stdio.h>
#include <stdlib.h>

#define STSIZE 100

void push(double);
double pop(void);

int stack[STSIZE];
int top = 0;

int main(){
  int status;
  double data;

  while (1) {
    printf("挿入:1, 取り出し:2>> ");

    scanf("%d",&status);
    if (status == 1){
      scanf("%lf",&data);
      push(data);
    }
    if (status == 2)
      printf("データ: %.3f\n", pop() );
  }

  printf("\n");
  return 0;
}

void push(double num){
  if (top == STSIZE) {
    printf("Stack overflow!\n");
    exit (2);
  }
  stack[top] = num;
  top++;
}

double pop(void){
  if (top == 0) {
    printf("Stack is empty!\n");
    exit (3);
  }
  top--;
  return stack[top];
}  int status;
  double data;

  while (1) {
    printf("挿入:1, 取り出し:2>> ");

    scanf("%d",&status);
    if (status == 1){
      scanf("%lf",&data);
      push(data);
    }
    if (status == 2)
      printf("データ: %.3f\n", pop() );
  }

  printf("\n");
  return 0;
}

void push(double num){
  if (top == STSIZE) {
    printf("Stack overflow!\n");
    exit (2);
  }
  stack[top] = num;
  top++;
}

double pop(void){
  if (top == 0) {
    printf("Stack is empty!\n");
    exit (3);
  }
  top--;
  return stack[top];
}
