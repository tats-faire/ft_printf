#include "ft_printf.h"
#include <unistd.h>

void	makehex(unsigned int hexme, const char format)
{
	char		*hex_chart_lower;
	char		*hex_chart_upper;

	hex_chart_lower = "0123456789abcdef";
	hex_chart_upper = "0123456789ABCDEF";
	if (hexme >= 16)
	{
		makehex((hexme / 16), format);
		makehex((hexme % 16), format);
		count(1);
	}
	else
	{
		if (format == 'x')
			write(1, &hex_chart_lower[hexme], 1);
		else if (format == 'X')
			write(1, &hex_chart_upper[hexme], 1);
	}
}

int	ft_printhex(unsigned int num, const char format)
{
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	else
	{
		count(0);
		makehex(num, format);
		return (count(1));
	}
}
