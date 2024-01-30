#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _test - function that test the format
 * @c: format
 * @arg: variabl of variadic function give next parametr
 * @ptr: point to counter
 * Return: void
*/
void _test(char c, va_list arg, int *ptr)
{
	switch (c)
	{
		case 'c':
			_putchar(va_arg(arg, int));
			(*ptr)++;
			break;
		case 's':
			(*ptr) += print_str(arg);
			break;
		case '%':
			_putchar('%');
			(*ptr)++;
			break;
		case 'd':
		case 'i':
			print_integer(va_arg(arg, long int), ptr);
			(*ptr)++;
			break;
		default:
			_putchar('%');
			_putchar(c);
			(*ptr)+= 2;
			break;
	}
}
