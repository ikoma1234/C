#include <stdio.h>
#define ROW 5

int main()
{
  int xmax,ymax,i,j,temp;
  int zahyou[ROW][2];

  for(i=0;i<ROW;i++){
    printf("点%dの座標を整数値で入力してください\n",i+1);
      for(j=0;j<2;j++)
	scanf("%d",&zahyou[i][j]);
  }

  if(zahyou[0][0]>zahyou[1][0]&&zahyou[0][0]>zahyou[2][0]&&zahyou[0][0]>zahyou[3][0]&&zahyou[0][0]>zahyou[4][0])
    xmax=1;
  if(zahyou[1][0]>=zahyou[0][0]&&zahyou[1][0]>zahyou[2][0]&&zahyou[1][0]>zahyou[3][0]&&zahyou[1][0]>zahyou[4][0])
    xmax=2;
  if(zahyou[2][0]>=zahyou[0][0]&&zahyou[2][0]>=zahyou[1][0]&&zahyou[2][0]>zahyou[3][0]&&zahyou[2][0]>zahyou[4][0])
    xmax=3;
  if(zahyou[3][0]>=zahyou[0][0]&&zahyou[3][0]>=zahyou[1][0]&&zahyou[3][0]>=zahyou[2][0]&&zahyou[3][0]>zahyou[4][0])
    xmax=4;
  if(zahyou[4][0]>=zahyou[0][0]&&zahyou[4][0]>=zahyou[1][0]&&zahyou[4][0]>=zahyou[2][0]&&zahyou[4][0]>=zahyou[3][0])
    xmax=5;
  
  printf("X座標が最大となる点は点%d(%d,%d)です\n",xmax,zahyou[xmax-1][0],zahyou[xmax-1][1]);

  if(zahyou[0][1]>zahyou[1][1]&&zahyou[0][1]>zahyou[2][1]&&zahyou[0][1]>zahyou[3][1]&&zahyou[0][1]>zahyou[4][1])
    ymax=1;
  if(zahyou[1][1]>=zahyou[0][1]&&zahyou[1][1]>zahyou[2][1]&&zahyou[1][1]>zahyou[3][1]&&zahyou[1][1]>zahyou[4][1])
    ymax=2;
  if(zahyou[2][1]>=zahyou[0][1]&&zahyou[2][1]>=zahyou[1][1]&&zahyou[2][1]>zahyou[3][1]&&zahyou[2][1]>zahyou[4][1])
    ymax=3;
  if(zahyou[3][1]>=zahyou[0][1]&&zahyou[3][1]>=zahyou[1][1]&&zahyou[3][1]>=zahyou[2][1]&&zahyou[3][1]>zahyou[4][1])
    ymax=4;
  if(zahyou[4][1]>=zahyou[0][1]&&zahyou[4][1]>=zahyou[1][1]&&zahyou[4][1]>=zahyou[2][1]&&zahyou[4][1]>=zahyou[3][1])
    ymax=5;
  
  printf("Y座標が最大となる点は点%d(%d,%d)です\n",ymax,zahyou[ymax-1][0],zahyou[ymax-1][1]);

    return 0;
}
