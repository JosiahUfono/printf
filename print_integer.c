#include "main.h"

/**
 * print_integer - prints a given integer from variadic
 * parameters (both hexadecimal and decimal).
 * @list: variadic parameter(s).
 * Return: returns the number of parameters printed.
 */

int print_integer(va_list list)
{
	int j = 0, count = 0, integer, specifier_array[10];
	char c[1];

	integer = va_arg(list, int);

	while (integer != 0)
	{
		specifier_array[j] = (integer % 10);
		integer = integer / 10;
		if (integer == 0)
			break;
		if (integer != 0)
			j++;
	}

<<<<<<< HEAD
	while (j >= 0)
	{
		c[0] = ('0' + specifier_array[j]);
		count += write(1, c, 1);
		j--;
=======
	for (j; j >= 0; j--)
	{
		c[0] = ('0' + specifier_array[j]);
		count += write(1, c, 1);
>>>>>>> refs/remotes/origin/master
	}
	return (count);
}
