#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number urguments
 * @argv: array of urguments
 * Rturn: Always 0 (Success)
 */
int main(int argc __attribute__((unsused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
