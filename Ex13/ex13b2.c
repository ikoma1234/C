#include <stdio.h>
#include <stdlib.h>

#define QSIZE 5

void enqueue(int);
int dequeue(void);

int queue[QSIZE];
int head = 0;
int tail = 0;   /* データ数 */

int main(){
  int data, status, i; /* もし必要なら変数宣言を追加してもよい */

  while (1) {
    printf("input>> ");
    status = scanf("%d", &data);
    if (status != 1) break;
    if (data == 0) printf("  Data: %d\n", dequeue() );
    else enqueue(data);

    printf("[Queue] %d\n",dequeue());
  }
  return 0;
}

void enqueue(int num){
  int next = (tail+1)%QSIZE;

  if(next==head){
    printf("Queue overflow!/n");
    exit(2);
  }
  queue[tail]=num;
  tail=next;
}

int dequeue(void){
  int val;

  if(head==tail){
    printf("Queue is empty!\n");
    exit(3);
  }
  val = queue[head];
  head=(head+1)%QSIZE;
  return val;
}
