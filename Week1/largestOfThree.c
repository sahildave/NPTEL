#include <stdio.h>

int main()
{
	int a,b,c;
	int largest;
	printf("Enter A B and C: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a>b){
		if(a>c){
			largest=a;
		}else {
			largest=c;
		}
	} else{
		if (b >c){
			largest=b;
		} else {
			largest =c;
		}
	}
		
	printf("Largest is %d \n", largest);	


}
