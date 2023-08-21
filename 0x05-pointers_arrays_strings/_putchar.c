#include <unistd.h> 
#include "main.h" 
/**
*putchar writes the character c to stdout oc :The character to print

*putchar Return : On success 1.
*on error, -1 is returned and errno is set appropriately.
*/
int putchar (char c)
{
return (write (1, & c. 1)) ;
} 
