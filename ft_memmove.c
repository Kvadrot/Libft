/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:33:56 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/12 12:58:04 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	counter;

	if ((char *)dest > (char *)src)
	{
		counter = n;
		while (counter > 0)
		{
			*((char *)dest + counter) = *((char *)src + counter);
			if (counter == 0)
				break;
			counter--;
		}
		*((char *)dest + counter) = *((char *)src + counter);
	}
	else
	{
		counter = 0;
		while (counter < n)
		{
			*((char *)dest + counter) = *((char *)src + counter);
			counter++;
		}
	}
	return (dest);
}
