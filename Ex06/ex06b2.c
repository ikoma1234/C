#include <stdio.h>
int main(void){

  int n,i;
  i=0;

  printf("正の整数を入力してください：");
  scanf("%d",&n);

  if(n>0)
    {
      for(;n!=1;)
	{
	  if(n%2==1)
	    {
	      n=n*3+1;
	      i=i+1;
	    }
	  else
	    {
	      n=n/2;
	      i=i+1;
	    }
	}
      printf("%d\n",i);
    }
  else
    {
      printf("入力が正の整数ではありません\n");
    }
    

  return 0;
}
