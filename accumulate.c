#include<stdio.h>
#include<math.h>

void c(int begin,int end){
	int n;
	int ji=1;
	for(n=begin;n<=end;n++){
		ji=ji*n;
	}
	printf("³Ë»ýÎª%d\n",ji);
}

int main(){
	c(3,4);
	c(2,5);
	return 0;

}
