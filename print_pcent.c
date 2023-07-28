#include "main.h"
/**
 * print_pcent - prints a charatcer to stdoutput
 * @list: Variadic parameters
 * Return: number of characters printed (count).
*/
int print_pcent(va_list list)
{
	(void)list;
	write(1, "%", 1);
	return (1);
}
