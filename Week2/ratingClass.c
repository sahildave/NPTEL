#include <stdio.h>
#define TOTALRATING 10
int main(){

	int ratingCounter[6] = {-1,0,0,0,0,0};
	int invalid=0;
	int i, response;
	
	for (i=0; i<TOTALRATING; i++){
		scanf("%d", &response);
		
		if(response<1 || response > 5){
			++invalid;
		} else {
			++ratingCounter[response];
		}
	
	}
	
	for (i =1; i<6; i++){
		printf("With rating %d - %d\n", i, ratingCounter[i]);
	}
	printf("Invalid Ratings - %d", invalid);
	



}
