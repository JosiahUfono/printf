#include "main.h"
/**
 * print_str - prints a string to stdoutput
 * @list: Variadic parameters
 * Return: number of characters printed (count).
*/

int print_str(va_list list)
{
	char *str;
	int count = 0, j = 0;

	str = va_arg(list, char *);

	if (str == NULL)
	{
		return (-1);
	}
	while (str[j])
	{
		count = write(1, &str[j], 1);
		j += 1;
	}
	return (count);
}
