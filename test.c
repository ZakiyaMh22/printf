#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _test - function that test the format
 * @c: format
 * @arg: variabl that give next parametr
 * @ptr: counter
 * Return: void
*/
void _test(char c, va_list arg, int *ptr)
{
	switch (c)
	{
		case 'c':
			/* code */
			_putchar(va_arg(arg, int));
			break;
		case 's':
			(*ptr) += print_str(va_arg(arg, char *));
			break;
		case '%':
			_putchar('%');
		case 'd':
		case 'i':
		case 'u':
			print_integer(va_arg(arg, long int), len);
		default:
			break;
	}
}
