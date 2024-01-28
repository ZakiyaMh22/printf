#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list list;

	va_start(list, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (1);
	}
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		else
		{
			i++;
			_test(format[i], list, &count);
			i++;
		}
	}
	va_end(list);
	return (count);
}
