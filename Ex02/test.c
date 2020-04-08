#include <stdio.h>
int main()
{
  int i=1, j=2, k=3, q=4, r=5; /* これらの変数初期化の値は解答に影響を及ぼさない */
  
  r = (j*i) % (i-j) / k;/* この行の式を問題に列挙された式と入れ替える */
  return 0;
}
