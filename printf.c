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
	int n;
	int length = size(format);
	int count = 0;

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

			count += size(value);
			write(STDOUT_FILENO, value, size(value));
		}
		else if (format[n] == '%' && format[n + 1] == 'c')
		{
			int value = va_arg(args, int);

			count++;
			write(STDOUT_FILENO, &value, 1);
		}
		else if (format[n] == '%' && format[n + 1] == '%')
		{
			count++;
			write(STDOUT_FILENO, "%", 1);
		}
		else
		{
			count++;
			write(STDOUT_FILENO, &format[n], 1);
		}
	}
	return (count);
}
