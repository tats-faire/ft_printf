#include <stdlib.h>
#include "ft_printf.h"
#include <unistd.h>

size_t	count_ui_len(unsigned int n)
{
	size_t	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

//Converts an unsigned integer into a string
char	*ft_uitoa(unsigned int nb)
{
	char	*s;
	size_t	len;

	len = count_ui_len(nb);
	s = (char *)malloc(sizeof(char) * len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	while (nb != 0)
	{
		s[len - 1] = nb % 10 + 48;
		len--;
		nb = nb / 10;
	}
	return (s);
}

int	ft_printunsigned(unsigned int nbr)
{
	char	*converted;
	int		len;

	if (nbr == 0)
		len = write(1, "0", 1);
	else
	{
		converted = ft_uitoa(nbr);
		if (!converted)
			return (0);
		len = ft_printstr(converted);
		free(converted);
	}
	return (len);
}
