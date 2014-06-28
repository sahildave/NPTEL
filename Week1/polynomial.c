#include <stdio.h>

int main() {
	int a,b,c,d;
	int p0,p1,p2;
	
	printf("Enter a ");
	scanf("%d", &a);
	
	printf("Enter b ");
	scanf("%d", &b);
	
	printf("Enter c ");
	scanf("%d", &c);
	
	printf("Enter d ");
	scanf("%d", &d);
	
	
	p0=a*c;
	p1=a*d + b*c;
	p2=b*d;
	
	printf("Polynomial is - %dx^2 + %dx + %d", p0,p1,p2);
	


}
