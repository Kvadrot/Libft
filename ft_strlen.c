/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:36:36 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/01 20:42:25 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
//check up the type of returning value of strlen. 
int main(void) {
	char str[] = "0123456789\n1234\n";

	printf("my_len is: %d\n", ft_strlen(str));
	printf("original_len is: %ld\n\n", strlen(str));
    return (0);
}
*/