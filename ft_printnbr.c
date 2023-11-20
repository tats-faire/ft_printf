#include "ft_printf.h"
#include <stdlib.h>

int	ft_printnbr(int nbr)
{
	int		len;
	char	*num;

	num = ft_itoa(nbr);
	len = ft_strlen(num);
	ft_putnbr_fd(nbr, 1);
	free(num);
	return (len);
}
