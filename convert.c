/* C Program to convert decimal to any given base */

#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* To return char for a value. For example '2'*/
/* is returned for 2. 'A' is returned for 10. 'B' */
/* for 11*/
/**
 * reVal - convert intergers to character in base 16.
 * @num: number
 * Return: char
 */

char reVal(int num)
{
	if (num >= 0 && num <= 9)
		return ((char)(num + '0'));
	else
		return ((char)(num - 10 + 'a'));
}

/**
 * fromDeci - Function to convert a given decimal number to a base
 * @inputNum: number
 * @base: base
 * Return: char
 */

char *fromDeci(unsigned int inputNum, int base)
{
	int index = 0; /* Initialize index of result*/
	char *res = malloc(sizeof(char) * 100);

	/* Convert input number is given base by repeatedly*/
	/* dividing it by base and taking remainder*/
	while (inputNum > 0)
	{
		res[index++] = reVal(inputNum % base);
		inputNum /= base;
	}
	res[index] = '\0';

	/* Reverse the result */
	strev(res);

	return (res);
}

/**
 * print_unsigned_number - function that prints unsigned integer.
 * @n: interger
 * Return: int
 */

int print_unsigned_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9;)
		div *= 10;

	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
