#include <stdio.h>

int power(int x, int y);

int N;
int i,j;

int ans = 0;

int main()
{
	scanf("%d", &N);
	int X[N];
	for(i = 0; i < N; ++i)
	{
		scanf("%d", &X[i]);
	}

		
	for (i = 0; i < N; i++){
		   for (j = i; j < N; j++){
		      if (power(X[i], X[j]) > power(X[j], X[i])){
		          ans++;	}
	}}
	printf("%d", ans);
	return 0;
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
