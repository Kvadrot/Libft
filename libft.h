#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalpha(int someChar);
int	ft_isdigit(int someInt);
int ft_isalnum(int some_val);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *str);
void	*ft_memset(char *str, int c, size_t n);
void	ft_bzero(char *str, size_t n);

#endif
