#include <stdio.h>

//REDO

int main(){

	int m,n;
	scanf("%d %d", &m, &n);
	int a[m][n];
	
	for (int i=0; i<m;i++){
		for(int j =0 ; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	int i, k = 0, l = 0;

    while (k < m && l < n)
    {
        
        for (i = l; i < n; ++i)
        {
            if(k==0 && i==0){
            printf("%d", a[k][i]);}
            else{
            printf(" %d", a[k][i]);}
        }
        k++;

        
        for (i = k; i < m; ++i)
        {
            printf(" %d", a[i][n-1]);
        }
        n--;

        
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                printf(" %d", a[m-1][i]);
            }
            m--;
        }

        
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                printf(" %d", a[i][l]);
            }
            l++;    
        }        
    }
	

}
