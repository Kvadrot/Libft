/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:18:32 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/02 18:33:17 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int someInt)
{
	if (someInt >= '0' && someInt <= '9')
		return (1);
	else
		return (0);
}