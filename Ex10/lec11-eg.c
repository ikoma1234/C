/*
 *   lec11-eg.c   horizontal edge detection
 *
 *   pbm形式の白黒画像データを受け取って,
 *   水平方向に辺縁を抽出した画像を作成
 *
 *   方法
 *     １ 横に隣り合った５つのデータを順次見る
 *     ２ 並びが以下の場合以外は真中の値を白として出力する
 *        (a) 黒黒黒白白の場合黒から白への辺縁として黒を出力
 *        (b) 白白黒黒黒の場合白から黒への辺縁として黒を出力
 *
 *   終了コード
 *     0 : 正常終了
 *     1 : 入力データの形式がおかしい
 *     2 : 入力データの画素数が多すぎる
 *     3 : 入力データがおかしいかデータが揃わないうちに
 *         ＥＯＦになった
 *     4 : 入力データの画素の値が０／１ではなかった
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_X 800
#define MAX_Y 800
#define BLACK 1
#define WHITE 0

int main()
{
  int img_data[MAX_Y][MAX_X];
  int i, j, x_size, y_size;

  /* 入力 */
  /* 最初にP1と書いていないものはデータ形式が違う */
  /* この部分はプログラミング入門では扱わない文字 */
  /* 型を使用しているので、今のところは呪文だと   */
  /* 思っておいてください                         */
  if (getchar() != 'P' || getchar() != '1'){
    fprintf(stderr, "データの形式が違います\n");
    exit(1);
  }

  /* x,yそれぞれの画素数を得る */
  scanf("%d", &x_size);
  scanf("%d", &y_size);
  /* 画素数が多すぎる場合 */
  if (x_size > MAX_X || y_size > MAX_Y){
    fprintf(stderr, "データが大きすぎます\n");
    exit(2);
  }

  /* 実際のデータ入力 */
  for (i = 0; i < y_size; i++){
    for (j = 0; j < x_size; j++){
      /* scanf入力データがおかしいかＥＯＦになった場合 */
      if(scanf("%d",&img_data[i][j]) != 1){
	fprintf(stderr, "データ入力に異常があります\n");
	exit(3);
      }
      /* データが０／１じゃない場合 */
      if(img_data[i][j] != WHITE && img_data[i][j] != BLACK){
	fprintf(stderr, "データが異常でした\n");
	exit(4);
      }
    }
  }

  /* これより上はどのプログラムも同じ */

  /* 出力 */
  /* 最初にP1とx,yの画素数を出力 */
  printf("P1\n");
  printf("%d %d\n", x_size, y_size);

  /* 実際のデータ出力 */
  for (i = 0; i < y_size; i++){
    printf("%d ",img_data[i][0]); /* 行の先頭   */
    printf("%d ",img_data[i][1]); /* 行の二番目 */
    for (j = 2; j < x_size-2; j++){
      /* エッジ検出 */
      if(img_data[i][j-2] == WHITE && 
         img_data[i][j-1] == WHITE && 
	 img_data[i][j]   == BLACK && 
	 img_data[i][j+1] == BLACK &&
	 img_data[i][j+2] == BLACK){
        printf("%d ",BLACK); /* 白から黒への辺縁 */
      }
      else if(img_data[i][j-2] == BLACK && 
              img_data[i][j-1] == BLACK && 
	      img_data[i][j]   == BLACK &&
	      img_data[i][j+1] == WHITE &&
	      img_data[i][j+2] == WHITE){
        printf("%d ",BLACK); /* 黒から白への辺縁 */
      }
      else printf("%d ",WHITE); /* 普通の場合   */
    }

    printf("%d ",img_data[i][x_size-2]); /* 最後の一つ前 */
    printf("%d ",img_data[i][x_size-1]); /* 行の最後     */
    printf("\n");
  }
  exit(0);
}
