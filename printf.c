#include "main.h"

/**
  *  _printf - My implementation of the printf function
  * @format: The string it receives
  *
  * Return: Length or -1
  */

int _printf(const char *format, ...)
{
	va_list args;
	int count, len;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if (format[0] == '%' && format[1] != ('s' || '%' || 'c'))
		return (-1);
	for (count = 0, len = 0; format[count] != '\0'; )
	{
		if (format[count] == '%' && format[count + 1] == 'c')
			printf_char(va_arg(args, int), &count, &len);
		else if (format[count] == '%' && format[count + 1] == 's')
			printf_string(va_arg(args, char*), &count, &len);
		else if (format[count] == '%' && format[count + 1] == '%')
			printf_char('%', &count, &len);
		else
		{
			write(1, &format[count], 1);
			len++;
			count++;
		}
	}
	va_end(args);
	return (len);
}
