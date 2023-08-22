#include "main.h"

/**
  * printf_string - Prints a string
  * @str: The character
  * Return: length
  */

int printf_string(char *str)
{
	int i;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (_strlen(str));
}

