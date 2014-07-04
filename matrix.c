#include <stdio.h>

void printMatrix(int n, int C[][10]){
    for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",C[i][j]);
		}
  		printf("\n");
 	}
}

void addMatrix(int n, int A[][10], int B[][10]){

	int C[10][10];
	for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
			C[i][j] = A[i][j] + B[i][j] ;
		}
    }
   printMatrix(n, C);
}

void subMatrix(int n, int A[][10], int B[][10]){

	int C[10][10];
	for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
			C[i][j] = A[i][j] - B[i][j] ;
		}
    }
   printMatrix(n, C);
}

void mulMatrix(int n, int A[][10], int B[][10]){

	int C[10][10];
	int sum=0;
	for ( int c = 0 ; c < n ; c++ ){
      for ( int d = 0 ; d < n ; d++ ){
        for ( int k = 0 ; k < n ; k++ ){
          sum = sum + A[c][k]*B[k][d];
        }
        C[c][d] = sum;
        sum = 0;
      }
    }
   printMatrix(n, C);
}

int main(){
	int N;
	char op;
	int A[10][10], B[10][10];
	
	printf("Enter: ");
	scanf("%d %c", &N, &op);
	
	printf("-->%c<--", op);
	
	printf("\nA:\n");
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("\nB:\n");
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			scanf("%d", &B[i][j]);
		}
	}

	switch (op){
		case '+' :
			addMatrix(N, A, B);
			break;
		case '*' :
			mulMatrix(N, A, B);
			break;
		case '-' :
			subMatrix(N, A, B);
			break;
	}
	
	

}
