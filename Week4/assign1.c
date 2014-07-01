#include <stdio.h>
#include <string.h>

int main(){

	char a[11], b[11];
	
	
	scanf("%s", &a);
	scanf("%s", &b);
	
	strcat(a, b);
	
	int len = strlen(a);

	int i=0;
	int j=0;
	
	for (i=1; i < len; i++){
		j = i;
		while(j>0 && a[j] < a[j-1]){
			int temp = a[j];
			a[j] = a[j-1];
			a[j-1] =  temp;
			j--;
			
			printf("%s\n", a);
		}
	}


}
