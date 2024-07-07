#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point of the program
 * 
 *Return: Always 0 if successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit(int number)
	{
	return abs(number) % 10;
	}
	void print_last_digit_message(int number)
	{
	int last_digit_value = last_digit(number);

	printf("The string last digit of %d is ", number);

	if (last_digit_value > 5) 
	{
	printf("%d and is greater than 5\n", last_digit_value);
	}
	else if (last_digit_value == 0) 
	{
	printf("%d and is 0\n", last_digit_value);
	}
	else 
	{
	printf("%d and is less than 6 and not 0\n", last_digit_value);
	}
	return (0);
}
