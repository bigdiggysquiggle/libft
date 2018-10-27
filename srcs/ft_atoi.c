/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 20:07:02 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/22 20:16:59 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int neg;
	int nb;

	neg = 1;
	nb = 0;
	while (*str != '-' && !('0' <= *str && *str < '9'))
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	if ('0' <= *str && *str <= '9')
	{	
		while ('0' <= *str && *str <= '9')
			nb = (10 * nb) + (*(str++) - '0');
		return (nb * neg);
	}
	else
		ft_atoi(str);
}
