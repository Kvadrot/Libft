/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itykhono <itykhono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:14:47 by itykhono          #+#    #+#             */
/*   Updated: 2024/02/27 14:15:20 by itykhono         ###   ########.fr       */
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
/*

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char some = 'j';
	

    printf("%i \n", ft_isalpha(some));
    int origResult = isalpha(some);
    printf("%i", origResult);
    return 0;
}
*/
