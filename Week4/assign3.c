#include <stdio.h>
#include <string.h>

int main()
{
    int n,m,i,j,k,a[10],b[10];
    scanf("%d%d",&n,&m);
    int sum[m+n+1];
    memset(sum, 0, sizeof sum);
    
    for(i=n;i>=0;i--){
        scanf("%d",&a[i]);
    }
    for(i=m;i>=0;i--){
        scanf("%d",&b[i]);
    }
    printf("%d\n",n+m);
    
    for(j=0;j<=m;j++){
        for(k=0;k<=n;k++){
                sum[j+k]=sum[j+k]+a[j]*b[k];
                for(int i=0; i<m+n+1;i++){
					printf("%d ", sum[i]);
				}
				printf("\n");
        }
    }
    
    printf("\n");
    printf("\n");
    for(int i=0; i<m+n+1;i++){
		printf("%d ", sum[i]);
	}
    
    return 0;
}
