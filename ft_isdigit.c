/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:18:32 by itykhono          #+#    #+#             */
/*   Updated: 2024/02/27 14:44:38 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int someInt)
{
	if (someInt >= '0' && someInt <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void) {
    int some = 48;
	

    printf("%i \n", ft_isdigit(some));
    int origResult = ft_isdigit(some);
    printf("%i", origResult);
    return 0;
}
*/