#include "ft_printf.h"
#include <unistd.h>

void	write_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		write_ptr(num / 16);
		write_ptr(num % 16);
		count(1);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_printptr(uintptr_t ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
	{
		count(0);
		write_ptr(ptr);
		len += count(1);
	}
	return (len);
}
