/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:51:01 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/11 12:22:44 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		ind;
	size_t	comparablesize;
	int		s1len;
	int		s2len;

	ind = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	comparablesize = 0;
	if (n == 0)
		return (0);
	while (((char *)s1)[ind] != '\0'
		&& ((char *)s2)[ind] != '\0' && comparablesize <= n)
	{
		if (((char *)s1)[ind] > ((char *)s2)[ind])
			return (s1 - s2);
		else if (((char *)s1)[ind] < ((char *)s2)[ind])
			return (s2 - s1);
		ind++;
	}
	if (s1len > s2len)
		return (0 - ((int *)s2)[ind]);
	else if (s1len < s2len)
		return (0 - ((int *)s1)[ind]);
	return (ind);
}
