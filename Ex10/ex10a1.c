#include <stdio.h>
#define SIZE 10
int main(void){
  
  int matrix[SIZE][SIZE];
  int t_matrix[SIZE][SIZE];
  int i,j,gyou,retsu;

  scanf("%d",&gyou); /* 入力と入力データの表示 */
  scanf("%d",&retsu);/* 入力と入力データの表示 */
  
  for(i=0;i<gyou;i++){/* 入力と入力データの表示 */
    for(j=0;j<retsu;j++){/* 入力と入力データの表示 */
      scanf("%d",&matrix[i][j]);/* 入力と入力データの表示 */
    }/* 入力と入力データの表示 */
  }/* 入力と入力データの表示 */

  printf("行数:%d, 列数:%d\n",gyou,retsu);/* 入力と入力データの表示 */

   for(i=0;i<gyou;i++){/* 入力と入力データの表示 */
    for(j=0;j<retsu;j++){/* 入力と入力データの表示 */
      printf("%d  ",matrix[i][j]);/* 入力と入力データの表示 */
      if(j==retsu-1)/* 入力と入力データの表示 */
	printf("\n");/* 入力と入力データの表示 */
    }/* 入力と入力データの表示 */
  }/* 入力と入力データの表示 */

  for(i=0;i<gyou;++i){/* 転置処理 */
    for(j=0;j<retsu;++j){/* 転置処理 */
     t_matrix[j][i]=matrix[i][j];/* 転置処理 */
    }/* 転置処理 */
  }/* 転置処理 */

  printf("転置後行数:%d, 列数:%d\n",retsu,gyou);/* 表示 */

  for(i=0;i<retsu;++i){/* 表示 */
    for(j=0;j<gyou;++j){/* 表示 */
      printf("%d  ",t_matrix[i][j]);/* 表示 */
      if(j==gyou-1)/* 表示 */
	printf("\n");/* 表示 */
    }/* 表示 */
  }/* 表示 */

  return 0;
}
      
  
  
