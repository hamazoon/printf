#include "main.h"

int _printf(const char *format, ...)
{
	int j, i, count = 0;
	char *str;
	char c;
	va_list args;
	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);
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
				str = va_arg(args, char *);
				if (str == NULL)
				str = "(null)";
				for (j = 0; str[j] != '\0'; j++)
				{
					write(1, &str[j], 1);
					count++;
				}
			}
			else if (format[i] == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				count++;
			}
			else if (format[i] == '%')
			{
				write(1, "%", 1);
				count++;
			}
		}
	}

	va_end(args);
	return (count);
}
