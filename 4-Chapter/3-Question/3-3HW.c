#include <stdio.h>
#include <ctype.h>

int main()
{
    int digit_cnt = 0, other_cnt = 0;
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (isdigit(ch)) 
	{
            digit_cnt++;
        }
	else
	{
            other_cnt++;
        }
	printf("digit_cnt = %d\nother_cnt = %d\n",digit_cnt,other_cnt);
    }

    printf("Number of digits: %d\n", digit_cnt);
    printf("Number of other characters: %d\n", other_cnt);
}
