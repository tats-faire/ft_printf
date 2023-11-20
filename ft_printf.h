#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdint.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_format(va_list args, const char format);
int	ft_printstr(char *str);
int	ft_printnbr(int nbr);
int	ft_printunsigned(unsigned int nbr);
int	ft_printhex(unsigned int num, const char format);
int	ft_printptr(uintptr_t ptr);
int	count(int mode);

#endif
