#include "main.h"
/**
 * print_unknown - prints the raw string
 * @list: Variadic parameters
 * Return: number of characters printed (count).
*/
int print_unknown(va_list list)
{
	(void)list;
	write(1, "%r", 2);
	return (1);
}
