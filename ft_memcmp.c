/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:51:01 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/18 19:28:55 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	ind;
	int		s1len;
	int		s2len;

	ind = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (n == 0)
		return (0);
	while (((char *)s1)[ind] != '\0'
		&& ((char *)s2)[ind] != '\0' && ind < n)
	{
		if (((unsigned char *)s1)[ind] != ((unsigned char *)s2)[ind])
			return (((unsigned char *)s1)[ind] - ((unsigned char *)s2)[ind]);
		ind++;
	}
	if (s1len > s2len && ind < n)
		return (0 + ((unsigned char *)s1)[ind]);
	else if (s1len < s2len && ind < n)
		return (0 - ((unsigned char *)s2)[ind]);
	return (0);
}
