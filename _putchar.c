#include "main.h"

/**
 * _putchar - prints a character
 * @c: The character getting printed
 * @buffer: The buffer
 * @index: The index
 * Return: void
 */

void _putchar(char c, char buffer[], int *index)
{
	buffer[*index] = c;
	(*index)++;
}
