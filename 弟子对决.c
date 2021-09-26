#include<stdio.h>

int main()
{
	
	int x,y;
	int t=1 ;
	int m=0,n=0;
	while(t<=3){
		scanf("%d %d  ",&x,&y);
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
