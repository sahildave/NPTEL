#include <stdio.h>

int power(int base, int n){

	if(n==1) return base;
	
	int p = power(base, n/2);
	if(n%2 == 1) return p*p*base;
	else return p*p;
}

int main(){

	int base, n;
	scanf("%d %d", &base, &n);
	int result = power(base, n);
	printf("\nResult %d\n", result); 


}
