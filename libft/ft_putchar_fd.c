// FUNCTION: WRITES A CHARACTER TO OUTPUT
// file descriptor: 0 = standard input;
// 1 = standard output; 2 = standard error

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
