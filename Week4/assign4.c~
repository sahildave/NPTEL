#include <stdio.h>
#include <string.h>

int horner(int[], int, int);

int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
	
	int a[n+1];
	for(int i=0;i<=n;++i){  
	 	scanf("%d",&a[i]);  
	}    

	printf("%d", horner(a, m, k));    
    
}

int horner(int *a, int m, int k){
	if(m==0) return a[m];    
	return a[m]+k*horner(a,m-1,k);  
	 

}
