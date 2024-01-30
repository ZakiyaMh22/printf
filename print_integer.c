#include "main.h"
#include <limits.h>

/**
 * print_integer - Function to print the numbers
 * @nums: integers to be print
 * @length: length of printed
 * Return: nothing to be returned
 */

void print_integer(int nums, int *length)
{
	if (nums == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		nums = 147483648;
		(*length) += 2;
	}
	else if (nums < 0)
	{
		_putchar('-');
		nums = -nums;
		(*length)++;
	}
	if (nums == 0)
	{
		_putchar('0');
		(*length)++;
		return;
	}
	if (nums / 10 != 0)
	{
		print_integer(nums / 10, length);
	}
	_putchar('0' + nums % 10);
	(*length)++;
}

