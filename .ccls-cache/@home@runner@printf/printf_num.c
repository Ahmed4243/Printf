#include "main.h"

/**
  * printf_num - Prints a number
  * @n: The number
  * @pCount: The pointer count
  * @pLen: The pointer length
  */

void printf_num(int n, int *pCount, int *pLen)
{
	char str[12];
	int i = 0, sign = 1;
	if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}
	if (n == 0)
		_putchar('0');
	while (n != 0)
	{
		str[i++] = '0' + (n % 10) * sign;
		n /= 10;
	}
	while (i > 0)
  {
		putchar(str[i - 1]);
		i--;
	}
	(*pCount)++;
	(*pLen) += size(str);
}
