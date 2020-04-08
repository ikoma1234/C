#include <stdio.h>
int main()
{
  int score;

  printf(" 西暦４桁を入力して下さい（例:2016）");
  scanf("%d", &score);

  if(score %4 != 0)
  {
     printf("閏年ではない\n");
  }
  else if(score %100 != 0)
  {
     printf("閏年である\n");
  }
  else if(score %400 != 0)
  {
     printf("閏年ではない\n");
  }
  else
  {
     printf("閏年である\n");
  }
  return 0;
}
