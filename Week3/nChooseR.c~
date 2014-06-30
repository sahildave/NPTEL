#include <stdio.h>

int choose(int n, int r){

	if(r == 0) return 1;
	return (n * choose(n-1, r-1))/r;
	


}

int main(){

	int n,r;
	scanf("%d %d", &n, &r);

	int result = choose(n, r);
	printf("\n%d\n", result);

}
