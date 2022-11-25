#include "main.h"

/**
 * _write_char - write the character c to stdout
 * @c: the character to print
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately
 *
 **/
int _write_char(char c)
{
	return (write(1, &c, 1));
}
