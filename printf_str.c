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
	if (s == NULL)
		s = "(null)";
	write(STDOUT_FILENO, s, size(s));
	(*pCount)++;
	(*pLen) += size(s);
}
