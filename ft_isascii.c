/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:22:27 by itykhono          #+#    #+#             */
/*   Updated: 2024/02/28 15:42:17 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int main(void) {
    int some = 128;
	int i = 0;
	for (i = 0; i < 140; i++) {
		printf("%i num %i \n", i, ft_isascii(i));
		// printf("%i num %i \n", i, isascii(i));
	}

    return 0;
}
*/