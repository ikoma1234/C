#include <stdio.h>
 
int main(void){
 
  int i, j, a;

  int gyaku[5][5];

  int hutuu[5][5]={{1, 1, 1, 1, 1},
		    {0, 1, 1, 1, 1},
		    {0, 0, 1, 1, 1},
		    {0, 0, 0, 1, 1},
		    {0, 0, 0, 0, 1}};  
 

  for(i=0;i<5;++i){
    for(j=0;j<5;++j){
     gyaku[j][i]=hutuu[i][j];
    }
  }
 
  printf("反転する方向を指定してください（縦：0、横：1）");
  scanf("%d",&a);
  printf("\n");

  if(a==1){
    for(i=4;i>=0;--i){
      for(j=0;j<5;++j){
	printf("%d  ",gyaku[i][j]);
	if(j==4)
          printf("\n");
      }
    }
  }
  else if(a==0){
    for(i=0;i<5;++i){
      for(j=4;j>=0;--j){
	printf("%d  ",gyaku[i][j]);
      	if(j==0)
          printf("\n");
      }
    }
  }
  else
    printf("\n不適切な数値が入力されました\n");
 
  return 0;
 
}
