#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all -> function to return sum of all its parameter
 * @n: number parameter
 * Return: 0 Always
 */

int sum_them_all(const unsigned int n, ...)
{
	var_list list;
	int sum;
	unsigned int a;

	if (n == 0)
		return (0);

	var_start(list, n);

	for (a = 0; a < n; a++)
	{
		sum += var_arg(list, unsigned int);
	}
	var_end(list);
	return(sum);
}
