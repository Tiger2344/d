#include<stdio.h>

int main()
{
	
	int x,y;
	int t=1;
	int m=0,n=0;
	printf("弟子对决请出招\n");
	
	while(t<=3){
		
		scanf("%d %d  ",&x,&y);
		int k,m,n,g;
		printf("是否使用技能(是请输入一，不是请输入零)\n");
		scanf("%d %d %d %d",&k,&m,&n,&g) ;
		
		if(k==1){
			printf("要有理想\n");
			x=x+2;
		}
		if(m==1){
			printf("不讲武德\n");
			x=x-2;
		}
		if(n==1){
			printf("如来神掌\n");
			x=6;
			
		}
		if(g==1){
			printf("铠甲合体\n");
			x=y;
		}
		
		if(x>y){
			printf("红方胜\n");
			m++;
			t++;
			 
		}
		if(x==y){
			printf("平局\n");
			m++;
			n++;
			t++;
		}
		if(x<y){
			printf("蓝方胜\n");
			n++;
			t++;
		}
		
	}
	if(m>n){
		printf("红方胜");
	}
	if(m==n){
		printf("平局");
		
	}
	if(m<n){
		printf("蓝方胜");
	}
	
	
	
	return 0;
}
