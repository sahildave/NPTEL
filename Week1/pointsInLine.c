#include <stdio.h>

int main(){

	int x1,y1,x2,y2,x3,y3;
	float slope1;
	float slope2;
	
	scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
	
	if(((x1==x2) && (x2==x3)) || ((y1==y2) && (y2==y3))){
		printf("Yes");
	} else {
		slope1 = ((y2-y1)/(x2-x1));
		slope2 = ((y3-y2)/(x3-x2));
		
		if( slope1 == slope2){
			printf("Yes");
		} else {
			printf("No");
		}
	}
	
	return 0;
	
}
	
	


