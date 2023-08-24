#include "main.h"

/**
 * printf_str - prints the string
 * @s: The string being printed
 * @pCount: Pointer to count
 * @pLen: Pointer to length
 * @buffer: The buffer
 * @index: The index
 * Return: void
 */

void printf_str(char *s, int *pCount, int *pLen, char buffer[], int *index)
{
	int i;

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i], buffer, index);
		(*pLen)++;
	}
	(*pCount)++;
}
