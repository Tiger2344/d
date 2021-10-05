#include<stdio.h>
#include<math.h>

void mysum(int begin,int end){
	int i;
	int sum=0;
	for(i=begin;i<=end;i++){
		sum+=i;
	}
	printf("ºÍÎª%d\n",sum);
	
}
int main(){
	
    mysum(0,15);
    mysum(4,170);
    mysum(9,10);
	
	return 0;
}
