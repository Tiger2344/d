#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a,b;
	printf("����ʦ���������Ѫ��:\n");
	scanf("%d %d",&a,&b);
	int c,d;
	c=50-a;
	d=50-b;
	printf("���1�Ĺ�����Ϊ%d,���2�Ĺ�����Ϊ%d\n",c,d);
	int t=1;
	int m,n,p,q;
	int k;
	int s;
	int grand=2;
	
	while(t<=99) {
	
	while(t%2==1){
		printf("�Ƿ�ʹ�ü���(��������һ��������������)\n");
		scanf("%d %d",&m,&q);
		k=c;
		if(m==1){
			printf("��������\n");
			c=2*c;	
		}
		b=b-c;
		if(q==1){
			printf("�貨΢��\n");
			srand((unsigned)time(NULL));
			s=rand()%10;
			if(s>=6){
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
		if(p==1) {
			printf("Nice to meet to die\n");
			d=d+7;
		}
		a=a-d;
		if(n==1){
			printf("���˴̼�\n") ;
			a=a+d/2;
			b=b-d/4;
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
	printf("��Ϸ����");
	return 0;
}
