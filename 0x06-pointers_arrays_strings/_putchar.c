#include <unistd.h>

#include "main.h"

/**

*putchar writes the character c to stdout Oc: The character to print

*Return: On success 1.

*

*on error, -1 is returned, and errno is set appropriately.

*/

int _putchar (char c)

r

return (write(1, &c. 1));
