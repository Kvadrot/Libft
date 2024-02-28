/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:31:30 by itykhono          #+#    #+#             */
/*   Updated: 2024/02/28 18:35:25 by itykhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}
/*
void	ft_printerror(int c)
{
	printf("results are different: ft_isprint -> %i \n", ft_isprint(c));
	printf("isprint -> %i \n", isprint(c));
	printf("this happend to %i \n\n\n: %c", c, c);
}

int main(void) {
	int c;
   	for(c = 1; c <= 127; ++c)
  		if (ft_isprint(c) == 0 && ft_isprint(c) != isprint(c))
   		{
			ft_printerror(c);
  		} else if (ft_isprint(c) > 0 && ft_isprint(c) != 1) {
			ft_printerror(c);
		}

    return (0);
}
*/
