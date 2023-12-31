#include "main.h"
/**
 * print_char - prints a charatcer to stdoutput
 * @list: Variadic parameters
 * Return: number of characters printed (count).
*/

int print_char(va_list list)
{
	char c = (char)va_arg(list, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);
}
