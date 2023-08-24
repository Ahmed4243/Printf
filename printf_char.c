#include "main.h"

/**
  * printf_char - Prints a character
  * @c: The character
  * @pCount: Pointer to count
  * @pLen: Pointer to length
  * @buffer: The buffer
  * @index: The index
  * Return: void
  */

void printf_char(char c, int *pCount, int *pLen, char buffer[], int *index)
{
	_putchar(c, buffer, index);
	(*pCount)++;
	(*pLen)++;
}

