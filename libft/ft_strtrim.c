/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:38:28 by fmakgato          #+#    #+#             */
/*   Updated: 2018/06/11 10:51:50 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int				b;
	int				e;
	char			*string;
	char			*out;

	if (s == NULL)
		return (NULL);
	b = 0;
	e = ft_strlen(s) - 1;
	while ((s[b] == ' ' || s[b] == '\n' || s[b] == '\t') && (s[b] != '\0'))
		b++;
	while ((s[e] == ' ' || s[e] == '\n' || s[e] == '\t') && (s[e] != '\0'))
		e--;
	if (b >= e)
		return (ft_strdup(""));
	string = ft_strnew(e - b + 1);
	if (string)
	{
		out = string;
		while (s[b] != '\0' && b <= e)
			*string++ = s[b++];
		return (out);
	}
	else
		return (NULL);
}
