#include "main.h"

/**
 * print_uint - substitute %u by argument number
 * @buff_dest: string to change
 * @arg: va_list arg to change
 * @buff_count: index of dst where the u of %u is
 * Return: new index
 */
int print_uint(char *buff_dest, va_list arg, int buff_count)
{
	int tens = 1;
	unsigned int tmp;
	unsigned int number;

	number = va_arg(arg, unsigned int);

	tmp = number;

	while (tmp > 9)
	{
		tens *= 10;
		tmp /= 10;
	}

	tmp = number;
	while (tens > 0)
	{
		buff_dest[buff_count] = ('0' + tmp /tens);
		tmp %= tens;
		tens /= 10;
		buff_count++;
	}

	return (buff_count);
}
