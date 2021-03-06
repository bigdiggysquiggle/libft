/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 23:06:12 by dromansk          #+#    #+#             */
/*   Updated: 2019/12/05 22:28:16 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wordlen(char const *str, char d)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != d)
		i++;
	return (i);
}

static char		**split_malloc_prob(char **n, char **tmp)
{
	if (n)
		free(n);
	if (tmp)
		free(tmp);
	return (0);
}

static char		**ft_rill_split(const char *s, char **n, char **tmp, char c)
{
	int		i;
	int		len;

	i = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			len = wordlen(s, c);
			*tmp = ft_strndup(s, (size_t)len);
			n = (char **)array_join(n, sizeof(char **) * i, tmp,
					sizeof(char **) * 2);
			i++;
			s += len;
		}
		else
			s++;
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**n;
	char	**tmp;

	n = NULL;
	tmp = NULL;
	if (s == NULL || !(n = (char **)malloc(sizeof(char *))) ||
			!(tmp = (char **)malloc(sizeof(char *) * 2)))
		return (split_malloc_prob(n, tmp));
	*n = NULL;
	return (ft_rill_split(s, n, tmp, c));
}
