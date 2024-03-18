/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:14:47 by itykhono          #+#    #+#             */
/*   Updated: 2024/03/18 14:51:46 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int someChar)
{
	if ((someChar >= 'A' && someChar <= 'Z')
		|| (someChar >= 'a' && someChar <= 'z'))
		return (1);
	else
		return (0);
}
