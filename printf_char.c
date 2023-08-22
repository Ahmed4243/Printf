#include "main.h"

/**
  * printf_char - Prints a character
  * @c: The character
  * @pCount: Pointer to count
  * @pLen: Pointer to length
  * Return: void
  */

void printf_char(char c, int *pCount, int *pLen)
{
	_putchar(c);
	(*pCount) += 2;
	(*pLen)++;
}

