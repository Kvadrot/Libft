/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:01:25 by itykhono          #+#    #+#             */
/*   Updated: 2024/02/28 19:24:23 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(char *str, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/*
int main() {
    char str[50];
	char str1[50];

    // Fill the str array with 'A'
	ft_memset(str, 'A', sizeof(str));
    memset(str1, 'B', sizeof(str1));
	// ft_memset(str, 'A', 60);
	// memset(str1, 'B', 60);
	
   

    // Print the result
	printf("Filled string: %s\n", str);
    printf("Filled string: %s\n", str1);

    return 0;
}
*/