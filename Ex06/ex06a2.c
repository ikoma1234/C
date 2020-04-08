#include <stdio.h>

int main()
{
  int i, n, sum = 0;
  int target = 47;    /* この数を当てる */
  int hit = 0;     /* 当たれば 1 になる */

  for( i=1 ; i<=10 ; i++ ) {
    printf( "1から9までの数を入力して下さい。%2d回目: ", i );
    scanf( "%d", &n );

    /* 指定された範囲以外の数が入力されたら、 */
    /* 入力をやり直す（回数のカウントは増える） */
    if( n>=10 || n<=0 ) sum -= n;
    sum += n;

    if( sum == target ) {
      hit = 1;
      break;
    }

    if( sum > target ) i = 10;
  }

  if( hit == 1 ) printf( "%d回目で当たりました!\n\n", i );
  else if( sum < target ) printf( "残念ですが、入力された数の合計（%d）が設定値未満でした。\n\n", sum );
  else printf( "残念ですが、入力された数の合計（%d）が設定値を超えました。\n\n", sum );

  return 0;
}
