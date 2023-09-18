#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;

	va_start(args, format);
	if (_testFormat(format) == -1)
	{
		va_end(args);
		return (-1);
	}

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			i++;

			if (format[i] == 's')
			{
				count = testeStr(count, args);
			}
			else if (format[i] == 'c')
			{
				count = testChar(count, args);
			}
			else if (format[i] == '%')
			{
				count = teste(count);
			}
		}
	}

	va_end(args);
	return (count);
}
