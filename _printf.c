#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to print to stdout
 * Return: the number of characters printed excluding the
 * null byte used to end output to strings
 */
int _printf(const char *format, ...)
{	int i, k, counter = 0;
	char *s;
	va_list m;

	va_start(m, format);
	if (format == NULL)
	return (-1);
	for (i = 0; format[i]; i++)
	{
	if (format[i] == '%')
	{
	if (!format[++i])
		break;
	if (format[i] == 'c')
	{
	counter += _putchar(va_arg(m, int));
	}
	else if (format[i] == 's')
	{
	s = va_arg(m, char*);
	s = s ? s : "(null)";
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
	return (counter == 0 ? -1 : counter);
}
