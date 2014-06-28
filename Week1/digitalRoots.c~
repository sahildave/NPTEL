#include <stdio.h>

int main(){

	int input=0;
	printf("Enter a no\n");
	scanf("%d", &input);
	
	while(input/10>0){
		int temp=input;
		int sum=0;
		while(temp!=0){
			sum = sum + temp%10;
			temp =temp/10;
		}
		input = sum;
	}
	
	printf("%d", input);
	
}
