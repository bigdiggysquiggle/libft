/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:39:25 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/26 18:02:26 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		j;
	char	*s2;

	j = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char *) * (j + 1));
	while (*s1)
		*(s2++) = *(s1++);
	*s2 = '\0';
	return (s2);
}
