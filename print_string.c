#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_str - Print a string
 * @str: String to print
 * Return: Number of characters printed
*/

int print_str(va_list arg)
{
	int count = 0;
	int i = 0;
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		count++;
		str++;
	}

	return (count);
}
