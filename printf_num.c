#include "main.h"

/**
  * printf_num - Prints a number
  * @n: The number
  * @pCount: The pointer count
  * @pLen: The pointer length
  */

void printf_num(int n, int *pCount, int *pLen)
{
	char str[1024];
	int i = 0, sign = 1;

	if (n < 0)
	{
		_putchar('-');
		(*pLen)++;
		sign = -1;
	}
	if (n == 0)
	{
		printf_char('0', pCount, pLen);
		return;
	}
	while (n != 0)
	{
		str[i++] = '0' + (n % 10) * sign;
		n /= 10;
	}
	str[i] = '\0';
	while (i > 0)
	{
		_putchar(str[i - 1]);
		i--;
	}
	(*pCount)++;
	(*pLen) += size(str);
	fflush(stdout);
}
