#include<stdio.h>
#include<stdlib.h>  /* ランダム関数を呼び出すために必要 */
#include<time.h>    /* 時間を取るために必要 */

#define KURO     40
#define AKA      41
#define MIDORI   42
#define KI       43
#define AO       44
#define MURASAKI 45
#define MIZU     46
#define SIRO     47

#define HIT  1      /* 攻撃ヒット */
#define MISS 0      /* 攻撃ミス */

#define slimeX 13   /* スライムの横幅 */
#define slimeY 13   /* スライムの高さ */

#define slimeHP  3  /* スライムのHP */
#define HITPOINT 5  /* 攻撃がヒットするポイント数 */
#define MAXTURN 10  /* ターン数の上限 */

/*
 * 各関数の説明。
 * void clear();
 *    画面のクリアをする関数。
 *      引数   : なし
 *      戻り値 : なし
 * 
 * void color( int C );
 *    色付きのスペースを表示する関数。
 *      引数   : C = 色の指定
 *      戻り値 : なし
 * 
 * void printSlime();
 *    スライムの表示をする関数。
 *      引数   : なし
 *      戻り値 : なし
 * 
 * void printStatus( int hp );
 *    ステータスの表示をする関数。
 *      引数   : hp = スライムのHP
 *      戻り値 : なし
 *
 * void printSpace( int num );
 *     していされた個数分スペースを表示する関数。
 *      引数   : num = スペースの数
 *      戻り値 : なし
 *
 * void printMessage( int msgNo, int turn );
 *    メッセージの表示をする関数。
 *    msgNo = 0の場合、ターン数はどんな値を入れても可。
 *      引数   : msgNo = メッセージNo.
 *               turn  = ターン数
 *      戻り値 : なし
 * 
 * int hitORmiss( int attack );
 *    ヒットしたかミスをしたか判定をする関数。
 *      引数   : attack = アタックしたポイント
 *      戻り値 : ヒットした場合 = HIT
 *               ミスした場合   = MISS
 *
 * void flush();
 *     画面をフラッシュさせる関数。
 *      引数   : なし
 *      戻り値 : なし
 *
 */   

void clear();
void color( int );
void printSlime();
void printStatus( int hp );
void printSpace( int num );
void printMessage( int msgNo, int turn );
int hitORmiss( int attack );
void flush();

main(){
  int attack = 0;
  int i;
  int turn = 1;
  int NowHP = slimeHP;

  srand((unsigned)time(NULL));  /* ランダムな値を取るために時間を種にする。 */
  
  while(turn<=MAXTURN){
    
    clear();
    
    printStatus(NowHP);
    
    printSlime();
    if(turn==1){  /* 最初のターンだけ説明メッセージを出す。 */
      printMessage(1,turn);
    }else{
      printMessage(0,turn);
    }

    printf("\x1b[2A");
    printf("\x1b[2C");
    scanf("%d",&attack);

    /* 強制終了時には負の数を入力。 */
    if(attack<0){
      exit(0);
    }


    if( hitORmiss(attack)==HIT ){ /* 攻撃がヒット！ */
      NowHP--;
      flush();     
      if(NowHP<=0){  /* NowHP（スライムのＨＰ）が０以下になったら終了 */
        printMessage(4,turn); 
        exit(0);
      }else{         /* NowHP（スライムのＨＰ）が０以上なら続ける */
        printMessage(2,turn); 
      }
    }else{                      /* 攻撃ミス！ */
      printMessage(3,turn);
    }

    sleep(1);       /* １秒待つ。 */
    turn++;         /* ターン数増加 */
    
  }

  /* 規定ターン以内に倒せなかった場合。 */
  sleep(1);
  printMessage(5,turn);
  
}

void clear(){
  printf("\x1b[2J");    /* 画面をクリア */
  printf("\x1b[1;1H");  /* カーソル位置を左上にセット */
}

void flush(){
  int i;
  for(i=0;i<5;i++){
    usleep(3000);
    clear();
    /* 全景色・背景色を入れ替え。 */
    printf("\x1b[7m");
    printStatus(0);
    printf("\x1b[7m");
    printSlime();
    printf("\x1b[7m");
    printMessage(0,0);
    usleep(3000);
    clear();
    /* 全景色・背景色を元に戻す。 */
    printStatus(0);
    printSlime();
    printMessage(0,0);
  }
  usleep(100000);
}

void color(int C){
 printf("\x1b[00;%dm  \x1b[m",C);
}

void printSpace(int num){
  int i;
  /* 指定された回数スペースを表示。 */
  for(i=0;i<num;i++){
    printf(" ");
  }
}

void printSlime(){

  int i,j;
  int slime[slimeY][slimeX]={
    {0,   0,   0,   0,   0,   0,   MIZU,0,   0,   0,   0,   0,   0},
    {0,   0,   0,   0,   0,   0,   MIZU,0,   0,   0,   0,   0,   0},
    {0,   0,   0,   0,   0,   MIZU,MIZU,MIZU,0,   0,   0,   0,   0},
    {0,   0,   0,   MIZU,SIRO,MIZU,MIZU,MIZU,MIZU,MIZU,0,   0,   0},
    {0,   0,   MIZU,SIRO,SIRO,MIZU,MIZU,MIZU,MIZU,MIZU,MIZU,0,   0},
    {0,   MIZU,SIRO,MIZU,MIZU,MIZU,MIZU,MIZU,MIZU,MIZU,MIZU,AO,  0},
    {MIZU,MIZU,MIZU,MIZU,SIRO,MIZU,MIZU,MIZU,SIRO,MIZU,MIZU,AO,  AO},
    {MIZU,MIZU,MIZU,SIRO,KURO,SIRO,MIZU,SIRO,KURO,SIRO,AO,  AO,  AO},
    {MIZU,MIZU,MIZU,MIZU,SIRO,MIZU,MIZU,MIZU,SIRO,AO,  AO,  AO,  AO},
    {MIZU,AO,  MIZU,AKA, MIZU,MIZU,MIZU,MIZU,MIZU,AKA, AO,  AO,  AO},
    {MIZU,AO,  AO,  AO,  AKA, AKA, AKA, AKA, AKA, AO,  AO,  AO,  AO},
    {0,   AO,  AO,  AO,  AO,  AO,  AO,  AO,  AO,  AO,  AO,  AO,  0},
    {0,   0,   AO,  AO,  AO,  AO,  AO,  AO,  AO,  AO,  AO,  0,   0}
  };

  for(j=0;j<slimeY;j++){
    printSpace(6);  /* スペースを表示してスライムを真ん中寄せ */
    for(i=0;i<slimeX;i++){
      if(slime[j][i]==0){
        printf("  ");
      }else{
        color(slime[j][i]);
      }
    }
    printf("\n");
  }
}

void printStatus(int hp){
  /* ステータスを表示。 */
  int i; 
  printf("\r");
  printf("┏");
  for(i=0;i<34;i++)
    printf("━");
  printf("┓\n");
  
  printf("┃");
  printf(" Enemy's Status                   ");
  printf("┃\n");

  printf("┃");
  printf("            HP : %3d              ",hp);
  printf("┃\n");
    
  printf("┗");
  for(i=0;i<34;i++)
    printf("━");
  printf("┛\n");

}

void printMessage(int msgNo, int turn ){
  /*
    メッセージ表示開始位置は(x,y)= (2,18)に固定。
    そこから３行がメッセージ表示スペース。１行がカーソル位置。
    */

  int i;

  printf("\x1b[18;1H");/* カーソル位置（表示位置）を(1,18)に設定。 */
  printf("\r");
  printf("┏");
  for(i=0;i<34;i++)
    printf("━");
  printf("┓\n");

  switch(msgNo){
  
  case 0:    /* なにもメッセージがないケース。
		この場合変数turnの値はなんでも良い。*/
    for(i=0;i<4;i++){
      printf("┃");             
      printf("                                  ");
      printf("┃\n");
    }
    break;

  case 1:    /* 攻撃開始のメッセージ */
    
    printf("┃");             
    printf(" %3dターン以内にスライムを倒せ！  ",MAXTURN);
    printf("┃\n");
    printf("┃");             
    
    printf(" 1〜%3dの数字で攻撃ポイント指定！ ",HITPOINT);
    printf("┃\n");
    
    printf("┃");
    printf(" 攻撃開始！                       ");
    printf("┃\n");
    
    printf("┃");             
    printf("                                  ");
    printf("┃\n");
    break;
    
  case 2:    /* 攻撃があたった場合 */
     
    printf("┃");             
    printf(" %3dターン目                      ",turn);
    printf("┃\n");        
    
    printf("┃");             
    printf(" 勇者の攻撃！             ");
    printf("┃\n");
    
    printf("┃");             
    printf(" HIT！スライムのHPが1減った！     ");
    printf("┃\n");
    
    printf("┃");             
    printf("                                  ");
    printf("┃\n");
      
    break;

  case 3:    /* 攻撃があたらなかった場合 */
     
    printf("┃");             
    printf(" %3dターン目                      ",turn);
    printf("┃\n");        
    
    printf("┃");             
    printf(" 勇者の攻撃！                     ");
    printf("┃\n");
    
    printf("┃");             
    printf(" MISS！スライムは喜んでいる！     ");
    printf("┃\n");
    
    printf("┃");             
    printf("                                  ");
    printf("┃\n");
    break;

    
  case 4:    /* スライムが死んでしまった場合 */
     
    printf("┃");             
    printf(" スライムは倒れた！               ");
    printf("┃\n");
    
    printf("┃");             
    printf(" 勇者は世界を破滅から救った！     ");
    printf("┃\n");
    
    printf("┃");             
    printf("                                  ");
    printf("┃\n");

    printf("┃");             
    printf("                                  ");
    printf("┃\n");
    
    break;


  case 5:    /* ターン数以内に倒せなかった場合 */
    
    printf("┃");             
    printf(" %3dターンをオーバしてしまった！  ",MAXTURN);
    printf("┃\n");
    
    printf("┃");             
    printf(" スライムが突如増殖し始めた！     ");
    printf("┃\n");
    
    printf("┃");             
    printf(" 世界はスライムに支配された…     ");
    printf("┃\n");

    printf("┃");             
    printf("                                  ");
    printf("┃\n");
    break;
  }


  printf("┗");
  for(i=0;i<34;i++)
    printf("━");
  printf("┛\n");


  
}


int 
hitORmiss(int attack ){

  if( attack == ( rand()%HITPOINT + 1 ) ){
    /* rand()%HITPOINT + 1  :１〜HITPOINTまでの値を出す。*/
    return HIT;
  }
  else{
    return MISS;
  }
}














