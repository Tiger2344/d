#include<stdio.h>

int main()
{
	int a;
	int t=1;
	while(t<=4){
	if(t<3){
		scanf("%d",&a);
		printf("%d ",a);
		t++;
		a=0;
	}
	if(t==4){
		scanf("%d",&a) ; 
		printf("%d\n",a);
		t=1;
	}
	}
	
	
	
	
	return 0;
}
