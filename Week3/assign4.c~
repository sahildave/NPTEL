#include <stdio.h>
#include <string.h>

void printChars(char *p,char *q);//function prototype

int main(){

	char input[100];
	scanf("%s", &input);
	int len = strlen(input);

	int index=0;
	int isPalin=0;
	while(input[index] == input[len-index-1] && index < len){
		index++;
		isPalin=1;
	}
	
	if(isPalin){
		printChars(input, &input[index-1]);
	} else {
		printChars(NULL, &input[index-1]);
	}




	return 0;
}//end of main


void printChars(char *p, char *q){
     if (p==NULL){
     	printf("0");
     }else{
        while(p <= q){
            printf("%c",*p);
            p++;
 		}
 	}
}
