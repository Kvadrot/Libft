/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:25:27 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/07 21:48:46 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ind;
	size_t	comparablesize;
	size_t	s1len;
	size_t	s2len;

	ind = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	comparablesize = 0;
	while (s1[ind] != '\0' && s2[ind] != '\0' && comparablesize <= n)
	{
		if (s1[ind] > s2[ind])
			return (s1 - s2);
		else if (s1[ind] < s2[ind])
			return (s2 - s1);
		ind++;
	}
	if (s1len > s2len)
		return (s1 - s2);
	else if (s1len < s2len)
		return (s2 - s1);
	return (0);
}
