/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:40:19 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/13 11:35:24 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	local_size;
	size_t	dst_dynamiclen;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	dst_dynamiclen = ft_strlen(dst);
	local_size = 0;
	if (size <= 1 || size <= dst_len)
		return (ft_strlen(src) + size);
	while (src[local_size] != '\0' && local_size < size - 1)
	{
		dst[dst_dynamiclen] = src[local_size];
		local_size++;
		dst_dynamiclen++;
	}
	dst[local_size] = '\0';
	if (size > dst_len)
		return (dst_len + ft_strlen(src));
	else
		return (local_size + ft_strlen(src));
}
