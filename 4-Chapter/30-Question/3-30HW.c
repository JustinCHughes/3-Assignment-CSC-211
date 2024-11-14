#include <stdio.h>

int main()
{
	int i = 0;

	fake_while_loop:
		if(i < 20)
		{
			printf("i = %d\n",i);
			i++;
			goto fake_while_loop;
		}
	printf("Loop is done. i = %d\n", i);
}
