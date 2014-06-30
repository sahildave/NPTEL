#include <stdio.h>

long long T(int input){

	if(input == 1) return 1 + 2;
	
	return T(input-1) + 2*input;


}

int main(){

	int k;
	scanf("%d", &k);
	long long result = T(k);
	printf("%lli", result);


}
