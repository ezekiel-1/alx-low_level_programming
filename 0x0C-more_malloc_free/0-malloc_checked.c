#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memmory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memmory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
