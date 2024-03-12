/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:02:29 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/12 15:09:07 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strdup(const char *s)
{
	char	*newstr;
	char	*start;

	if (!*s)
		return (NULL);
	newstr = (char *)malloc((ft_strlen(s) + 1) * sizeof(newstr));
	if (!newstr)
		return (NULL);
	start = newstr;
	while (*s)
	{
		*newstr++ = *s++;
	}
	*newstr = '\0';
	return (start);
}
