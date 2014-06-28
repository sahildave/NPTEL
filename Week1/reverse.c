#include <stdio.h>

int main(){


	int x=0;
	int y=0;
	
	printf("input integer: \n");
	scanf("%d", &x);
	
	while(x>0){
		y = 10*y + (x%10);
		x=x/10;
		}
	printf("reverse %d\n", y);
	return 0;	
}
	
