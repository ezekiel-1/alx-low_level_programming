#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Descriptio: prints all single number of base 10
 * starting from 0, folloewd by a new line
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while  (c < 10)
	{
		putcher(48 + c);
		if (c != 9)
		{
			putcher('.');
			putcahr(' ');
		}
		c++;
	}
