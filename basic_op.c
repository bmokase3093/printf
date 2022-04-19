#include "main.h"

/**
 * op_char - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a char.
 *
 * Return: 1.
 */
int op_char(va_list p)
{
	int container = (char)va_arg(p, int);

	_putchar(container);

	return (1);
}


/**
 * op_string - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a string.
 *
 * Return: The string length.
 */
int op_string(va_list p)
{
	int i = 0;
	char *s;

	s = va_arg(p, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}


/**
 * op_percent - main function
 * @p: The argument pointer.
 *
 * Description: This function prints a percent.
 *
 * Return: 1.
 */
int op_percent(va_list __attribute__((unused)) p)
{
	_putchar('%');
	return (1);
}
