/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:55:00 by fmakgato          #+#    #+#             */
/*   Updated: 2018/06/11 10:33:29 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		list_length(char const *s, char c)
{
	int len;

	len = 0;
	if (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	while (*s != '\0')
	{
		if (*s != c && s[-1] == c)
			len++;
		s++;
	}
	return (len + 1);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**list;

	if (s == NULL)
		return (NULL);
	list = (char**)malloc(sizeof(char*) * list_length(s, c));
	if (!list)
		return (NULL);
	j = 0;
	while (*s != '\0')
	{
		i = 0;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i)
		{
			list[j++] = ft_strncpy(ft_strnew(i), s, i);
			s = &s[i];
		}
		else
			s++;
	}
	list[j] = NULL;
	return (list);
}
