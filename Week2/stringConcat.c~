#include <stdio.h>
#include <string.h>

int main(){

	char a[] = "Hello";
	char b[] = "World";
	
	printf("%d %d\n", strlen(a), strlen(b));

	int aLen = strlen(a);
	int bLen = strlen(b);
	for (int i = aLen; i < aLen+bLen; i++){
	
		a[i] = b[i-aLen];
	
	}
	
	printf("%s\n", a);
	
}
