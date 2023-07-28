#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int _putchar(char c);

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	char *str_arg, c;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				c = va_arg(args, int);
				_putchar(c);
				printed_chars++;
				break;
			case 's':
				str_arg = va_arg(args, char *);
				if (!str_arg)
					str_arg = "(null)";
				while (*str_arg)
				{
					_putchar(*str_arg);
					str_arg++;
					printed_chars++;
				}
				break;
			case '%':
				_putchar('%');
				printed_chars++;
				break;
			default:
				_putchar('%');
				_putchar(*format);
				printed_chars += 2;
				break;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}

