#include <stdio.h>
#include "main.h"
/* define the _putchar function to avoid comilation errore
*/
	int _putchar(char c) {
		return write(1, &c, 1);
	} 

	int main(void) {
		char c[] = "_putchar";
		int a;

		for (a = 0 ; a < 8 ; a++)
		_putchar (c[a]);
		_putchar ('\n');
		return (0);

	}