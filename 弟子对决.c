#include<stdio.h>

int main()
{
	
	int x,y;
	int t=1;
	int m=0,n=0;
	printf("���ӶԾ������\n");
	
	while(t<=3){
		
		scanf("%d %d  ",&x,&y);
		int k,m,n,g;
		printf("�Ƿ�ʹ�ü���(��������һ��������������)\n");
		scanf("%d %d %d %d",&k,&m,&n,&g) ;
		
		if(k==1){
			printf("Ҫ������\n");
			x=x+2;
		}
		if(m==1){
			printf("�������\n");
			x=x-2;
		}
		if(n==1){
			printf("��������\n");
			x=6;
			
		}
		if(g==1){
			printf("���׺���\n");
			x=y;
		}
		
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
