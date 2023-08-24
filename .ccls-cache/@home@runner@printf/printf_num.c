#include "main.h"

/**
  * printf_num - Prints a number
  * @n: The number
  * @pCount: The pointer count
  * @pLen: The pointer length
  */

void printf_num(int n, int *pCount, int *pLen)
{
	char str[11];
	int i = 0;

	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
	}
	if (n == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
	}
	else
	{
		while (n)
		{
			str[i++] = (n % 10) + '0';
			n /= 10;
		}
		str[i] = '\0';
	}
	(*pCount)++;
	(*pLen) += size(str);
	write(STDOUT_FILENO, &n, sizeof(int));
}
