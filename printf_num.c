#include "main.h"

/**
  * printf_num - Prints a number
  * @n: The number
  * @pCount: The pointer count
  * @pLen: The pointer length
  * @buffer: The buffer
  * @index: The index
  */

void printf_num(int n, int *pCount, int *pLen, char buffer[], int *index)
{
	char str[1024];
	int i = 0, sign = 1;


	if (n < 0)
	{
		_putchar('-', buffer, index);
		(*pLen)++;
		sign = -1;
	}
	if (n == 0)
	{
		printf_char('0', pCount, pLen, buffer, index);
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
		_putchar(str[i - 1], buffer, index);
		i--;
	}
	(*pCount)++;
	(*pLen) += size(str);
}
