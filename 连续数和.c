#include<stdio.h>

int main()
{
	int a,n;
	scanf("%d",&a);
	scanf("%d",&n);
	int t=1;
	int b=a; 
	int s=a;
		while(t<n){
		b=b*10+a;
		s=s+b;
		t++;
	}
	printf("%d",s);
	return 0;
}
