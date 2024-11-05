#include <stdio.h>

int main()
{
	int i, j;
	printf("Input two integers: ");
	scanf("%d%d", &i, &j);
	while(i * j < 0 && ++i != 7 && j++ != 9)
	{
		printf("infinite\n");
	}
}
