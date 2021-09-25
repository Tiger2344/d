#include<stdio.h>

int main()
{
	int i,j;
	i=1;
	j=1;
	while(j<=9){
		if(i==j){
			printf("%d*%d=%d\n",i,j,i*j);
			j++;
			i=1;
				}
		else{
			printf("%d*%d=%d",i,j,i*j);
			printf(" ");
			i++;
			
		}
	}
	return 0;
}
