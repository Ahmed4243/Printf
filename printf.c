#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(const char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
  *  _printf - My implementation of the printf function
  * @format: The string it receives
  *
  * Return: Length or -1
  */

int _printf(const char *format, ...)
{
	int count, size, len;

	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if ((format[0] == '%' && format[1] == ' ' && !format[2]) || format[0] == '\0')
		return (-1);
	for (count = 0; count < _strlen(format); count++)
	{
		if (format[count] == '%' && format[count + 1] == 'c')
		{
			printf_char(va_arg(args, int));
			len++;
			count++;
		}
		else if (format[count] == '%' && format[count + 1] == 's')
		{
			size = printf_string(va_arg(args, char *));
			len += size;
			count++;
		}
		else if (format[count] == '%' && format[count + 1] == '%')
		{
			write(STDOUT_FILENO, "%", 1);
			count++;
			len++;
		}
		else
		{
			write(STDOUT_FILENO, &format[count], 1);
			len++;
		}
	}
	va_end(args);
	return (count);
}
