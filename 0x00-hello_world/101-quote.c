#include <unistd.h>

/**
* main - Entry point
*
* Description: prints a qoute using  with write function
	 ssize_t write(int fd.const void *buf.size_t count);

* Return: Always 1 (not Success).
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 58);
	return (1);
}
