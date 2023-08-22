#include "main.h"

/**
 * _putchar - prints a character
 * @c: The character getting printed
 *
 * Return: 1 or -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
