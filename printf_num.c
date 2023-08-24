#include "main.h"

/**
  * printf_num - Prints a number
  * @n: The number
  * @pCount: The pointer count
  * @pLen: The pointer length
  */

void printf_num(int n, int *pCount, int *pLen)
{
	char str[20];
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		(*pLen)++;
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		(*pLen)++;
		return;
	}
	do {
		str[i++] = '0' + (n % 10);
		n /= 10;
	} while (n > 0);
	while (i > 0)
		_putchar(str[i - 1]);
	(*pCount)++;
	(*pLen) += size(str);
}
