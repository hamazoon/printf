#includ "main.h"


int _testFormat(const char *format)
{
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
	return (-1);
	return (0);
}

int testeStr(int count, va_list args)
{
	char *str = va_arg(args, char *);
	int j;

	if (str == NULL)
	str = "(null)";
	for (j = 0; str[j] != '\0'; j++)
	{
	 write(1, &str[j], 1);
		count++;
	}
	return (count);
}

int testChar(int count, va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	count++;
	return (count);
}

int teste(int count)
{
	write(1, "%", 1);
	count++;
	return (count);
}

