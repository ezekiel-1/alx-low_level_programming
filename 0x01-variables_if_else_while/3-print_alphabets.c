#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase
 * and then in uppercase, follow by new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
