#include "main.h"
#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
	int j, i, count = 0;
	char *str;
	char c;
	va_list args;
	int length = 0;

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
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				if (num == 0)
				{
					char zero = '0';

					write(1, &zero, 1);
					count++;
				} else
				{
					char numStr[32];

					int isNegative = 0;

					if (num < 0)
					{
						isNegative = 1;
						num = -num;
					}

					while (num > 0)
					{
						numStr[length] = '0' + (num % 10);
						num /= 10;
						length++;
					}
					if (isNegative)
					{
						numStr[length] = '-';
						length++;
					}
					for (i = 0; i < length / 2; i++)
					{
						char temp = numStr[i];

						numStr[i] = numStr[length - i - 1];
						numStr[length - i - 1] = temp;
					}
					write(1, numStr, length);
					count++;
				}
			}
		}

	}
		va_end(args);
		return (count);
}
