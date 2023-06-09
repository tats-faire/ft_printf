#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

size_t	ft_strlen(const char *string);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
