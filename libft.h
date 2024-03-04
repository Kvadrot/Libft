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
size_t	ft_strlen(char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);

#endif
