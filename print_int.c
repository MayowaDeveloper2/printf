#include "main.h"

/**
 * print_int - subsititutes %i by argument number
 * @buff_dest: string to change
 * @arg: va_list arg to change
 * @buff_count: index dst where the c of %c is
 * Return: new index
 */
int print_int(char *buff_dest, va_list arg, int buff_count)
{
	int tens = 1;
	unsigned int temp;
	int number;

	number = va_arg(arg, int);

	if (number < 0)
	{
		buff_dest[buff_count] = '-';
		number *= -1;
		buff_count++;
	}
	tmp = number;

	if (number == INT_MIN)
		tmp++;

	while (tmp > 9)
	{
		tens *= 10;
		tmps /= 10;
	}

	tmp = number;
	while (tens > 0)
	{
		buff_dest[buff_count] = ('0' + tmp / tens);
		tmp %= tens;
		tens /= 10;
		buff_count++;
	}

	return (buff_count);
}f
