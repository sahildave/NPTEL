#include <stdio.h>

int main(){

	int N=0;
	int array[201]={0};
	int invalid=0;
	int input;
	scanf("%d", &N);
	
	for(int i=0; i<N;i++){

		scanf("%d", &input);

		if(input<-100 || input > 100){
			printf("Invalid\n");
			++invalid;
		}else{
			++array[input+100];
		}
	}
	
	int max=0;
	int maxIndex=0;
	
	for(int i=0; i<201; i++){
	
		if(max<array[i]){
			max = array[i];
			maxIndex = i;
		}
	
	}
	
	printf("\n\nMax is %d with %d iterations\n", maxIndex-100, max);

}
