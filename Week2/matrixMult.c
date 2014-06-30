#include <stdio.h>
#include <math.h>
#define max 10

int main(){

	 int a[max][max], b[max][max], c[max][max];
	 int aRows, aCols, bRows, bCols, cRows,cCols;
	 int i, j,k;
	 
	 printf("Matrix A");
	 scanf("%d%d", &aRows, &aCols);
	 for(i=0; i<aRows; i++){
	 	printf("Enter Row %d:", i+1);
	 	for (j = 0; j<aCols; j++){
	 		scanf("%d", &a[i][j]);
	 	}
	 }
	 
	 printf("Matrix B");
	 scanf("%d%d", &bRows, &bCols);
	 
	 if(aCols != bRows){
	 	printf("Incompatible Matrices");
	 	return(0);
	 } else {
		 for(i=0; i<bRows; i++){
		 	printf("Enter Row %d:", i+1);
		 	for (j = 0; j<bCols; j++){
		 		scanf("%d", &b[i][j]);
		 	}
		 }
	}
	
	cRows = aRows; cCols = bCols;
	
	for (i =0; i <cRows; i++){
		
		for (j=0;  j < cCols; j++){
		
			for (k =0; k <aCols ; k++){
			
				c[i][j] += a[i][k] * b[k][j];
			
			}
		
		}
	
	}
	
	for( int i =0; i<cRows;j++){
		for( int j =0; j<cCols;j++){
			printf("%d ", c[i][j]);
		}
	}
	
	

}
