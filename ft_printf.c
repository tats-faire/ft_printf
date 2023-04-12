/*
	%%		-> print a percent sign
	%c		-> single character
	%s		-> string
	%d/i	-> integer
	%u		-> unsigned integer
	%x		-> hexadecimal (base 16) lowercase
	%X		-> hexadecimal  (base 16) uppercase
	%p		-> void *pointer argument converted to hexadecimal
*/

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += ft_print_format(args, format[i + 1]);
			i++;
		}
		else
		{
			count++;
			ft_putchar_fd(format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
