#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to print to stdout
 * Return: the number of characters printed excluding the
 * null byte used to end output to strings
 */
int _printf(const char *format, ...)
{
	int i, k, counter = 0;
	char c, *s;
	va_list m;

	va_start(m, format);
	if (format == NULL)
	return (-1);
	for (i = 0; format[i]; i++)
	{
	if (format[i] == '%')
	{
	i++;
	if (format[i] == 'c')
	{
	c = va_arg(m, int);
	counter += _putchar(c);
	}
	else if (format[i] == 's')
	{
	s = va_arg(m, char*);
	for (k = 0; s[k]; k++)
	_putchar(s[k]);
	counter += k;
	}
	else if (format[i] == '%')
	counter += _putchar('%');
	else
	{
	counter += _putchar('%');
	counter += _putchar(format[i]);
	}
	}
	else
	counter += _putchar(format[i]);
	}
	va_end(m);
	return (counter);
}
