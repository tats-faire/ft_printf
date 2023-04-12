#include "ft_printf.h"

int	ft_print_format(va_list args, const char format)
{
	int	counter;

	counter = 0;
	if (format == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else if (format == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (format == 's')
		counter += ft_printstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		counter += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		counter += ft_printunsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		counter += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		counter += ft_printptr(va_arg(args, uintptr_t));
	return (counter);
}
