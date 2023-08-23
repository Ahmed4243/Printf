#include "main.h"


/**
 * reverse_str - Reverses a string
 * @str: The string
 *
 * Return: Void
 */

void reverse_str(char *str)
{
	int i, j;
	char temp;

	if (str[0] != '-')
	{
		for (i = 0, j = size(str) - 1; i < j; i++, j--)
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
	}
	else
	{
		for (i = 1, j = size(str) - 1; i < j; i++, j--)
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
	}
}

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
		reverse_string(str);
	}
	(*pCount)++;
	(*pLen)++;
	write(STDOUT_FILENO, str, size(str));
}
