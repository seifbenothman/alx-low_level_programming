#include <stdio.h>

/**
 * myStartupFun - Function that runs before the main function.
 * It prints the specified message.
 */
void myStartupFun(void) __attribute__((constructor));
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
