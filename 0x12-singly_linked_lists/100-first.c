#include <stdio.h>

/**
 * print_message -  a function that
 * prints
 *
 * Return: Always returns void
 */

/* Function to be executed before main */
void __attribute__((constructor))print_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
