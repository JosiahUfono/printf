#include "main.h"
/**
 * print_decimal - prints a given integer from variadic parameters to base 10
 * @list: variadic parameters
 * Return: returns number of characters printed
 */

int print_decimal(va_list list)
{
	int j = 0, count = 0, integer, specifier_array[10];
	char c[1];

	integer = va_arg(list, int);

	while (integer != 0)
	{
		specifier_array[j] = (integer % 10);
		integer = integer / 10.0;
		if (integer == 0)
			break;
		if (integer != 0)
			j++;
	}

	while (j >= 0)
	{
		c[0] = ('0' + specifier_array[j]);
		count += write(1, c, 1);
		j--;
	}
	return (count);
}
