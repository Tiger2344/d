#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a,b;
	printf("��ӭ����������\n");
	printf("�������������Ѫ��:\n");
	
	scanf("%d %d",&a,&b);
	int c,d;
	c=(100-a)/10;
	d=(100-b)/10;
	printf("���1�Ĺ�����Ϊ%d,���2�Ĺ�����Ϊ%d\n",c,d);
	int t=1;
	int m,n,p,q;
	int k;
	int s;
	int grand=2;
	int x,y;
	x=3;
	y=3;
	
	while(t<=99) {
	
	while(t%2==1){
		
		printf("�Ƿ�ʹ�ü���(��������һ��������������)\n");
		scanf("%d %d",&m,&q);
		k=c;
		if(x>0) {
		if(m==1){
			printf("��������\n");
			c=2*c;
			x--;
			printf("�㻹��ʹ��%d�μ���\n",x);	
		}
	}
		b=b-c;
		if(q==1){
			printf("�貨΢����������\n");
			srand((unsigned)time(NULL));
			s=rand()%10;
			if(s>=5){
				b=b+c;}
		}
		c=k;
		printf("���1ʣ��Ѫ��:%d\n",a);
		printf("���2ʣ��Ѫ��:%d\n",b);
		t++; 
	}
		if(a<=0){printf("���2ʤ��"); 
	        break;			
	}
	if(b<=0){
		printf("���1ʤ��")	;
		break;
	}
	while(t%2==0){
		printf("�Ƿ�ʹ�ü���(��������һ��������������)\n");
		scanf("%d %d",&n,&p);
		if(y>0){
		if(p==1) {
			printf("Nice to meet to die\n");
			d=d+7;
			y--;
			printf("�㻹��ʹ��%d�μ���\n",y);
		}
		}
		a=a-d;
		if(x>0){
		if(n==1){
			printf("���˴̼�\n") ;
			a=a+d/2;
			b=b-d/4;
	    	x--;
			printf("�㻹��ʹ��%d�μ���\n",x);
			
		}
		}
		printf("���1ʣ��Ѫ��:%d\n",a);
		printf("���2ʣ��Ѫ��:%d\n",b);
		t++;
	}
	
	if(a<=0){printf("���2ʤ��"); 
	        break;
				
	}
	if(b<=0){
		printf("���1ʤ��")	;
		break;
	} 
	}
	printf("��Ϸ��������������������\n");
	printf("��һ�µ�һ�£����۽���������Σ��ǵñ���΢ЦŶ�����ˣ����߰�");
	return 0;
}
