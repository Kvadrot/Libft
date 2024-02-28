/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:46:30 by itykhono          #+#    #+#             */
/*   Updated: 2024/02/28 19:36:04 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int some_val)
{
	if ((ft_isalpha(some_val) == 1)
		|| (ft_isdigit(some_val) == 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
	int a = 65;
	printf("%i", ft_isalnum(a));
}
*/