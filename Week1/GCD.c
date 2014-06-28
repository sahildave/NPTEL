#include <stdio.h>

// if (m>n) gcd (m,n) = gcd (n, m%n)

int main(){
	int temp;
	int u,v;

	printf("Enter two numbers to find GCD of ");
	scanf("%d%d", &u, &v);
	
	while (v!=0){
		temp = u%v;
		u=v;
		v=temp;
	}	

	printf("GCD is %d\n", u);

}
