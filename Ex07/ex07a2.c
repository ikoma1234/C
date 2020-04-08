#include <stdio.h>
int main()
{
  int even[100], odd[100];
  int n, i, j, j1, j2;
  i=j=j1=j2=0;

  while(i<100){
    scanf("%d",&n);
    if(n==0)
      break;
    
    if(n%2==0){
      even[j1]=n;
      i++;
      j++;
      j1++;
    }
    else{
      odd[j2]=n;
      i++;
      j++;
      j2++;
    }
  }

  if(j1>j2){
    printf("偶数が多い!!\n");

    for(i=0;i<j1;i++){
      printf("%d\n",even[i]);
    }
  }
      
  else if(j2>j1){
    printf("奇数が多い!!\n");

    for(i=0;i<j2;i++){
      printf("%d\n",odd[i]);
    }
  }
	  
  else{
      printf("偶数と奇数が同数\n");

      for(i=0;i<j1;i++){
	printf("%d\n",even[i]);
      }
      for(i=0;i<j2;i++){
	printf("%d\n",odd[i]);
      }
  }

  return 0;
}
    
