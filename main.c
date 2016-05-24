#include <stdio.h>

int main ()
{
	int a, b, c, d, x1, x2;
	printf("Enter a, b, c \n");
	scanf("%d ", &a);
	scanf("%d ", &b);
	scanf("%d ", &c);
	printf("%d*x^2+%d*x+%d", a, b, c);
	d=b*b-4*a*c;
	x1=((d*(1/2))+(-b))/(2*a);
	x2=((d*(1/2))-(-b))/(2*a);
	printf("Otvet: x1=%d; x2%d", x1, x2);
}
