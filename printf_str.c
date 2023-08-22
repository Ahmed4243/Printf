#include "main.h"

/**
 * printf_str - prints the string
 * @s: The string being printed
 * @pCount: Pointer to count
 * @pLen: Pointer to length
 * Return: void
 */

void printf_str(char *s, int *pCount, int *pLen)
{
	int i;

	if (s == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		(*pLen) += 6;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		(*pLen)++;
	}
	(*pCount)++;
}
