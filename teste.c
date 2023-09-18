#include "main.h"
/**
 * _testFormat - Test if the format string is valid.
 *
 * This function checks the validity of the format string by examining
 * the following cases:
 * - If the format string is NULL
 * - If the format string contains only '%' or '% ' (space)
 *
 * @format: The format string to be tested.
 *
 * Return: 0 if the format is valid, -1 otherwise.
 */
int _testFormat(const char *format)
	{
		if (format == NULL || (format[0] == '%' && format[1] == '\0'))
			return (-1);
		if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
			return (-1);
	}
/**
 * testeStr - Handle string formatting and printing.
 *
 * This function handles the printing of string arguments in the _printf
 * function. It prints each character of the string and counts the number
 * of characters printed.
 *
 * @count: The current character count.
 *
 * Return: The updated character count after processing.
 */

int testeStr(int count)
{
	count = 0;
	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j] != '\0'; j++)
	{
		write(1, &str[j], 1);
		count++;
	}
	return (count);
}
/**
 * testChar - Handle character formatting and printing.
 *
 * This function handles the printing of character arguments in the _printf
 * function. It prints the character and increments the character count.
 *
 * @count: The current character count.
 *
 * Return: The updated character count after processing.
 */
int testChar(int count)
{
	c = va_arg(args, int);
	write(1, &c, 1);
	count++;
	return (count);
}
/**
 * teste - Handle '%' character formatting and printing.
 *
 * This function handles the printing of '%' characters in the _printf
 * function. It prints the '%' character and increments the character count.
 *
 * @count: The current character count.
 *
 * Return: The updated character count after processing.
 */
int teste(int count)
{
	write(1, "%", 1);
	count++;
	return (count);
}
