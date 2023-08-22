#include "main.h"

/**
 * size - gets the length of an array
 * @format: the text it recieves
 * Description: bla bla bla
 * Return: size of the array
 */

int size(const char *format)
{
	int n;

	for (n = 0; *format != '\0'; n++)
		format++;
	return (n);
}

/**
 * _printf - prints formated text
 * @format: the text it recieves
 * Description: bla bla bla
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int n, count = 0, length = size(format);

	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if ((format[0] == '%' && format[1] == ' ' && !format[2]) || format[0] == '\0')
		return (-1);
	for (n = 0; n < length; n++)
	{
		if (format[n] == '%' && format[n + 1] == 's')
		{
			char *value = va_arg(args, char *);
			int len = printf_str(value);

			count += len;
			n++;
		}
		else if (format[n] == '%' && format[n + 1] == 'c')
			printf_char(va_arg(args, int), &n, &count);
		else if (format[n] == '%' && format[n + 1] == '%')
			printf_char('%', &n, &count);
		else if (format[n] == '%' && format[n + 1] != ('s' || 'c' || '%'))
		{
			printf_char(format[n], &n, &count);
			write(STDOUT_FILENO, &format[n], 1);
		}
		else
		{
			count++;
			write(STDOUT_FILENO, &format[n], 1);
		}
	}
	return (count);
}
