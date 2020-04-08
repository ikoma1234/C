#include <stdio.h>
#define SAIDAI 15

int histgram(int);

int main(void)
{
  int kazu[SAIDAI];
  int i,j;
  j=-1;
  
  for(i=0;;i++){
    scanf("%d",&kazu[i]);
    j++;
    if(kazu[i]<0)
      break;
  }

  for(i=0;i<j;i++){
    if(kazu[i]<80){
      printf("[%d]:",kazu[i]);
      histgram(kazu[i]);
      printf("\n");
    }
    else{
      fprintf(stderr,"illegal value\n");
      break;
    }
  }
    
  return 0;
}

int histgram(int x)
{
  int i;
  
  for(i=0;i<x;i++)
    printf("*");
}
