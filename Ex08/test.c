if(select==2&&nomimono[0]>0){

	if(tounyuu>130){
	
	  oturi=tounyuu-130;
	  
	  if((oturi/500)==1){
	    d-=1;
	    oturi-=500;
	    v=1;
	  }
	  for(i=1;i<5;i++)
	  if((oturi/i)==100){
	    c-=i;
	    oturi-=100*i;
	    x=1;
	    j=i;
	  }
	  if((oturi/50)==1){
	    b-=1;
	    oturi-=50;
	    y=1;
	  }
	  for(i=1;i<5;i++)
	  if((oturi/i)==10){
	    a-=i;
	    oturi-=10*i;
	    z=1;
	    k=i;
	  }	     
	      	      	  
     	  printf("ー状態表示エリアー\n飲み物2が出ます\nお釣り\n");

	  if(v==1) printf("1*500円\n");
	  if(x==1) printf("%d*100円\n",j);
	  if(y==1) printf("1*50円\n");
	  if(z==1) printf("%d*10円\n",k);
	  
	  printf("が出ます\n\n");

	  nomimono[0]-=1;
	  uriage+=120;
	}
	else if(tounyuu==120){
	  printf("飲み物2が出ます\nお釣りはありません\n\n");
	
	  nomimono[0]-=1;
	  uriage+=120;
	}
	else{
	  printf("投入金額が足りません\nお金%d円が戻ります\n\n",tounyuu);
	  senen-=a;
	  okane[0]-=b;
	  okane[1]-=c;
	  okane[2]-=d;
	  okane[3]-=e;
	}
      }
      else{
	printf("飲み物2は売り切れです\nお金%d円が戻ります\n",tounyuu);
      }
    }
