#include "main.h"
/**
 *  _printf - prints a formatted string
 *  @format: input string which each character would be iterated through
 *  Return: returns number of characters printed (count).
*/
int _printf(const char *format, ...)
{
int j = 0, count = 0, temp = 0, val = 0;
int (*functnptr)(va_list);
va_list list;
va_start(list, format);


	if (format == NULL)
		return (-1);
	while (format[j])
	{
		if (format[j] != '%')
		{
			temp = write(1, &format[j], 1);
			count += temp;
			j++;
			continue;
		}

		if (format[j] == '%')
		{
			functnptr = specifier_checker(&format[j + 1]);
			if (functnptr != NULL)
			{
				val = functnptr(list);
				count = count + val;
				j += 2;
				continue;
			}
			if (format[j + 1] == '\0')
				break;
			if (format[j + 1] != '\0')
			{
				temp = write(1, &format[j + 1], 1);
				count += temp;
				j += 2;
				continue;
			}
		}
	}
	return (count);
}
