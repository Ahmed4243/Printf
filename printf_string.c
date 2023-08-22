#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
  * printf_string - Prints a string
  * @str: The character
  * @pCount: Pointer to character count
  * @plen: Pointer to the overall length
  * Return: void
  */

void printf_string(char *str, int *pCount, int *plen)
{
	if (str == NULL)
		str = "(null)";
	write(1, str, _strlen(str));
	*pCount += 2;
	*plen += _strlen(str);
}

