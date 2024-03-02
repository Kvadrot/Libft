/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:37:19 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/02 18:50:12 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*casted;

	i = 0;
	casted = (char *)s;
	while (i < n)
	{
		casted[i] = '\0';
		i++;
	}
}
/*
int main(void) {
	unsigned int i = 0;
	unsigned int j = 0;
	int test_result = 0;
	int test_result1 = 0;
	char str[] = "0123456789\n";
	char str1[] = "0123456789\n";

	ft_bzero(str, sizeof(str));
	while (i < sizeof(str))
	{
		if (str[i] == '\0')
		{
			test_result++;
		}
		i++;
	}
	bzero(str1, sizeof(str1));
	while (j < sizeof(str1))
	{
		if (str1[j] == '\0')
			test_result1++;
		j++;
	}
	printf("ft_bzero is: %d\n", test_result);
	printf("bzero is: %d\n", test_result1);

	printf("sizeofstr is: %ld\n", sizeof(str));
    return (0);
}
*/