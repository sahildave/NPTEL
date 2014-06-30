#include <stdio.h>
int fun(int *x, int *y, int *z)
{
    *y=*y+4;		//3 , 14, 14			31, 37, 37
    *z=*x+*y+*z;	//3, 31, 31				31, 105, 105
}
int main()
{
    int x=10;
    int y=3;
    fun(&y,&x,&x);	// 3, 10, 10
    y=x+2;			// 33
    printf("%d,%d\n",x,y);	//31, 33
    fun(&x,&y,&y);	// 31, 33, 33
    x=y+2;			//107
    printf("%d,%d",x,y); //107, 105
    return 0;
}
