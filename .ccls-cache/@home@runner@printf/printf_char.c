#include "main.h"

/**
  * printf_char - Prints a character
  * @c: The character
  * @pCount: pointer to character count
	* @plen: pointer to the length
  * Return: void
  */

void printf_char(char c, int *pCount, int *plen)
{
	write(1, &c, 1);
	*pCount += 2;
	*plen += 1;
}
