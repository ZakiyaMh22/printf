#include "main.h"
/**
 * _putchar - Writes the characters (c) to consloe
 * @format: The character to print
 *
 * Return: On Success 1
 * On Error -1
 */

int _putchar(char format)
{
	return (write(1, &format, 1));
			}

