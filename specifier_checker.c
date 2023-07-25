#include "main.h"

/**
* specifier_checker - checks if character after % is a valid specifier and
* prints the specified argument.
* @format: character specifier
* Return: returns a pointer to function of it's corresponding specifier,
* returns NULL.
*/

int (*specifier_checker(const char *format))(va_list)
{
	int j;

	functn_t specifier_array[4] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pcent},
		{NULL, NULL},
	};
	for (j = 0; specifier_array[j].t != NULL; j++)
	{
		if (*(specifier_array[j].t) == *format)
		{
			return (specifier_array[j].functionptr);
		}
	}
	return (NULL);
}
