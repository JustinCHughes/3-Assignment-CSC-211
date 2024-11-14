#include <stdio.h>

int main()
{
	int i, n, cnt, total, digit_cnt;
	char c;

	do {
		c = getchar();
		++cnt;
		if(c >= '0' && c <= '9')
			++digit_cnt;
	} while(c != 'E');

	i = -5;
	n = 50;
	while(i < n || i == -1)
	{
		++i;
		printf("%d\n", i);
		total += i;
		printf("i = %d and total = %d\n", i, total);
	}
}
