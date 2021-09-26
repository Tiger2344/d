#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a,b;
	printf("大宗师请输入你的血量:\n");
	scanf("%d %d",&a,&b);
	int c,d;
	c=50-a;
	d=50-b;
	printf("玩家1的攻击力为%d,玩家2的攻击力为%d\n",c,d);
	int t=1;
	int m,n,p,q;
	int k;
	int s;
	int grand=2;
	
	while(t<=99) {
	
	while(t%2==1){
		printf("是否使用技能(是请输入一，不是请输入零)\n");
		scanf("%d %d",&m,&q);
		k=c;
		if(m==1){
			printf("素质三连\n");
			c=2*c;	
		}
		b=b-c;
		if(q==1){
			printf("凌波微步\n");
			srand((unsigned)time(NULL));
			s=rand()%10;
			if(s>=6){
				b=b+c;}
		}
		c=k;
		printf("玩家1剩余血量:%d\n",a);
		printf("玩家2剩余血量:%d\n",b);
		t++; 
	}
		if(a<=0){printf("玩家2胜利"); 
	        break;			
	}
	if(b<=0){
		printf("玩家1胜利")	;
		break;
	}
	while(t%2==0){
		printf("是否使用技能(是请输入一，不是请输入零)\n");
		scanf("%d %d",&n,&p);
		if(p==1) {
			printf("Nice to meet to die\n");
			d=d+7;
		}
		a=a-d;
		if(n==1){
			printf("反伤刺甲\n") ;
			a=a+d/2;
			b=b-d/4;
		}
		printf("玩家1剩余血量:%d\n",a);
		printf("玩家2剩余血量:%d\n",b);
		t++;
	}
	
	if(a<=0){printf("玩家2胜利"); 
	        break;
				
	}
	if(b<=0){
		printf("玩家1胜利")	;
		break;
	}
	
	 
	}
	printf("游戏结束");
	return 0;
}
