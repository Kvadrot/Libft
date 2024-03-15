/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:20:40 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/15 15:54:17 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
 {
	// char	**result;
	int		main_counter;
	int		sub_counter;
	char	*tempstr;

	int test = 2;
	if (!s)
		return(NULL);
	main_counter = 0;

	while (s[main_counter] != '\0')
	{
		while (s[main_counter] != '\0' && s[main_counter] == c)
			main_counter++;
		sub_counter = main_counter;
		printf("==============\n");
		printf("s[sub] = %c\n", s[sub_counter]);
		printf("==============\n");
			
		while (s[sub_counter] != '\0' && s[sub_counter] != c)
		{
			sub_counter++;
		}
		tempstr = ft_substr(s, main_counter, sub_counter - main_counter);
		s += sub_counter;
		main_counter = 0;
		// printf("startInd = %d\n", main_counter);
		printf("len = %d\n",sub_counter - main_counter);
		printf("tempstr = %s\n", tempstr);
		// printf("main_counter = %c\n", s[main_counter]);
		// printf("len = %zu\n", ft_strlen(s));
		test--;
		if( test == -1)
		{
			break;
		}
	}

	return (NULL);
 }

 // "0123 567 94"