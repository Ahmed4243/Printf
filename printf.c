#include "main.h"

/**
	* _printf - My implementation of the printf function
 	* @format: The string it receives
	*
 	* Return: Length or -1
  */

int _printf(const char *format, ...)
{
	va_list args;
	int count, length;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1)
	for (count = 0, length = 0; format[count] != '\0'; count++)
	{
		if (format[count] == '%' && format[count + 1] == 'c')
		{
			write(1, va_arg(format, char), 1);
			count += 2;
		}
		write(1, format[count], 1);
		length++;
	}
	va_end(args);
	return (length)
}
