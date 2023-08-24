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
		printf_char('-', pCount, pLen);
		sign = -1;
	}
	if (n == 0)
		printf_char('0', pCount, pLen);
	while (n != 0)
	{
		str[i++] = '0' + (n % 10) * sign;
		n /= 10;
	}
	while (i > 0)
	{
		printf_char(str[i - 1], pCount, pLen);
		i--;
	}
}
