#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: input
 * @n: input
 *
 * Return: char
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
