#include<stdio.h>

int main()
{
	
	int x,y;
	int t=1 ;
	int m=0,n=0;
	while(t<=3){
		scanf("%d %d  ",&x,&y);
		if(x>y){
			printf("�췽ʤ\n");
			m++;
			t++;
			 
		}
		if(x==y){
			printf("ƽ��\n");
			m++;
			n++;
			t++;
		}
		if(x<y){
			printf("����ʤ\n");
			n++;
			t++;
		}
		
	}
	if(m>n){
		printf("�췽ʤ");
	}
	if(m==n){
		printf("ƽ��");
		
	}
	if(m<n){
		printf("����ʤ");
	}
	
	
	
	return 0;
}
