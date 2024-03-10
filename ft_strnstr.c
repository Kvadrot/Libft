/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:48:39 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/10 13:47:50 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big != NULL)
	{
		big = ft_strchr(big, little[0]);
		if (ft_strncmp(big, little, len) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
