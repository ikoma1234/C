#include <stdio.h>
int main(void){

  int a,b,c,d,e,nomimono,tounyuu,oturi,okane;
  okane=6600;
    
  while(1<2){
      
      if(okane>0){
      
	printf("1(O) 130\n2(O) 120\n3(O) 200\n4(O) 80\n5(O) 150\n6(O) 110\n釣銭切れ(X)\n");

	printf("お金と飲み物番号を入力して下さい\n");
  
	if(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&nomimono) == EOF) break;
    
	tounyuu=a*1000+b*500+c*100+d*50+e*10;
	if(nomimono==1){

	  oturi=tounyuu-130;
	  okane=okane-oturi;     
      
	  printf("ー状態表示エリアー\n飲み物1が出ます\nお釣り\n");

	  printf("%d円\n",oturi);

	  printf("が出ます\n(以下続く)\n\n");

	}
      }
      else{
	printf("釣り銭切れです");
	  }
  }
  return 0;
}
