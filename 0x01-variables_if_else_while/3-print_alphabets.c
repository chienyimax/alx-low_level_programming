#include <stdio.h>

/**
* main - program that prints the alphabet in lowercase, and then in uppercase,
* You can only use the putchar
* Return: 0
*/
int main(void)
{
int i = 'a';
while (i <= 'z')
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
