#include "main.h"

/**
 * printf_str - prints the string
 * @s: The string being printed
 *
 * Return: void
 */

int printf_str(char *s)
{
	if (s == NULL)
		s = "(null)";
	write(STDOUT_FILENO, s, size(s));
	return (size(s));
}
