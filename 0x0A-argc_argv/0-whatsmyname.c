#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of urguments
 * @argv: array of urguments
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unsused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
