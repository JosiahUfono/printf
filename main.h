#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */

=======
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct functn - struct for the printer's specifier
 * @functionptr: function for printing
 * @t: char to be checked
*/

int _printf(const char *format, ...);
int (*specifier_checker(const char *format))(va_list);

typedef struct functn
{
	char *t;
	int (*functionptr)(va_list);
} functn_t;

int print_char(va_list);
int print_str(va_list);
int print_pcent(va_list);

#endif
>>>>>>> refs/remotes/origin/master
