#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0
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
