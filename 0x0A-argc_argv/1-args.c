#include <stdio.h>

/**
 * main - a program that print the number of argc passed into it
 * @argc: int
 * @argv: char pionter, declare as a sting
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
