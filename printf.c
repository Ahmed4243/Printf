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
 * checker - Checks for unknown specifier
 * @c1: The first character
 *
 * @c2: The second character
 * Return: 0 or 1
 */

int checker(char c1, char c2)
{
	if (c1 == '%' && (c2 != 's' && c2 != 'c' && c2 != '%'))
	{
		if (c1 == '%' && c2 != 'd' && c2 != 'i')
			return (1);
	}
	return (0);
}

/**
 * _printf - prints formated text
 * @format: the text it recieves
 * Description: bla bla bla
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int n, count = 0, index = 0;

	va_list args;
	char buffer[BUFF_SIZE];

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
	for (n = 0; format[n] != '\0'; n++)
	{
		if (format[n] == '%' && format[n + 1] == 's')
			printf_str(va_arg(args, char *), &n, &count, buffer, &index);
		else if (format[n] == '%' && format[n + 1] == 'c')
			printf_char(va_arg(args, int), &n, &count, buffer, &index);
		else if (format[n] == '%' && format[n + 1] == '%')
			printf_char('%', &n, &count, buffer, &index);
		else if (format[n] == '%' && format[n + 1] == '\0')
			return (-1);
		else if (format[n] == '%' && (format[n + 1] == 'd' || format[n + 1] == 'i'))
			printf_num(va_arg(args, int), &n, &count, buffer, &index);
		else if (checker(format[n], format[n + 1]) == 1)
		{
			printf_char(format[n], &n, &count, buffer, &index);
			_putchar(format[n], buffer, &index);
			count++;
		}
		else
		{
			_putchar(format[n], buffer, &index);
			count++;
		}
	}
	if (index == BUFF_SIZE || index > 0)
		write(1, buffer, index);
	va_end(args);
	return (count);
}
