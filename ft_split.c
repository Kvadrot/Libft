/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:20:40 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/15 19:37:14 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_words_amount(const char *source, char c)
{
	int 		result;
	size_t		main_counter;

	result = 0;
	main_counter = 0;
	while (source[main_counter] != '\0')
	{
		while (source[main_counter] != '\0' && source[main_counter] == c)
			main_counter++;
		if (source[main_counter] != '\0')
			result++;
		while (source[main_counter] != '\0' && source[main_counter] != c)
			main_counter++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
 {
	char	**result;
	int		main_counter;
	int		sub_counter;
	char	*tempstr;
	int		words_counter;

	if (!s)
		return(NULL);

	result = (char **)ft_calloc(ft_get_words_amount(s,c) + 1, sizeof(char *));
	main_counter = 0;
	words_counter = 0;
	while (s[main_counter] != '\0')
	{
		while (s[main_counter] != '\0' && s[main_counter] == c)
			main_counter++;
		if (s[main_counter] == '\0')
			break;
		sub_counter = main_counter;
		while (s[sub_counter] != '\0' && s[sub_counter] != c)
			sub_counter++;
		tempstr = ft_substr(s, main_counter, sub_counter - main_counter);
		s += sub_counter;
		if (!tempstr)
			return (NULL);
		result[words_counter] = tempstr;
		words_counter++;
		main_counter = 0;
	}
	result[words_counter] = NULL;
	return (result);
 }
