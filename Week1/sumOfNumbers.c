#include <stdio.h>

int main(){
	
	int sum=0;
	int num=0;
	
	while(num!=-1){
		sum=sum+num;
		scanf("%d", &num);
	}
	
	printf("Sum is %d\n", sum);
	return 0;

}
