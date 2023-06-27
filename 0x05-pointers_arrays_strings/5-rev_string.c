#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a string in a reverse
 * @s: string to bbe modified
 * Return : void
*/
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
	r++;
	}

	for (r -= 1; r >= 0; r--)
	{
	putchar(s[r]);
	}
}
