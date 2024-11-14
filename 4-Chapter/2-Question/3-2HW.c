#include <stdio.h>

int main()
{
	int a = 1, b = 2, c = 3;
	double x = 1.0;

	printf("%d\n", a > b && c < b);

	a = 1, b = 2, c = 3;
	x = 1.0;
	
	printf("%d\n", a <! b || !! a);
	
	a = 1, b = 2, c = 3;
	x = 1.0;
	
	printf("%d\n", a + b < !c + c);
	
	a = 1, b = 2, c = 3;
	x = 1.0;
	
	printf("%d\n", a - x || b * c && c / a);
}
