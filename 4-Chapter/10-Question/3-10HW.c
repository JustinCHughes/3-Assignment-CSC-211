#include <stdio.h>

int main()
{
	while(++i < LIMIT) do {	/* syntax error */
		j = 2 * i + 3;
		printf("j = %d\n", j);
	}
}
	/*Many other languages require "do", but not C*/
