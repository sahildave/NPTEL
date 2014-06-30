#include <stdio.h>

int main(){


	int n;
	scanf("%d", &n);
	int a[n][n];

	int sumR[]={0};
	int sumC[]={0};
	int sumD1=0;
	int sumD2=0;
	
	for (int i=0; i<n; i++){
		for(int j =0 ; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for (int i=0; i<n; i++){
		for(int j =0 ; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	
	for(int k = 0; k<n; k++){
		sumR[k]=0;
		for(int l =0; l<n;l++){
			
			sumR[k] += a[k][l];
			printf("At %d,%d with sumR[%d] equal to %d\n", k,l,k,sumR[k]);
		
		}
	
	}
	
	printf("\n");

	
	for(int k = 0; k<n; k++){
		sumC[k]=0;
		for(int l =0; l<n;l++){
		
			sumC[k] += a[l][k];
			printf("At %d,%d with sumC[%d] equal to %d\n", k,l,k,sumC[k]);
		
		}
	
	}
	
	for(int e=0;e<n;e++)
    {
    	printf("Sum at Row %d is %d\n", e, sumR[e] );	
	}
	
	for(int e=0;e<n;e++)
    {
    	printf("Sum at Col %d is %d\n", e, sumC[e] );	
	}
	
	for(int k = 0; k<n; k++){
	
		sumD1 += a[k][k];
		sumD2 += a[k][n-k-1];
	
	}

	int max=0;	
    for(int e=0;e<n;e++)
    {
		if(max<sumR[e])
			max =sumR[e];
		if(max<sumC[e])
			max =sumC[e];
	}
	
	if(max<sumD1)
		max =sumD1;
	if(max<sumD2)
		max =sumD2;
		
	printf("%d", max);	

	
}
