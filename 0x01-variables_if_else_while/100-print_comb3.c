#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * differnt combinations of two digits
 * NUmbers must be separated by ,, folloewd by a space
 * The two digits must be differenta
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		if (d != c && d < c)
		{
			putchar('0' + d);
			putchar('0' + c);
			
			if (c + d != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	d++;
}
putchar('\n');
return (0);
}

