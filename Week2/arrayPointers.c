#include <stdio.h>

int main(){

	int a[10]={0,1,2,3,4,5,6,7,8,9};
	
	int *ptr =a;
	printf("ptr = %p, ptr +1 = %p\n", ptr,ptr+1);
	printf("*ptr = %d\n", *ptr);
	
	
	for( int i =0; i<10;i++){
		printf("%d ", a[i]);
		
	}
	
	printf("\nNew\n");
	
	
	for( int i =0; i<10;i++){
		printf("%d ", *ptr++);
	}
	
	printf("\nptr = %p, ptr +1 = %p\n", ptr,ptr+1);
	printf("*ptr = %d\n", *ptr);
	

}
