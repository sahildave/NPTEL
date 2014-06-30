#include <stdio.h>
#define N 10000

int main (){

	int primeArray[N], primeIndex;
	int p, isPrime;
	primeArray[0]=2;
	primeArray[1]=3;
	primeIndex=2;

	for (p=5; p<=N; p =p+2){
		isPrime=1;	
		for( int i =1; i<primeIndex;i++){
			if(p%primeArray[i] == 0){
				isPrime=0;
				break;
			}
		}
		
		if(isPrime==1){
			primeArray[primeIndex++] = p;
		}
	
	}

printf("Printing");
	for( int i =1; i<primeIndex;i++){
		printf("%d ", primeArray[i]);
	}

}
