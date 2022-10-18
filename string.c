#include "main.h"
#include <stdlib.h>

char *int2str(unsigned int number)
{
	int no_of_digits, prev = 0, i, j;
	char *number_string;

	no_of_digits = get_number_of_digits(number);

	number_string = (char *)malloc(sizeof(char) * (no_of_digits + 1)); // +1 for NULL
	for (i = 0, j = _pow(10, no_of_digits - 1); i < no_of_digits; i++, j /= 10)
	{
		number_string[i] = (number / j - (prev * 10)) + 48; // int to ascii
		prev = number / j;
	}
	number_string[i] = '\0';
	return (number_string);
}

int _strlen(char *s)
{
	int i, sum;

	sum = 0;

	for (i = 0; *(s + i); i++)
	{
		sum++;
	}
	return (sum);
}

void strev(char *str)
{
	int len = _strlen(str);
	int i;
	for (i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

/**
 * string_toupper - converts lowercase to uppercase
 * @str: function input
 * Return: char*
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
