#include <stdio.h>


int power(int x, int y);
int polysum=0;
int i;


int main(){

	int n, x;
	scanf("%d %d", &n, &x);
	int a[n+1];
	for(i = 0; i <= n; ++i)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i <= n; i++){
    	polysum=polysum + (a[n-i]*power(x, i));
    }
    printf("%d", polysum);

}


int power(int x, int y)
{
  int result = x;

  if(y == 0) return 1;
  if(x < 0 || y < 0) return 0;

  for(int i = 1; i < y; ++i)
   result *= x;

  return result;
}
