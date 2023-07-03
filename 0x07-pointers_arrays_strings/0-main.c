#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char buffer[98];

	_memset(buffer, 'H', 98);
	_putchar(buffer[0]);
	_putchar('\n');
	return (0);
}
