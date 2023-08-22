#include "main.h"

/**
  * printf_char - Prints a character
  * @c: The character
  * @pCount: pointer to character count
  * Return: void
  */

void printf_char(char c, int *pCount)
{
	write(1, c, 1);
	*pcount += 2;
}
