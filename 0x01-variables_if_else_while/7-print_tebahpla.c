#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
