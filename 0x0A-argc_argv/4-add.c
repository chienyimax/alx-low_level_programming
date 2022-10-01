#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 * @argc: int
 * @argv: char
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, s, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (s = 1; s < argc; s++)
	{
		for (i = 0; i < (int)strlen(argv[s]); i++)
		{
			if (argv[s][i] > '9' || argv[s][i] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atol(argv[s]);
	}

	printf("%d\n", sum);

	return (0);
}
